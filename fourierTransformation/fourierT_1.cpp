#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <cmath>

using namespace std;

string input1 = "data.txt";//"data1firstblade.txt";
string output1 = "freq.txt";

int MAX_FREQ = 90;


int main() {
    ifstream InFile;
    InFile.open(input1);

    if (!InFile) {
        exit(1);
    }

    vector <float> Values;
    string Mytext;
    while (getline(InFile, Mytext)) {
        Values.push_back(stof(Mytext));
    }

    ofstream myfile;
    ofstream Freq;
    Freq.open(output1);

    for(double i = 0; i < MAX_FREQ; i =+ 0.5 ){           // fourier transformation
        for(int t = 0; t != Values.size(); t++ ){                                       // jak funguju komplexni cisla v c++//
        
        }

    }

             //         zapis dat do souboru            // 
    cout << "The diametr on the closer blade is: " << (NumberOfSteps / 800) * 1.6;
    MyFile << (NumberOfSteps / 800) * 1.6 << "\n";


    InFile.close();
    Freq.close();
    MyFile.close();
}