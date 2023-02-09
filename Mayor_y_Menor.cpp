/*
	Hacer un programa donde el usuario inserte 3 numeros y se le devuelva el numero mayor y menor
	4 pasos para su solucion:
	*Declarar variables
	*Ingresar los datos
	*Hacer comparaciones que muestre el resultado
	*Hacer correr el programa
*/
#include <iostream>

using namespace std;
/**
 * @version 1.2
 * @date 09/02/2023
 * @author Alejandro Urvieta Gonzalez
 * @title Mayor_y_Menor
 * @brief El usuario introducira 3 valores para que despues te regrese el balor mayor y el menor
 */
 
  /**
 * @brief Paso0: Declaras variables a usar: valor1, valor2, valor3
 */

float valor1, valor2, valor3;

void IntroduceValores();
void Comparaciones();

/**
 *  @brief Paso1: Pide los 3 valores para determinar cual sera el mayor y cual el menor
 *  @param valor... guarda los valores que compararà
 *  @return void
 *  @code
    cout<<"introduce el valor 1: ";
	cin>>valor1;
    @endcode
 */
void IntroduceValores()
{
	cout<<"introduce el valor 1: ";
	cin>>valor1;
	cout<<"introduce el valor 2: ";
	cin>>valor2;
	cout<<"introduce el valor 3: ";
	cin>>valor3;
}

/**
 *  @brief Paso2: Haces comparaciones para hallar el valor mas grande y el mas chico
 *  @param valor... guarda el valor ya comparado y lo muestra
 *  @return void
 *  @code
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
    @endcode
 */
void Comparaciones()
{
	if(valor1>valor2 && valor2>valor3)
	{
		cout<<"el valor mas grande es: "<<valor1<<endl;
		cout<<"el valor mas chico es: "<<valor3<<endl;
	}
	else if (valor1>valor3 && valor3>valor2)
	{
		cout<<"el valor mas grande es: "<<valor1<<endl;
		cout<<"el valor mas chico es: "<<valor2<<endl;
	}
	else if(valor3>valor2 && valor1>valor2)
	{
		cout<<"el valor mas grande es: "<<valor3<<endl;
		cout<<"el valor mas chico es: "<<valor2<<endl;
	}
	else if(valor3>valor2 && valor2>valor1)
	{
		cout<<"el valor mas grande es: "<<valor3<<endl;
		cout<<"el valor mas chico es: "<<valor1<<endl;
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

/**
 *  @brief Paso3: Haces correr el programa
 */
int main()
{
	IntroduceValores();
	Comparaciones();
	
}