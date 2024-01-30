#include <iostream>
#include <cstdlib> // Necesario para la función rand()
#include <ctime> // Necesario para la función time()//para que los numeros aleatorios no se repitan
#include <cmath>// Necesario para squr.
using namespace std;
void generar_Numero_al_azar(int &numero) 
{
	numero = rand() % 501;//se utiliza el 501 para que el 500 este entres los numeros aleatorios
	cout << "Número al azar es : " << numero << endl;
}//fin de funcion azar
void Generar_numero_aleatorio_real(double &azar)
{
	azar = rand() % 501/100.0;//lo investigado decia que se tiene que hacer con 1000.0 pero solo generaba decimales es decir 0.98 siempre anteponiendo un 0
	cout << "Número real aleatorio: " << azar << endl;
}
bool esPrimo(int &numero) {
	if (numero <= 1) return false;
	for (int i = 2; i <= sqrt(numero); ++i) //sqrt calcula la raíz cuadrada de un número.
	{
		if (numero % i == 0) return false;
	}
	return true;
}
void Generar_N_numeros_primos(int &Nprimo)
{
	int cont = 0, numero = 2,num1;
	
	cout<<"ingrese la cantidad de numeros a generar : ";
	cin>>num1;
	while(cont < num1){
		if(esPrimo(numero)){
			cont++;
			cout<<"\n"<<cont<<":"<<"el numero primo es :" <<numero <<endl;
		}
		numero++;
	}		
	cout<<endl<<endl;
}
void Menu(char &opcion)
{
	
	int numero,Nprimo;
	double azar;
	
	do
	{
		cout<<"   "<<" MENU "<<endl<<endl;
		cout<<"1: Genere al azar numero entre 0-500 "<<endl<<endl;
		cout<<"2: Genere un numero aleatorio real "<<endl<<endl;
		cout<<"3: Genere N números primos "<<endl<<endl;
		cout<<"(s/S )-- Salir"<<endl;
		cin>>opcion;
		switch(opcion)
		{
		case '1':
			
			generar_Numero_al_azar(numero);
			cout<<endl<<endl;
			break;
		case '2':
			Generar_numero_aleatorio_real(azar);
			cout<<endl<<endl;
			break;
		case '3':
			
			Generar_N_numeros_primos(Nprimo);
			cout<<endl<<endl;
			break;
		case 's':
		case 'S':
			return;
			break;
		default:
			cout<<"opcion invalida";
		};//fin switch
	}while(opcion != 's'&&opcion!='S');
	
	
}
int main(int argc, char *argv[]) {
	srand(time(0));// Inicializar la semilla para obtener números realmente aleatorios
	char opcion;
	
	Menu(opcion);
	
	return 0;
}

