#include<iostream>
#include<chrono>
#include <math.h>
#include <vector>

using namespace std;
using namespace std::chrono;

void gen_random_sizes(int size);
int random_size();
void divisibility();
void modulo();


int bigest_size = 100;
int size = 1000;


vector<int> random_sizes;

int main(){
	
	int time = 0;
	
	cout <<"generating random sizes \n";
	gen_random_sizes(size);
	
	cout << "testing of divisibility rules \n";
	
	//start time
	auto start = high_resolution_clock::now();
	
	divisibility();
	
	//stop time
	auto stop = high_resolution_clock::now();
	
	auto time1 = duration_cast<microseconds>(stop - start);
	cout << "Time: "<< time1.count() << "ms \n";
	
	cout << "testing of modulo \n";
	
	//start time
	auto start = high_resolution_clock::now();
	
	modulo();
	
	//stop time
	auto stop = high_resolution_clock::now();
	
	auto time2 = duration_cast<microseconds>(stop - start);
	cout << "Time: "<< time2.count() << "ms \n";
	
	//some logic to compere time1 and time2
	//make some fancy graphs (optional)
	
	return 0;
}

void gen_random_sizes(int size){
	for(int i=0;i<size;i++){
		random_sizes.push_back(random_size());
	}
}

int random_size(){
	return 10; //remake to return actual random size
}


//make it as findings of prime divisors?
// probably yes bc what else shuld it do??

void divisibility(){
	for(int i=0;i<size;i++){
		//divisibility rules implementation
		//only of prime sizes so... 2;3;5;7;11;13;17;19;23;29
		cout<<i;
	}
}

void modulo(){
	for(int i=0;i<size;i++){
		for(int j=1; j<sqrt(bigest_size); j++){
			//save some sort of the divisors
		}
	}
}

