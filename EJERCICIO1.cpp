/* el problema se debe de mostrar en orden el cual tiene que empezar del menu despues de escoger la opcion 1 se debe
de mostrar el Submenu.
EL PROGRAMA SE TIENE QUE REALIZAR DETRAR PARA DELANTE PORQUE LAS FUNCIONES TIENEN QUE ESTAR ECHAS ANTES QUE EL Menu
*/
#include <iostream>
#include <string>

using namespace std;
// Variables globales
double num1, num2;
string cadena1, cadena2;//nose porque en string no me muestra el color amarillo INVESTIGAR
char opcion, subopcion;
/*nota para se debe realizar primeramente el subproceso para poder llamar a la funcion
Submenu esta va incluida en la primera opcion del Menu
*/
void Suma()
{
	cout<<"la suma de los dos numeros es "<<num1+num2<<endl;
}
void division()
{
	cout << "Ingrese el dividendo: ";
	cin >> num1;
	cout << "Ingrese el divisor: ";
	cin >> num2;
	if (num2 != 0) {
		cout << "La división es: " << num1 / num2 << endl;
	} else {
		cout << "Error: División por cero." << endl;
	}
	
}
void CONCATENAR()
{
	cout<<"ingrese la primera cadena ";
	cin>>cadena1;
	cout<<"ingrese la segunda cadena ";
	cin>>cadena2;
	cout<<"el resultado de la concatenacion de las dos cadenas es : "<<cadena1+cadena2<<endl;
	
	
}
void Ingresar_datos()
{
	cout<<"Ingresa el primer número : ";
	cin>>num1;
	cout<<"Ingresa el segundo número : ";
	cin>>num2;
	Suma();
}
void Submenu()//se va a mostrar el submenu
{
	do
	{
		cout<<"   "<< " SUBMENU OP NUMEROS "<<endl<<endl; 
		cout<<"1: Suma de 2 números. "<<endl<<endl;
		cout<<"2: División de 2 números."<<endl<<endl;
		cout<<"(m/M)Volver al Menu principal."<<endl<<endl;
		cin>>subopcion;
		switch(subopcion)
		{
		case '1':
			cout<<"  "<<" SUMA "<<endl<<endl;
			Ingresar_datos();
			break;
		case '2':
			cout<<"  "<<" DIVISION "<<endl<<endl;
			division();
			break;
			
		case 'm':
		case 'M':
			return;
			break;
		default:
			cout<<"opcion invalida";
		};//fin switch
	}while(subopcion != 'm'&&subopcion!='M');
}

void Menu()//funcion en las que se va a mostrar el menu
{
	do
	{
	cout<<"   "<< " MENU PRINCIPAL "<<endl<<endl; 
	cout<<"1: Operaciones con Números"<<endl<<endl;
	cout<<"2: Concatenar 2 cadenas."<<endl<<endl;
	cout<<"(s/S): Salir."<<endl<<endl;
	cin>>opcion;
	switch(opcion)
	{
	case '1':
		Submenu();
	break;
	case '2':
		CONCATENAR();
		
	break;
	
	case 's':
	case 'S':
	break;
	default:
	cout<<"opcion invalida";
	};//fin switch
	}while(opcion != 's'&&opcion !='S');
}
	


int main(){
	
	Menu();	


	return 0;
}
	
