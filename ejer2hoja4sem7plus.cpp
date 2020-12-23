/* Realizar una aplicación en C++ que solicite el 
ingreso de un número enteros positivos(N) y calcule n!
*/

#include<iostream>
#include<conio.h>

using namespace std;

int ingresenumero()
{
	int n;
	cout << "ingrese numero"; cin >> n;
	while (n<=0)
	{
		cout << "ingrese numero"; cin >> n;
	}
	return n;
}

float factorial(int n)
{
	
	int result = 1;
	for (int i = 1; i <= n; i++)
		result =  result*i;
	return result;
}

int main()
{

	int m = ingresenumero();
	cout << "el factorial de "<< m <<" es: "<< factorial(m);
	_getch();




}