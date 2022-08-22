#include<iostream>
#include<chrono>

using namespace std;

//void gen_random_numbers(number);
void divisibility(){};
void modulo(){};

int main(){
	int number = 1000;
	int time = 0;
	
	cout <<"generating random numbers \n";
	//gen_random_numbers(number);
	
	cout << "testing of divisibility rules \n";
	//start time
	divisibility();
	//stop time
	cout << "Time: "<< time << "s \n";
	
	cout << "testing of modulo \n";
	//start time
	modulo();
	//stop time
	cout << "Time: "<< time << "\n";
	
	return 0;
}


