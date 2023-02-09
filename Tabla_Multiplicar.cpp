#include <iostream>

using namespace std;

int main()
{
	int numero;
	int resultado;
		
	cout<<"Introduce un numero para sacar su tabla de multiplicar (Solo llega hasta el 10): ";
	cin>>numero;
	
	for(int i=1; i<=10; i++)
	{
		resultado = numero * i;
		
		cout<<numero<<"x"<<i<<"="<<resultado<<endl;
	}
}
