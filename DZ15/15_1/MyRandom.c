int WikiTableRandom ()
{
    long int a=4096, c=150889, m=714025;
    static int x;
    x=(a*x+c)%m;
    return x;
}

int MyRandom ()
{
    long int a=9, c=49, m=64;
    static int x;
    x=(a*x+c)%m;
    return x;
}
