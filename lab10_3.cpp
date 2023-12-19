#include<iostream>
#include<fstream>
#include<string>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    ifstream source;
	ofstream dest;
	source.open("score.txt");
	
	double num = 0, total = 0, powed = 0;
	double mean, sd;
	string line;
	
	while(getline(source, line)){
	    total += atof(line.c_str());
	    powed += pow(atof(line.c_str()), 2);
	    num++;
	}
	
	mean = total/num;
	sd = sqrt((powed/num) - pow(mean, 2));
	
    cout << "Number of data = " << num << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sd;
}
