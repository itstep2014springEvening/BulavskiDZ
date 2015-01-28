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

int main()
{
    /*set<string> keyword={"rem", "let", "if",
                         "goto", "print", "end"};*/
    map<string, Key> keyword={make_pair("rem", Rem), make_pair("let", Let), make_pair("if", If),
                              make_pair("goto", Goto),make_pair("input", Input), make_pair("print", Print), make_pair("end", End)};

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
        case Input:
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
            break;



        }
    }

    for(int i=0; i<10; ++i)
    {
        cout<<setw(2)<<setfill('0')<<i<<"\t";
        cout<<(memory[i]>=0?"+":"-")<<setw(4)<<setfill('0')<<abs(memory[i])<<endl;
    }

    return 0;
}

