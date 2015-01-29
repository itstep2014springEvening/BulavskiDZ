#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cstring>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <set>
#include <map>
#include <cmath>

using namespace std;

struct Symbol
{
    string value;
    enum Type {line, var, cons} type;
    int location;
    Symbol(string value, Type type, int location):value(value),type(type),location(location){}
};

enum Key {Rem, Let, If, Goto, Input, Print, End};
enum Oper{Add, Sub, Div, Mull};


int main()
{
    map<string, Key> keyword={make_pair("rem", Rem), make_pair("let", Let), make_pair("if", If),
                              make_pair("goto", Goto),make_pair("input", Input), make_pair("lala", Print),
                              make_pair("end", End)};

    map<string, Oper> operation = {make_pair("+", Add), make_pair("-", Sub), make_pair("/", Div), make_pair("*", Mull)};

    ifstream fin("Simpl.txt");
    vector<vector<string>> program;

    while (!fin.eof())
    {
        string str;

        getline(fin, str);

        program.push_back(vector<string>());
        stringstream strin(str);
        while(!strin.eof())
        {
            string token;
            strin >> token;
            program.back().push_back(token);
        }
    }

    vector<Symbol> tableSymbol;
    int counterCommandSml = 0;
    int counterFreeValue = 99;
    int memory[100]={0};
    int sizeMemory = 0;
    // token;

    for (size_t i = 0; i < program.size(); ++i)
    {
        auto token = program[i][0];

        {
            auto it = find_if(tableSymbol.begin(), tableSymbol.end(),
                            [token](Symbol x){return x.value == token && x.type == Symbol::line;});
            if (it == tableSymbol.end())
                tableSymbol.push_back(Symbol(token, Symbol::line, counterCommandSml));
        }

        switch(keyword[program[i][1]])
        {
        case Rem:
            break;
        case Let:
           {
            stack<int> stack;
            token = program[i][2];

            auto gt = find_if(tableSymbol.begin(),tableSymbol.end(),
                               [token](Symbol x){return x.value == token && x.type == Symbol::var;});
            if(gt == tableSymbol.end())
             {
                 tableSymbol.push_back(Symbol(token, Symbol::var, counterFreeValue));
                 --counterFreeValue;
                 gt = find_if(tableSymbol.begin(), tableSymbol.end(),
                                               [token](Symbol x){return x.value == token && x.type == Symbol::var;});
             }
            stack.push(2100+gt->location);

            token = program[i][6];
            gt = find_if(tableSymbol.begin(),tableSymbol.end(),
                          [token](Symbol x){return x.value == token && x.type == Symbol::var;});
            if(gt == tableSymbol.end())
            {
            tableSymbol.push_back(Symbol(token, Symbol::var, counterFreeValue));
            --counterFreeValue;
            gt = find_if(tableSymbol.begin(), tableSymbol.end(),
                                           [token](Symbol x){return x.value == token && x.type == Symbol::var;});
            }

            switch(operation[program[i][5]])
            {
            case Add:
               stack.push(3000+gt->location);
               break;
            case Sub:
               stack.push(3100+gt->location);
               break;
            case Div:
               stack.push(3200+gt->location);
               break;
            case Mull:
               stack.push(3300+gt->location);
               break;
            }

            token = program[i][4];
            gt = find_if(tableSymbol.begin(),tableSymbol.end(),
                               [token](Symbol x){return x.value == token && x.type == Symbol::var;});
            if(gt == tableSymbol.end())
             {
                 tableSymbol.push_back(Symbol(token, Symbol::var, counterFreeValue));
                 --counterFreeValue;
                 gt = find_if(tableSymbol.begin(), tableSymbol.end(),
                                               [token](Symbol x){return x.value == token && x.type == Symbol::var;});
             }
            stack.push(2000+gt->location);
            while(!stack.empty())
            {
                memory[counterCommandSml] = stack.top();
                stack.pop();
                ++counterCommandSml;
                ++sizeMemory;
            }
        }
            break;
        case If:
            break;
        case Goto:
            break;
        case Input:
        {
            token = program[i][2];
            auto jt = find_if(tableSymbol.begin(), tableSymbol.end(),
                              [token](Symbol x){return x.value == token && x.type == Symbol::var;});
            if(jt == tableSymbol.end())
            {
                tableSymbol.push_back(Symbol(token, Symbol::var, counterFreeValue));
                --counterFreeValue;
                jt = find_if(tableSymbol.begin(), tableSymbol.end(),
                                              [token](Symbol x){return x.value == token && x.type == Symbol::var;});
            }

            memory[counterCommandSml]=1000+jt->location;
            ++counterCommandSml;
            ++sizeMemory;
        }
            break;
        case Print:
        {
            token = program[i][2];
            auto mt = find_if(tableSymbol.begin(), tableSymbol.end(),
                              [token](Symbol x){return x.value == token && x.type == Symbol::var;});

            memory[counterCommandSml]=1100+mt->location;
            ++sizeMemory;
            break;
        }
        case End:
            memory[counterCommandSml]=4300;
            break;
        }
    }

    for(int i=0; i<10; ++i)
    {
        cout<<setw(2)<<setfill('0')<<i<<"\t";
        cout<<(memory[i]>=0?"+":"-")<<setw(4)<<setfill('0')<<abs(memory[i])<<endl;
    }
    ofstream sml("D://Vadim/SML.txt");
    for(int i = 0; i < sizeMemory; ++i)
    {
        sml << memory[i] << endl;
    }
    sml.close();



    return 0;
}

