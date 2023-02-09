#include <iostream>

using namespace std;

int numero;
int resultado;

void IngresaDatos();
void CicloResultado();

int main()
{
	IngresaDatos();
	CicloResultado();
}

void IngresaDatos()
{
	cout<<"Introduce un numero para sacar su tabla de multiplicar (Solo llega hasta el 10): ";
	cin>>numero;
}

void CicloResultado()
{
	for(int i=1; i<=10; i++)
	{
		resultado = numero * i;
		
		cout<<numero<<"x"<<i<<"="<<resultado<<endl;
	}
}
