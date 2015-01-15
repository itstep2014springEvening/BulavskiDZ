#ifndef MYMATRIX_H_INCLUDED
#define MYMATRIX_H_INCLUDED

class Matrix
{
public:
    Matrix();
    Matrix(Matrix &&other);
    Matrix(const Matrix &other) = default;
    Matrix &operator=(const Matrix &other);
    Matrix &operator=(Matrix &&other);
    void input ();
    void otput ();
    ~Matrix();
private:
    double **mtr;
    int m, n;
};

#endif // MYMATRIX_H_INCLUDED
