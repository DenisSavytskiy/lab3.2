// Lab_03_2.cpp 
// < Савицький Денис > 
// Лабораторна робота № 3.2 
// Розгалуження, задане формулою: функція з параметрами. 
// Варіант 27 
#include <iostream> 
using namespace std;
int main()
{
	double x; // вхідний аргумент 
	double a; // вхідний параметр 
	double b; // вхідний параметр 
	double c; // вхідний параметр 
	double F; // результат обчислення виразу 
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// спосіб 1: розгалуження в скороченій формі 
	if (x<5 && c!=0)  F=(-1*a)*x*x-b;
	if (x>5 && c==0)  F=(x-a)/x;
	if ((x<=5 && c==0) || (x>=5 && c!=0))  F=-1*x/c;
	cout << endl;
	cout << "1) F = " << F << endl;
	// спосіб 2: розгалуження в повній формі 
	if (x<5 && c!=0) F=(-1*a)*x*x-b;
	else if (x>5 && c==0)  F=(x-a)/x;
	else  F=-1*x/c;
	cout << "2) F = " << F << endl;
	return 0;
}
