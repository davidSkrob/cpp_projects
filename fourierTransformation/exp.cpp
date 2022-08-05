#include <bits/stdc++.h>
#include <iostream>
#include <complex>
#include <cmath>
using namespace std;


/*      pro vsechny kladna racionalni cisla     */
double factorial(double x){
    double dx = 0.1;
    x = x+ 1;
    double facto=0;
    for(double i= 0; i<20; i += dx){
        facto += ((pow(i,x-1)*pow(2.71828,-i))*dx);
        
    }
    return round(facto);
}

/*      pro kladna cela cisla      */
int fact(int val){
    int ret = 1; // local variable to hold the result as we calculate it
    while (val > 1)
        ret *= val--;// assign ret * val to ret and decrement val
    return ret; // return the result
}
/*
class CplxNum{
    public:
        double real, imag;

        void get_complx_from_user(){
            cout<<"write real value of complex number\n Real(x):";
            cin>>real;
            cout<<"write imaginary value of complex number\n Im(x):";
            cin>>imag;

            complex<double> x (real, imag);
            complex<double> sum;
        }
}*/

int main(){
    double real, imag;
    cout<<"write real value of complex number\n Real(x):";
    cin>>real;
    cout<<"write imaginary value of complex number\n Im(x):";
    cin>>imag;

    complex<double> x (real, imag);
    complex<double> sum;
    cout<<"comlex number to 2nd power is "<<pow(x,2)<<"\n and factorial is "<<factorial(0)<<"\n and their quotient "<< (pow(x,2) / factorial(0));
    for(int i=0; i>200; i++){
        sum += pow(x, i)/ fact(i);
        // muzu delit complexni cisla ??  - jak bych je jako chtel delit....
        cout << sum;
    }
    return 0;
}

/* def:
    y = x^0/0! + x^1/1! ....

double exp(double num){
    for(int j; j<100; j++)
}
*/


//mohlo by to byt tady?
//complex<double> x(real, imag);
