#include <iostream>
#include <complex>
using namespace std;

int fact(int val){
    int ret = 1; // local variable to hold the result as we calculate it
    while (val > 1)
        ret *= val--;// assign ret * val to ret and decrement val
    return ret; // return the result
}
void exp(complex<double>& base){
   complex<double> sum;
   for(int k=0; k<99; k++){
      sum.real()+=(pow(base, k)).real()/fact(k); 
   }
   cout<<"exp is: "<<sum.real()<<"+ i*"<<sum.imag()<<"\n";
}
// y = sum(N^k/factorial(k)) for k from 0 to \inf

int main() {
   complex<double> num(4, 3);
   cout<<"Square of (4 + 3i) = "<<pow(num, 2)<<endl; //pow funguje
   exp(num);

   return 0;
}
