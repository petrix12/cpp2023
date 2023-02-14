#include<iostream>

using namespace std;

int main(){
	try{
		//int num = 5;
		//int num = -2;
		//int num = 0;
		int num = 1;
		if (num < 0)	// Probocando una excepción tipo string
			throw "Error en el sistema: el valor de num debe ser mayor o igual a cero";
		if (num ==0)	// Probocando una excepción tipo int
			throw 5;
		if (num ==1)	// Probocando una excepción con un tipo distinto a las anteriores
			throw 'a';
		cout<<num<<endl;
	} 
	// captura excepciones del tipo string
	catch(const char* error) {
		cout<<error<<endl;
	}
	// captura excepciones del tipo entero
	catch(int error) {
		cout<<"Error numero: "<<error<<endl;
	}
	// captura excepciones de cualquier tipo
	catch(...) {
		cout<<"Error de otro tipo"<<endl;
	}
	return 0;
}
