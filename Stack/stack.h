#ifndef STACK_H
#define STACK_H

struct DAC
{
    double x;
    char operation;
    bool isDouble;
};

typedef DAC Data;

class Stack
{
public:
    Stack();
    Stack(const Stack &other);
    Stack &operator=(const Stack &other);
    Stack(Stack &&other);
    Stack &operator =(Stack &&other);
    void pop();
    void push(Data data);
    Data onTop() const;
    bool isEmpty()const;
    void clear();
    ~Stack();
private:
    struct Node
    {
        Data data;
        Node *next;
        Node(Data data);
        ~Node();
    } *top;
    static Node *copy(const Node *otherTop);
};

#endif // STACK_H
