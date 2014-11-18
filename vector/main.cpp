#include <iostream>

using namespace std;

class Vector
{
public:
    void output();
    Vector(double x, double y, double z);
    Vector operator+(Vector b);
    Vector operator-(Vector b);
    double dot(Vector b);
    Vector cross(Vector b);
    ~Vector();
private:
    double x, y, z;
};
int main()
{
    Vector a(-1.0,3.0,3.5), b(2.0,4.0,4.9);
    (a+b).output();
    (a-b).output();
    cout << a.dot(b)<<endl;
    (a.cross(b)).output();
    return 0;
}

void Vector::output()
{
    cout << "("<< x <<", "<<y<<", "<<z<<")"<<endl;
}

Vector::Vector(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

Vector Vector::operator+(Vector b)
{
    Vector result(0,0,0);
    result.x = x + b.x;
    result.y = y + b.y;
    result.z = z + b.z;
    return result;
}

Vector Vector::operator-(Vector b)
{
    Vector result(0,0,0);
    result.x = x - b.x;
    result.y = y - b.y;
    result.z = z - b.z;
    return result;
}

double Vector::dot(Vector b)
{
    double a;
    Vector result(0,0,0);
    result.x = x * b.x;
    result.y = y * b.y;
    result.z = z * b.z;
    a = result.x + result.y + result.z;
    return a;
}

 Vector Vector::cross(Vector b)
 {
     Vector result(0,0,0);
     result.x = y * b.z - z * b.y;
     result.y = z * b.x - x * b.z;
     result.z = x * b.y - y * b.x;
     return result;
 }

Vector::~Vector()
{
    x = 0;
    y = 0;
    z = 0;
}
