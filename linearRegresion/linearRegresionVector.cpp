#include <iostream>
#include <vector>
#include <stdlib.h>
  
using namespace std;
  
double sqrt(double num);
void insert_data();


vector<int> y_coordinates;
vector<int> x_coordinates;
	
int main()
{
	insert_data();
	
	/*FUNGUJE
    for (int i = 0; i < x_coordinates.size(); i++)
        cout <<"on position x"<<i << " = "<< x_coordinates[i] << "\n";
	*/
	//linear_regresion();

    // cout << "Output of begin and end: ";
    // for (auto i = g1.begin(); i != g1.end(); ++i)
    // cout << *i << " ";

    return 0;
}

void insert_data(){
	int items = 0;
	cout << "how many numbers do you want insert ? \n I want insert : ";
	cin >> items;
    
    for (int i = 0; i < items; i++){
		int number;
		cout << "coordinate x"<<i<<" = ";
		cin >> number;
        x_coordinates.push_back(number);
		
		cout << "coordinate y"<<i<<" = ";
		cin >> number;
        y_coordinates.push_back(number);
	}
}

/*void linear_regresion();
double err_calc();
double sqrt(double num);

double B_0;
double B_1;

double sumx;
double sumy;
double sum_xy;
double sum_sqr;

double err;

int main()
{

	for (int i = 0; i <= N-1; i++) {
		cout << "coordinate x"<<i<<"\n";
		cin >> x_coordinates[i];
		cout << "coordinate y"<<i<<"\n";
		cin >> y_coordinates[i];
	
	}

    linear_regresion();
    cout<< sqrt(err_calc());

	return 0;
}


void linear_regresion() {
    for(int i = 0; i <= N-1; i++){
        sumx += x_coordinates[i];
        sumy += y_coordinates[i];
    }

    double avr_x = sumx / N;
    double avr_y = sumy / N;

    double temp_x;
    double temp_y;

    for (int i = 0; i <= N-1; i++) {
        temp_x = x_coordinates[i] - avr_x;
        temp_y = y_coordinates[i] - avr_y;
        sum_xy += temp_x * temp_y;
        sum_sqr += pow(temp_x, 2);
    }

    B_1 = sum_sqr / sum_xy;
    B_0 = avr_y - (avr_x * B_1);

    cout << "B_1 = " << B_1 << "\n";
    cout << "B_0 = " << B_0 << "\n";
}

double err_calc() {
    double err_temp = 0;
    for (int i = 0; i <= N - 1; i++) {
        double y_est = B_1 * x_coordinates[i] + B_0;
        double deltay = pow((y_est - y_coordinates[i]), 2);
        err_temp += deltay;
    }
    cout << "err temp = " << err_temp << "\n";
    cout << "err temp/ n-2 = " << err_temp/(N - 2) << "\n";
    return err_temp / (N - 2);
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
*/