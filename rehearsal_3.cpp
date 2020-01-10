#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double sumSqrt(double N){
	double i=1.00000, y=0.00000;
	while(i<=N){
		y+=(1.00000/sqrt(i));
		i++;
	}
	return y;
}

int main()
{
	
    double a = sumSqrt(20.00000);
    double b = sumSqrt(10.00000);
    double c = sumSqrt(5.00000);
    double d = sumSqrt(2.00000);
    double e = sumSqrt(1.00000);
    double f = sumSqrt(0.00000);
    double g = sumSqrt(-1.00000);
    
    cout <<fixed<<setprecision(5)<< a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";
	return 0;
}
