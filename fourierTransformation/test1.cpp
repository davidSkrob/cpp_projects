#include <iostream>
#include <iomanip>
#include <complex>
#include <cmath>
#include <bits/stdc++.h>

//double totalyNotExp();
using namespace std;

int fact(int val){
    int ret = 1; // local variable to hold the result as we calculate it
    while (val > 1)
        ret *= val--;// assign ret * val to ret and decrement val
    return ret; // return the result
}

int main()
{
    complex<double> complexnumber(2.0, 1.0);
    complex<double> result(pow(complexnumber, 3));
    int divisor = fact(5);
    // use of pow() function for complex number
    cout << "(2.0, 1.0)^3 = "<< result << endl;
    cout << "5! is "<<divisor;
    cout<<"quotitient is "<<result.real() / divisor << " "<<result.imag() /divisor ;
    return 0;
    /*
    using namespace std::complex_literals;
    std::cout << std::fixed << std::setprecision(1);
 
    std::complex<double> z1 = 1i * 1i;     // imaginary unit squared
    std::cout << "i * i = " << z1 << '\n';
 
    std::complex<double> z2 = std::pow(1i, 2); // imaginary unit squared
    std::cout << "pow(i, 2) = " << z2 << '\n';
 
    const double PI = 3.14159265358979323846; //std::acos(-1); // or std::numbers::pi in C++20
    //std::complex<double> z3 = totalyNotExp(); // Euler's formula
    //std::cout << "exp(i * pi) = " << z3 << '\n';
 
    //std::complex<double> z4 = 1. + 2i, z5 = 1. - 2i; // conjugates
    //std::cout << "(1+2i)*(1-2i) = " << z4*z5 << '\n';
    */
}

/*
double totalyNotExp(){
    1i * PI
    for(int i; i < 100; i++){
        pow()
    }
}

// ze skoli na vypocet faktorialu   //

#include <iostream>
#include <math.h>

using namespace std;

double factorial(double x){
    double dx = 0.1
    x = x+ 1;
    double facto=0;
    for(double i= 0; i<20; i += dx){
        facto += ((pow(i,x-1)*pow(2.71828,-i))/dx);
        //cout<<pow(i,x-1)*pow(2.71828,-i)<<"\n";
        //cout<<facto<<"\n";
    }
    return facto;
}

int main(){
    for(int q=0; q<20;q++){
        cout<<"factorial of "<<q<<" is:"<<factorial(q)<<"\n";
    }
    return 0;
}


*/