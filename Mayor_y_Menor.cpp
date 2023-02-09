#include <iostream>

using namespace std;

int main()
{
	float valor1, valor2, valor3;
	
	cout<<"introduce el valor 1: ";
	cin>>valor1;
	cout<<"introduce el valor 2: ";
	cin>>valor2;
	cout<<"introduce el valor 3: ";
	cin>>valor3;
	
	if(valor1>valor2 && valor2>valor3)
	{
		cout<<"el valor mas grande es: "<<valor1<<endl;
		cout<<"el valor mas chico es: "<<valor3<<endl;
	}
	else if (valor1>valor2 && valor2<valor3)
	{
		cout<<"el valor mas grande es: "<<valor1<<endl;
		cout<<"el valor mas chico es: "<<valor2<<endl;
	}
	else if(valor1<valor2 && valor2<valor3)
	{
		cout<<"el valor mas grande es: "<<valor3<<endl;
		cout<<"el valor mas chico es: "<<valor1<<endl;
	}
	else if(valor3>valor1 && valor2<valor1)
	{
		cout<<"el valor mas grande es: "<<valor3<<endl;
		cout<<"el valor mas chico es: "<<valor2<<endl;
	}
	else if(valor2>valor1 && valor1>valor3)
	{
		cout<<"el valor mas grande es: "<<valor2<<endl;
		cout<<"el valor mas chico es: "<<valor3<<endl;
	}
	else if(valor2>valor3 && valor3>valor1)
	{
		cout<<"el valor mas grande es: "<<valor2<<endl;
		cout<<"el valor mas chico es: "<<valor1<<endl;
	}
}
