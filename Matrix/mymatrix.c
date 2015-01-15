#include <iostream>
#include <cstdlib>
#include <utility>
#include "mymatrix.h"

using namespace std;

Matrix::Matrix():
    mtr(nullptr),
    m(0),
    n(0)
{

}

Matrix::Matrix(Matrix &&other):
    mtr(nullptr)
{
    swap(mtr, other.mtr);
}

Matrix &Matrix::operator=(const Matrix &other)
{
    Matrix temp(other);
    swap(*this, temp);
    return *this;
}
