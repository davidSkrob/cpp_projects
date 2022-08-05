#include <iostream>

using namespace std;

int main(){
	return 0;
}

// z wikpedie 
// popredna diskretni furierova transformace
void fct(const double *input, double *output)
{
	for(int h=0; h<LENGTH; h++)
	{
		double sum = 0;
		for(int j=0; j<LENGTH; j++)
		{
			double xk = input[j];
			double c = (M_PI/LENGTH)*h*(j+0.5);
			sum += xk*cos(c);
		}
		output[h] = sum;
	}
}

// zpetna diskretni furierova transformace
void ict(const double *input, double *output)
{
	for(int h=0; h<LENGTH; h++)
	{
		double sum = 0;
		for(int j=1; j<LENGTH; j++)
		{
			double xk = input[j];
			double c = (M_PI/LENGTH)*j*(h+0.5);
			sum += xk*cos(c);
		}
		sum += 0.5*input[0];
		sum *= 2/(double)LENGTH;
		output[h] = sum;
	}
}