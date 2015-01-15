#include <iostream>
#include <cstdlib>
#include <utility>
#include "mymatrix.h"

using namespace std;



int main()
{
    Matrix a;
    a.input();
    a.otput();
    return 0;
}

/*Matrix::Matrix()
{
    mtr = nullptr;
    mtr = new Matrix;
    for (int i = 0; i < m; ++i)
        mtr[i] = 0;
}


Matrix::Matrix(Matrix &&other):
    mtr(nullptr),
    m(0),
    n(0)
{
    swap(mtr, other.mtr);
    swap(m, other.m);
    swap(n, other.n);
}*/
/*void Matrix::input()
{
    cout << "M = ";
    cin >> m
    cout << "N = ";
    cin >> n;
    for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j)
            cin >> **mtr;


}
void Matrix::otput()
{
    for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j)
        {
            if(i==n || j==m || j==i)
                cout << *mtr;
        }
    cout << "\n";
}
Matrix::~Matrix()
{
    for (int i = 0; i < m; ++i)
    {
        delete [] mtr[i];
        mtr[i] = nullptr;
    }
    delete [] mtr;
    mtr = nullptr;
}*/
