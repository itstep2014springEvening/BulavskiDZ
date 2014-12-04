#include <iostream>
#include "stack.h"
#include <string>
#include <cmath>

using namespace std;

const int N = 256;
const string operators("()+-*/^");

void fromStackToPolish(DAC *polish, int &j, Stack &stack);
int prioritet (DAC a);
bool isOperator(char symbol);
void output(DAC *polish, int size);

int main()
{
    Stack stack;
    DAC polish[N];
    string str;
    string allowed(" 0123456789.eE()+-*/^");


    bool mustRepeat;
    do
    {
        mustRepeat = false;
        getline(cin, str);

        for (int i = 0, end = str.length(); i < end; ++i)
        {
            if(allowed.find(str[i]) == string::npos)
            {
                cerr << "error\n";
                mustRepeat = true;
                break;
            }
        }

    } while(mustRepeat);
    str = "(" + str + ")";

    int j = 0;
    bool wasNumber = false;
    for (int i = 0, end = str.length(); i < end; ++i)
    {
        if(str[i] != ' ')
        {
            if((isOperator(str[i]) && str[i] != '-') || (isOperator(str[i]) && wasNumber))
            {
                if(str[i] == '(')
                {
                    DAC currentSymbol = {0.0, '(', false};
                    stack.push(currentSymbol);
                }
                else if(str[i] == ')')
                {
                    while (stack.onTop().operation != '(')
                    {
                        fromStackToPolish(polish, j, stack);
                    }
                    stack.pop();
                }
                else
                {
                    DAC currentSymbol = {0.0, str[i], false};
                    while(prioritet(stack.onTop()) >= prioritet(currentSymbol))
                    {
                        fromStackToPolish(polish, j, stack);
                    }
                    stack.push(currentSymbol);
                }
                wasNumber = false;
            }
            else
            {
                unsigned int last;
                polish[j].x = stod(str.substr(i), &last);
                polish[j].isDouble = true;
                i += last - 1;
                ++j;
                wasNumber = true;
            }

        }
    }
    if(!stack.isEmpty())
        throw exception();

    //output(polish, j);


    for (int i = 0; i < j; ++i)
    {
        if(polish[i].isDouble)
            stack.push(polish[i]);
        else
        {
            DAC a, b, c;
            b = stack.onTop();
            stack.pop();
            a = stack.onTop();
            stack.pop();
            c.isDouble = true;
            switch (polish[i].operation)
            {
            case '+':
                c.x = a.x + b.x;
                break;
            case '-':
                c.x = a.x - b.x;
                break;
            case '*':
                c.x = a.x * b.x;
                break;
            case '/':
                c.x = a.x / b.x;
                break;
            case '^':
                c.x = pow(a.x, b.x);
                break;
            }
            stack.push(c);
        }
    }

    cout << stack.onTop().x;
    return 0;
}

int prioritet (DAC a)
{
    return operators.find(a.operation) / 2;
}

bool isOperator(char symbol)
{
    return operators.find(symbol) != string::npos;
}

void fromStackToPolish(DAC *polish, int &j, Stack &stack)
{
    polish[j] = stack.onTop();
    stack.pop();
    ++j;
}

void output(DAC *polish, int size)
{
    for(int i = 0; i < size; ++i)
        if(polish[i].isDouble)
            cout << polish[i].x << " ";
        else
            cout << polish[i].operation << " ";
    cout << endl;
}




