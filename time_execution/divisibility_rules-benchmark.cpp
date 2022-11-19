#include <iostream>
#include <chrono>
#include <math.h>
#include <vector>
#include <random>

using namespace std;
using namespace std::chrono;

void gen_random_sample(int sample_size);
int random_number();
void divisibility();
void modulo();
int find_next_divisor(int maximal_number, int number);
void erasthotenes_sive();

int MAX_NUMBER = 1000;
int sample_size = 1000;

vector<int> random_numbers;
vector<int> divisors_modulo;
vector<int> divisors_div_rules;
vector<int> primes;

int main(){
	cout<<"generating primes up to "<<MAX_NUMBER<<"\n";
	auto start = high_resolution_clock::now();
	erasthotenes_sive();
	auto stop = high_resolution_clock::now();
	auto time = duration_cast<microseconds>(stop - start);
	cout << "Time: "<< time.count() << "ms \n";	

	cout <<"generating samples \n";
	gen_random_sample(sample_size);
	
	cout << "testing of divisibility rules \n";
	auto start1 = high_resolution_clock::now();
	divisibility();
	auto stop1 = high_resolution_clock::now();
	auto time1 = duration_cast<microseconds>(stop1 - start1);
	cout << "Time: "<< time1.count() << "ms \n";

	cout << "testing of modulo \n";
	auto start2 = high_resolution_clock::now();
	modulo();
	auto stop2 = high_resolution_clock::now();
	auto time2 = duration_cast<microseconds>(stop2 - start2);
	cout << "Time: "<< time2.count() << "ms \n";
	
	//some logic to compere time1 and time2
	//make some fancy graphs (optional)
	
	return 0;
}

void gen_random_sample(int sample_size){
	for(int i=0;i<sample_size;i++){
		random_numbers.push_back(random_number());
	}
}

int random_number(){
	random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<mt19937::result_type> dist6(1,MAX_NUMBER); // distribution in range [1, 6]
	return dist6(rng);
}


void erasthotenes_sive(){
	vector<bool> primenes(MAX_NUMBER, 1);
	for(int k=0; k<MAX_NUMBER; k++){
		if(primenes[k]){
			int num = k+2;
			primes.push_back(num);
			for(int f = k+num ;f<MAX_NUMBER; f+=num){
				primenes[f]=0;
			}
		}
	}
	/*
	cout <<"primes:\n";
	for (auto i: primes) {
    	cout << i << '\n'; 
	}
	*/
}

//make it as findings of prime divisors?
// probably yes bc what else shuld it do??

void divisibility(){
	for(int i=0;i<sample_size;i++){
		int number = random_numbers[i];
		
		//divisibility rules implementation
		//only of prime sizes so... 2;3;5;7;11;13;17;19;23;29
		
	}
}

void modulo(){

	if(false){
	for(int i=0;i<sample_size;i++){
		int number = random_numbers[i];
		
		//broken intended way
		//find first divisor
		//divide number by that divisor
		//find next divisor
		
		
		//optimal way
		//find divisor
		//try divide by it until it isnt posible
		//go to next prime
		// STONKS
		
		//broken
		while(number < MAX_NUMBER){
			int divisor = find_next_divisor(1,3);
			divisors_modulo.push_back(divisor);
			
		}
	}
	}
}
//broken
int find_next_divisor(int maximal_number, int number){
	for(int j=1; j<sqrt(maximal_number); j++){
			if(true)
				return 1;
			//save the divisors
		}
}