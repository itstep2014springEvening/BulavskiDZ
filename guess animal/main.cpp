#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

struct Node
{
    char str_question[1024];
    Node *yesLink;
    Node *noLink;
};

void createNode (Node *&p, char *str);
bool respond();
void gameProcess (Node *root);
bool isAnimal(Node *node);
void addAnimal(Node *p);
void clear (Node *&root);

int main()
{
    cout << "Хотите сыграть в игру, \"угадай животное\"?" << endl;
    Node *root;
    if(respond())
    {
        createNode(root,"кот");
        do
        {
            system("clear");
            cout << "Загадайте животное." << endl;
            system("sleep 1.5");
            gameProcess(root);
            cout << "Хотите ещё сыграть?" << endl;
        }
        while(respond());
    }
    clear(root);
    return 0;
}

void clear (Node *&root)
{

    if(root)
    {
        clear(root->yesLink);
        clear(root->noLink);
        delete root;
        root = nullptr;
    }
}

void createNode (Node *&p, char *str)
{

    p = nullptr;
    p = new Node;
    p->noLink=nullptr;
    p->yesLink=nullptr;
    strcpy(p->str_question, str);
}

bool respond()
{
    cout << "Ответьте, пожалуйста, да или нет"<<endl;
    char str[1024];
    cin.getline(str,1024);
    while(strcmp(str,"да")!=0 && strcmp(str,"нет")!=0)
    {
        cout << "Принимается только ответ да или нет"<<endl;
        cin.getline(str,1024);
    }
    return  strcmp(str,"да")==0;
}

void gameProcess (Node *root)
{
    if(root==nullptr)
        return;

    Node *p = root;
    while (!isAnimal(p))
    {
        cout << p->str_question << endl;
        if (respond())
            p = p->yesLink;
        else
            p = p->noLink;
    }
    cout << "Это " << p->str_question<<"?\nУгадала?\n";
    if(respond())
        cout << "Ура! Я выиграла!"<< endl;
    else
    {
        addAnimal(p);
    }
}

bool isAnimal(Node *node)
{
    return node!=nullptr && node->noLink==nullptr && node->yesLink==nullptr;
}

void addAnimal(Node *p)
{
    cout << "Введите, пожалуйста, ваш вариант:\n" << endl;
    char str[1024];
    cin.getline(str,1024);
    Node *oldAnimal, *newAnimal;
    createNode(oldAnimal,p->str_question);
    createNode(newAnimal,str);
    cout << "Чем отличается от " << oldAnimal->str_question << "?" << endl;
    cin.getline(str, 1024);
    strcpy(p->str_question, str);
    cout << "Какой правильный ответ для " << newAnimal->str_question <<"?"<<endl;
    if(respond())
    {
        p->yesLink = newAnimal;
        p->noLink = oldAnimal;
    }
    else
    {
        p->noLink = newAnimal;
        p->yesLink = oldAnimal;
    }
}
