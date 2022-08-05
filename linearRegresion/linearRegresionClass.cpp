#include <iostream>
#include <vector>
#include<algorithm>
#include <stdlib.h>

using namespace std;
  
double sqrt(double num);


class Data{
public:
    vector<int> y_coordinates;
    vector<int> x_coordinates;

    double B_0;
    double B_1;

    double sumx;
    double sumy;
    double sum_xy;
    double sum_sqr;

    int items = 0;

    void from_user(){
	    cout << "how many numbers do you want insert ? \n I want insert : ";
	    cin >> items;
        for (int i = 0; i < items; i++){
            double number;                      // nebud kreten pls a ber od uzivatele double, ne fucking int
            cout << "coordinate x"<<i<<" = ";
            cin >> number;
            x_coordinates.push_back(number);
            cout << "coordinate y"<<i<<" = ";
            cin >> number;
            y_coordinates.push_back(number);
    	}
    }

    void linear_regresion(){
        for(int i = 0 ; i<x_coordinates.size(); i++){
            sumx = sumx + x_coordinates[i];
            sumy = sumy + y_coordinates[i];         // novinka
        }
//        for(int i = 0 ; i<y_coordinates.size(); i++){
  //          sumy = sumy + y_coordinates[i];
   //     }

        double avr_x = sumx / items;
        double avr_y = sumy / items;
       // cout << avr_x << "prumerna x hodnota \n"<<avr_y<<"prumerna y hodnota\n"<<items;

        double temp_x;
        double temp_y;

        for (int i = 0; i <= items-1; i++) {
            temp_x = x_coordinates[i] - avr_x;
            temp_y = y_coordinates[i] - avr_y;
            sum_xy += temp_x * temp_y;
            sum_sqr += temp_x * temp_x;                  // predelat na pow, ale nema ted nastroje na to z nejakyho duvodu, tak se mrknout jak pow funguje
        }                                               //pow(temp_x, 2)
        B_1 = sum_sqr / sum_xy;
        B_0 = avr_y - (avr_x * B_1);

        cout << "B_1 = " << B_1 << "\n";
        cout << "B_0 = " << B_0 << "\n";
    }

    double calcRMSE(){
        double diff;
        double diffsqr;
        for(int i = 0 ; i<x_coordinates.size(); i++){
            diff = (B_1 * x_coordinates[i] + B_0) - y_coordinates[i];
            diffsqr += diff * diff;          // nahradit pow(diff);
        }
        diffsqr = diffsqr / x_coordinates.size();
        return sqrt(diffsqr);
    }

    double calcMAE(){
        double sumdiff;
        for(int i = 0 ; i<x_coordinates.size(); i++){
           sumdiff += abs((B_1 * x_coordinates[i] + B_0) - y_coordinates[i]);
        }
        return sumdiff;
    }

};

int main(){
	Data test1;
    test1.from_user();
    test1.linear_regresion();
    cout << "RSME =" << test1.calcRMSE();
    cout << "MAE =" << test1.calcMAE();
    return 0;
}

double sqrt(double num) {
    double est;
    if (num > 3) est = num / 2;
    else est = num;
    for (int i = 0; i < 7; i++) {
        est = (est / 2) + (num / (2 * est));
    }
    return est;
}