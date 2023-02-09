#include <iostream>

using namespace std;

int main()
{
	int valor1, valor2, valor3, edad;
	int AnioActual=2023;
	int DiaActual=9; 
	int MesActual=2;
	
	cout<<"Ingresa tu numero de dia: ";
	cin>>valor1;
	cout<<"ingresa tu numero de mes: ";
	cin>>valor2;
	cout<<"Ingresa tu anio de nacimiento: ";
	cin>>valor3;
	
	edad=AnioActual-valor3;
	if(valor2==MesActual)
	{
		if(valor1>DiaActual)
		{
			edad=edad-1;
		}
	}
	else if(valor2>MesActual)
	{
		edad=edad-1;
	}
	cout<<"Tu edad es: "<<edad<<endl;
}