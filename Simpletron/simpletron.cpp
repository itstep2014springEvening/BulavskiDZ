#include <iostream>
#include <fstream>
#include "simpletron.h"

using namespace std;

static void read(int *memory, int addrRegistor,
                 int &, int &instrRegistor,
                 bool &)
{
    cin >> memory[addrRegistor];
    instrRegistor++;
}

static void write(int *memory, int addrRegistor,
                  int &, int &instrRegistor,
                  bool &)
{
    cout << memory[addrRegistor];
    instrRegistor++;
}

static void load(int *memory, int addrRegistor,
                 int &akkomulyator, int &instrRegistor,
                 bool &)
{
    akkomulyator = memory[addrRegistor];
    instrRegistor++;
}

static void store(int *memory, int addrRegistor,
                  int &akkomulyator, int &instrRegistor,
                  bool &)
{
    memory[addrRegistor] = akkomulyator;
    instrRegistor++;
}

static void add(int *memory, int addrRegistor,
                int &akkomulyator, int &instrRegistor,
                bool &)
{
    akkomulyator += memory[addrRegistor];
    instrRegistor++;
}

static void subtract(int *memory, int addrRegistor,
                     int &akkomulyator, int &instrRegistor,
                     bool &)
{
    akkomulyator -= memory[addrRegistor];
    instrRegistor++;
}

static void divide(int *memory, int addrRegistor,
                   int &akkomulyator, int &instrRegistor,
                   bool &)
{
    akkomulyator /= memory[addrRegistor];
    instrRegistor++;
}

static void multiply(int *memory, int addrRegistor,
                     int &akkomulyator, int &instrRegistor,
                     bool &)
{
    akkomulyator *= memory[addrRegistor];
    instrRegistor++;
}

static void branch(int *, int addrRegistor,
                   int &, int &instrRegistor,
                   bool &)
{
    instrRegistor = addrRegistor;
}

static void branchneg(int *, int addrRegistor,
                      int &akkomulyator, int &instrRegistor,
                      bool &)
{
    if (akkomulyator<0)
        instrRegistor = addrRegistor;
    else
        instrRegistor++;
}

static void branchzero(int *, int addrRegistor,
                       int &akkomulyator, int &instrRegistor,
                       bool &)
{
    if (akkomulyator == 0)
        instrRegistor = addrRegistor;
    else
        instrRegistor++;
}

static void halt(int *, int, int &, int &, bool &run)
{
    run = false;
}

Simpletron::Simpletron():
    instrRegistor(0),
    akkomulyator(0)
{
    for(int i = 0; i < 100; ++i)
        memory[i] = 0;

    setOfCom[10] = read;
    setOfCom[11] = write;
    setOfCom[20] = load;
    setOfCom[21] = store;
    setOfCom[30] = add;
    setOfCom[31] = subtract;
    setOfCom[32] = divide;
    setOfCom[33] = multiply;
    setOfCom[40] = branch;
    setOfCom[41] = branchneg;
    setOfCom[42] = branchzero;
    setOfCom[43] = halt;
}

void Simpletron::execute()
{
    while(run)
    {
        int vComm = memory[instrRegistor] / 100;
        int vAddr = memory[instrRegistor] % 100;
        setOfCom[vComm](memory, vAddr, akkomulyator,
                instrRegistor, run);
    }
}


void Simpletron::setInMemory(std::string file)
{
    ifstream fin(file);
    if(!fin.is_open())
        cout << "Ne udalos' otkryt' file";
    int iComm = 0;

    while(!fin.eof())
    {
        int n;

        fin >> n;
        memory[iComm] = n;
        ++iComm;
    }

}










