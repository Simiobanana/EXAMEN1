/*
	Hacer un programa donde el usuario inserte un numero y se le muestre el numero multiplicado del 1 hasta el 10 con su debido resultado
	4 pasos para su solucion:
	*Declarar variables
	*Ingresar los datos
	*Hacer un ciclo que muestre el resultado
	*Hacer correr el programa
*/
#include <iostream>

using namespace std;

/**
 * @version 1.2
 * @date 09/02/2023
 * @author Alejandro Urvieta Gonzalez
 * @title Tabla_Multiplicar
 * @brief Te muestra la tabla de multiplicar de un numero 
 */
 
 /**
 * @brief Paso0: Declaras variables a usar: numero y resultado 
 */
 
int numero;
int resultado;

/**
 * @brief Paso1: Declaras voids a usar: IngresaDatos y CicloResultado
 */
 
void IngresaDatos();
void CicloResultado();

/**
 *  @brief Paso2: Pide el numero del que sacaremos la tabla de multiplicar
 *  @param numero guarda el valor al que se le sacara la tabla
 *  @return void
 *  @code
    cout<<"Introduce un numero para sacar su tabla de multiplicar (Solo llega hasta el 10): ";
	cin>>numero;
    @endcode
 */
 
void IngresaDatos()
{
	cout<<"Introduce un numero para sacar su tabla de multiplicar (Solo llega hasta el 10): ";
	cin>>numero;
}

/**
 *  @brief Paso3: Hace un ciclo desde el numero uno hasta el numero 10 repitiendo el proceso de multiplicar el numero y sacarle su tabla con resultado
 *  @param resultado guarda el valor del numero ingresado por el numero multiplicado
 *  @return void
 *  @code
    for(int i=1; i<=10; i++)
	{
		resultado = numero * i;
		
		cout<<numero<<"x"<<i<<"="<<resultado<<endl;
	}
    @endcode
 */
void CicloResultado()
{
	for(int i=1; i<=10; i++)
	{
		resultado = numero * i;
		
		cout<<numero<<"x"<<i<<"="<<resultado<<endl;
	}
}

/**
 *  @brief Paso: Se ingresan los voids en el Main y se corre el programa 
 */
int main()
{
	IngresaDatos();
	CicloResultado();
}