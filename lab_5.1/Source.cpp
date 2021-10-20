#include <iostream>
#include <cmath>

using namespace std;

double g(double x, double y);

int main(){
	double s;
	double r;
	double k, u;

	cout << "s = "; cin >> s;
	cout << "r = "; cin >> r;

	k = (pow(g(r, s * s + 1.0), 2) + g(1.0, r * r + s)) / (1.0 + pow(g(1, r * s), 2));
	u = g(0, 0);


	cout << u << endl;
	cout << k;

	return 0;
}

double g(double x, double y) {
	return (pow(sin(x), 2) + pow(cos(y), 2)) / (1 + abs(x * y));
}