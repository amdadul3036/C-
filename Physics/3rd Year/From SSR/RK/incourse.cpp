#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
using namespace std;
//#define constant 9*pow(10,9)

double potn (double d, double l)
{
    return 9*pow(10,9)/sqrt((l*l)+(d*d));
}

double simp(double d, double a, double b)
{
	int n=1000;
	double h=(b-a)/n;
	double I=0;
	for (int i=0; i<=(n-2); i+=2)
	{
		I=I+(potn(d, a+i*h)+4*potn(d, a+(i+1)*h)+potn(d, a+(i+2)*h))*(h/3);
	}
	cout<<I<<endl;
	return I;
}

int main()
{
    ofstream fout ("incourse.dat");
for (double d=1.0; d<100; d++)
fout<<d<<" "<<simp(d, -1, 1)<<" "<<simp(d, -2.5, 2.5)<<" "<<simp(d, -5, 5)<<endl;
}
