#include<iostream>
#include<chrono>
#include<vector>
#include <math.h>
#include <numeric>
#include <random>

using namespace std;
using namespace std::chrono;

//from stack overflow
double random_range (double const range_min, double const range_max)
{
	uniform_real_distribution<double> unif(range_min,range_max);
	default_random_engine re;
	return  unif(re);
  //static unsigned long long const mant_mask53(9007199254740991);
  //static double const i_to_d53(1.0/9007199254740992.0);
  //unsigned long long const r( (unsigned long long(rand()) | (unsigned long long(rand()) << 15) | (unsigned long long(rand()) << 30) | (unsigned long long(rand()) << 45)) & mant_mask53 );
  //return range_min + i_to_d53*double(r)*(range_max-range_min);
}	//end of stack overflow


//void gen_random_numbers(number);
double mysqrt(double num){
	double est = num/2;
	for(int k; k<6; k++){
		est = (est/2 + num/(2*est));
	}
	return est;
}
double fastinvsqrt(double num){
	return 5;
}

double realsqrt(double num){
	return sqrt(num);//zatim...
	//TODO udelat tady takovou fce, aby jsem si mohl byt jistej ze to je 100% spravne
}

int main(){
	int number = 1000;

	auto start = high_resolution_clock::now();
	for(int i = 0; i<number;i++){
		double l = mysqrt(i);
	}
	auto stop = high_resolution_clock::now();
	auto time = duration_cast<microseconds>(stop - start);
	cout << "Time: "<< time.count() << "ms \n";		

	start = high_resolution_clock::now();
	for(int i = 0; i<number;i++){
		double l = fastinvsqrt(i);
	}
	stop = high_resolution_clock::now();
	time = duration_cast<microseconds>(stop - start);
	cout << "Time: "<< time.count() << "ms \n";	

	start = high_resolution_clock::now();
	for(int i = 0; i<number;i++){
		double l = sqrt(i);
	}
	stop = high_resolution_clock::now();
	time = duration_cast<microseconds>(stop - start);
	cout << "Time: "<< time.count() << "ms \n";	


	vector<double> m_err;
	vector<double> f_err;
	vector<double> std_err;
	cout << "aquracy test: \n";
	for(int i = 0; i<number;i++){
		double randomNumber = random_range(0, 9);
		double real = realsqrt(randomNumber);
		double m = mysqrt(randomNumber);
		m_err.push_back(abs(real-m));
		double f = fastinvsqrt(randomNumber);
		f_err.push_back(abs(real-f));
		double std = sqrt(randomNumber);
		std_err.push_back(abs(real-std));
	}
	double avrg_m_err = accumulate(m_err.begin(), m_err.end(), 0.0) / m_err.size();
	double avrg_f_err = accumulate(f_err.begin(), f_err.end(), 0.0) / f_err.size();
	double avrg_std_err = accumulate(std_err.begin(), std_err.end(), 0.0) / std_err.size();
	cout<<"error of my sqrt is on avrg:"<< avrg_m_err <<"\n";//TODO zlepsit presnost mereni
	cout<<"error of fast inverse sqrt is on avrg:"<< avrg_f_err<<"\n";
	cout<<"error of fast inverse sqrt is on avrg:"<< avrg_std_err<<"\n";

	return 0;
}