#include <iostream>

using namespace std;

int main()
{
    double a, b;
    printf("Program na vypocet obvodu obdelnika");
    printf("Zadejte hodnotu a \n a : ");
    cin >> a;
    printf("Zadejte hodnotu b \n b : ");
    cin >> b;
    double o = ((a+b)*2);
    printf("strana a :%f\n strana b:%f\n obvod :%f\n obsah :%f",a, b, o, a*b);
    return 0;
}
