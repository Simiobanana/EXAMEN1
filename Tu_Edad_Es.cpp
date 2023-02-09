/*
	Hacer un programa donde el usuario inserte un numero y se le muestre el numero multiplicado del 1 hasta el 10 con su debido resultado
	5 pasos para su solucion:
	*Declarar variables
	*Ingresar los datos
	*Restar el valor
	*Hacer una condicion de resta
	*Terminar el programa
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
 * @brief Paso0: Declaras variables a usar: valor1, valor2, valor3, AnioActual, DiaActual, MesActual
 */
int valor1, valor2, valor3, edad;
int AnioActual=2023;
int DiaActual=9; 
int MesActual=2;


void AsignacionDeValores();
void RestaDeValor();
void CondicionResta();
void Final();

/**
 *  @brief Paso1: Asigna los valores con sus respectivas variables
 *  @param valor... Guarda el valor que se ingresa
 *  @return void
 *  @code
    cout<<"Ingresa tu numero de dia: ";
	cin>>valor1;
    @endcode
 */

void AsignacionDeValores()
{
	cout<<"Ingresa tu numero de dia: ";
	cin>>valor1;
	cout<<"ingresa tu numero de mes: ";
	cin>>valor2;
	cout<<"Ingresa tu anio de nacimiento: ";
	cin>>valor3;
}
/**
 *  @brief Paso2: Resta el valor del anio ingresado menos el anio actual
 *  @param edad guarda el valor de la resta
 *  @return void
 *  @code
    edad=AnioActual-valor3;
    @endcode
 */

void RestaDeValor()
{
	edad=AnioActual-valor3;
}

/**
 *  @brief Paso3: Se hace una condicion para la resta en caso de que el usuario ingrese el mismo anio que el actual pero sea o no diferente mes y dia
 *  @param edad ahora guarda su propio valor menos uno
 *  @return void
 *  @code
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
    @endcode
 */
 
void CondicionResta()
{
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
}
/**
 *  @brief Paso4: Se imprime la edad en pantalla
 *  @return void
 *  @code
    cout<<"Tu edad es: "<<edad<<endl;
    @endcode
 */	
void Final()
{
	cout<<"Tu edad es: "<<edad<<endl;
}

/**
 *  @brief Paso5: Se ingresan los voids en el Main y se corre el programa 
 */
int main()
{
	AsignacionDeValores();
	RestaDeValor();
	CondicionResta();
	Final();
}