// Lab 0.2.cpp
//Раделицький Павло
//Лабораторна робота №2.
//Лінійні програми.
//Варіант 9
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double  z1, z2, alpha, beta;
	cout << "alpha= "; cin >> alpha;
	cout << "beta= "; cin >> beta;
	z1 = (cos(alpha) - cos(beta)) * (cos(alpha) - cos(beta)) - (sin(alpha) - sin(beta)) * (sin(alpha) - sin(beta));
	z2 = -4 * sin((alpha - beta) / 2) * sin((alpha - beta) / 2) * cos(alpha + beta);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}//wsatata6tw
