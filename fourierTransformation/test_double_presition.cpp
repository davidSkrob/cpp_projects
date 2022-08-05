#include<iostream>

using namespace std;
double a;
double d = 0.1;
double diff;
int main(){
    a = 3.1415926535897932384626433;
    cout<<"pi is: "<<a;
    for(int i=0; i<000; i++){
        diff = a - a * d;
        a = a*d;
        if(diff < 0.5){
            cout<<"diff is: "<<diff<<"\n a is:"<<a<<"\n";
        }
        if(a==0){
            return 0;
        }
    }
    return 0;
}
