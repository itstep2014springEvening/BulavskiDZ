#include "stack.h"
#include <utility>
#include <exception>

using namespace std;

Stack::Stack():
    top(nullptr)
{
}

Stack::Stack(const Stack &other):
    top(nullptr)
{
    top = copy(other.top);
}

Stack &Stack::operator =(const Stack &other)
{
    Stack temp(other);
    swap (*this, temp);
    return *this;
}

Stack::Stack(Stack &&other):
    top(nullptr)
{
    swap(top, other.top);
}

Stack &Stack::operator =(Stack &&other)
{
    swap(*this, other);
    return *this;
}

Stack::~Stack()
{
    clear();
}

Stack::Node *Stack::copy(const Stack::Node *otherTop)
{
    Node *newTop = nullptr;
    Node *p = nullptr;
    const Node *q = otherTop;
    p = new Node(q->data);
    newTop = p;
    q = q->next;
    while(q!=nullptr)
    {
        Node *r = nullptr;
        r = new Node(q->data);
        p->next = r;
        p = p->next;
        q = q->next;
    }
    return newTop;
}

void Stack::push(Data data)
{
    Node *p = nullptr;
    p = new Node(data);
    p->next = top;
    top = p;
}

void Stack::pop()
{
    if(!isEmpty())
    {
        Node *p = top;
        top = top->next;
        delete p;
    }
}

Data Stack::onTop()const
{
    if(isEmpty())
        throw exception();
    return top->data;
}

bool Stack::isEmpty()const
{
    return top == nullptr;
}

void Stack::clear()
{
    while(!isEmpty())
    {
        Node *p = top;
        top = top->next;
        delete p;
        p = nullptr;
    }
}

Stack::Node::Node(Data data):
    data(data),
    next(nullptr)
{
}

Stack::Node::~Node()
{
    next = nullptr;
}

