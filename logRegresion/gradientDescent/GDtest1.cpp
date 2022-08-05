#include<iostream>

using namespace std;

double x[] = {1, 2, 4, 3, 5};
double y[] = {1, 3, 3, 2, 5};

double b0 = 0;
double b1 = 0;
double alpha = 0.01;

int i;
int main(){
for(int i = 0; i< 20; i++){
    int idx = i % 5;
    double p = b0 + b1 * x[idx];
    double err = p - y[idx];
    b0 = b0 - alpha * err; 
    b1 = b1 - alpha * err* x[idx];
    cout<< "error is: "<< err<<"\n";
}
cout << "b0 is: "<< b0 << " and b1 is: "<< b1 << "\n"; 
}
/*
int i = 0;
for(;i<20;i++) {
    int idx = i % 5;
    double p = b0 + b1 * x[idx];
    double err = p - y[idx];
    b0 = b0 - alpha * err;
    b1 = b1 - alpha * err * x[idx];
    cout << "b0 is: "<< b0 << " and error is: "<< err; 
}*/