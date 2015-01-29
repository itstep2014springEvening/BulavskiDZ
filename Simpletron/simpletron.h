#ifndef SIMPLETRON_H
#define SIMPLETRON_H
#include <map>
#include <string>

typedef void (*Command)(int *, int, int &, int &, bool &);

class Simpletron
{
public:
    Simpletron();
    Simpletron(const Simpletron &other) = default;
    Simpletron &operator=(const Simpletron &other) = default;
    Simpletron(Simpletron &&other) = default;
    Simpletron &operator=(Simpletron &&other) = default;
    ~Simpletron() = default;

    void execute();
    void setInMemory(std::string file);

private:
    int instrRegistor;
    int akkomulyator;
    int memory[100];
    bool run = true;

    std::map<int, Command> setOfCom;

    //void setInMemory();

};

#endif // SIMPLETRON_H
