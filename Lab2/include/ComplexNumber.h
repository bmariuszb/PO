#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H

#include <iostream>

class ComplexNumber
{
private:
    double _r, _im;
public:
    friend std::ostream &operator<<(std::ostream &o,ComplexNumber temp);
    friend ComplexNumber operator+(ComplexNumber a, ComplexNumber b);friend ComplexNumber operator*(ComplexNumber a, ComplexNumber b);
    friend ComplexNumber operator+(double a, ComplexNumber b);
    
    ComplexNumber(double x, double y=0.0);
    void operator*=(double x);
    ComplexNumber operator++(int x);
    ComplexNumber operator++();
    ComplexNumber operator-(ComplexNumber a);
    int operator<(ComplexNumber a) const;
    double &operator[] (int i);
    void operator-=(double a);
    operator double();
};

std::ostream &operator<<(std::ostream &o,ComplexNumber temp);
ComplexNumber operator+(ComplexNumber a, ComplexNumber b);
ComplexNumber operator+(double a, ComplexNumber b);
ComplexNumber operator*(ComplexNumber a, ComplexNumber b);
#endif