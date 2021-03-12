#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(double x, double y)
{
    _r=x;
    _im=y;
}

void ComplexNumber::operator*=(double x)
{
    _r*=x;
    _im*=x;
}

ComplexNumber ComplexNumber::operator++(int x)
{
    ComplexNumber temp=*this;
    ++_r;
    return temp;
}

ComplexNumber ComplexNumber::operator++()
{
    
    _r++;
    return *this;
}

ComplexNumber ComplexNumber::operator-(ComplexNumber a)
{
    a._r=_r-a._r;
    a._im=_im-a._im;
    return a;
}

int ComplexNumber::operator<(ComplexNumber a) const
{
    double R = _r*_r + _im*_im;
    double Ra = a._r*a._r + a._im*a._im;
    if(R<Ra)
        return 1;
    return 0;
}

double &ComplexNumber::operator[] (int i)
{
    if(i==0)
        return _r;
    return _im;
}

void ComplexNumber::operator-=(double a)
{

}

ComplexNumber::operator double()
{
    return _r;
}

std::ostream &operator<<(std::ostream &o,ComplexNumber temp)
{
    o<<temp._r<<" + "<<temp._im<<"i";
    return o;
}

ComplexNumber operator+(ComplexNumber a, ComplexNumber b)
{
    a._r+=b._r;
    a._im+=b._im;
    return a;
}

ComplexNumber operator+(double a, ComplexNumber b)
{
    b._r+=a;
    b._im+=0;
    return b;
}

ComplexNumber operator*(ComplexNumber a, ComplexNumber b)
{
    double t=a._r;
    a._r=a._r*b._r-a._im*b._im;
    a._im=t*b._im + a._im*b._r;
    return a;
}