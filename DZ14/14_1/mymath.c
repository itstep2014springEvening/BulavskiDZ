int GCD (int a, int b)
{
    int c;
    while (c>0)
    {
        c=a%b;
        a=b;
        b=c;
        if (c==0)
        {
            b=a;
        }
    }
    return b;
}

int LCM (int a, int b)
{
    return a*(b/GCD(a,b));
}
