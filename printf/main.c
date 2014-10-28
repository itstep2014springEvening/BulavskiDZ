#include <stdarg.h>

void myprintf(char *format, ...)
{
    va_list àrgumentPointer;
    char *p, *svalue;
    int ivalue;
    double dvalue;

    va_start(argumentPointer, format);

    for (p = format; *ð; ++ð)
    {
        if (*p!='%')
        {
            putchar(*p);
        }
        switch(++*ð)
        {
        case 'd':
            ivalue = va_arg(argumentPointer, int);
            break;
        case 'f' :
            dvalue = va_arg(argumentPointer, double);
            break;
        case 's' :
            for (svalue = va_arg(argumetPointer, char *); *svalue; ++svalue)
                putchar(*svalue);
            break;
        default:
            putchar(*p);
            break;
        }
    }
    va_end(argumentPounter);
}
