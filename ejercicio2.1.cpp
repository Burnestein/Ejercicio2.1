#include <iostream>
using namespace std; //usa un espacio de nombres estandar

int main(){
	float primernum, segundonum, tercernum, resultado;
	cout<<"Ingrese primer numero \n"; //para imprimir y pedir el primer numero, \n es el salto de linea
	cin>>primernum; //para tomar el dato
	cout<<"Ingrese segundo numero "<<endl; //para imprimir y pedir el segundo numero, endl es para terminar linea
	cin>>segundonum;
	cout<<"Ingrese tercer numero "<<endl; //para imprimir y pedir el tercer numero, endl es para terminar linea
	cin>>tercernum;
	resultado=primernum+segundonum+tercernum; //hace la operacion
	cout<<"El resultado es: "<<resultado<<endl; //imprime el resultado y da un salto de linea
	system("pause"); //pausa el programa
	
	return(0);
}
