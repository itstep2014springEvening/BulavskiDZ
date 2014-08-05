#include <stdio.h>
#include <stdlib.h>
int hod(int a)
{
    switch (a)
    {
    case 1:
        printf(" -----\n"
               "|     |\n"
               "|  O  |\n"
               "|     |\n"
               " -----\n");
        break;
    case 2:
        printf(" -----\n"
               "|O    |\n"
               "|     |\n"
               "|    O|\n"
               " -----\n");
        break;
    case 3:
        printf(" -----\n"
               "|O    |\n"
               "|  O  |\n"
               "|    O|\n"
               " -----\n");
        break;
    case 4:
        printf(" -----\n"
               "|O   O|\n"
               "|     |\n"
               "|O   O|\n"
               " -----\n");
        break;
    case 5:
        printf(" -----\n"
               "|O   O|\n"
               "|  O  |\n"
               "|O   O|\n"
               " -----\n");
        break;
    case 6:
        printf(" -----\n"
               "|O   O|\n"
               "|O   O|\n"
               "|O   O|\n"
               " -----\n");
        break;
    }
    return 0;
}

void sbros()
{
    system("pause");
    system("CLS");
}
