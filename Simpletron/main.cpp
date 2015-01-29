#include <fstream>
#include "simpletron.h"

using namespace std;

int main()
{

    Simpletron m;
    m.setInMemory("D://Vadim/SML.txt");
    m.execute();
    return 0;
}

