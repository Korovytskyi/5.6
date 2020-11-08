// 5.1
#include <iostream>
#include <cmath>
using namespace std;
double h(const double a, const double b ); 
int main()
{
	double s, t,a;
	
		cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
    double c = (h(1,s*t)+(h)(t+s,1));
	cout << "c = " << c << endl;
	return 0;
}
double h(const double a, const double b) 
{
	return ((a*a)-(sin(b)*cos(a))+b);
}
