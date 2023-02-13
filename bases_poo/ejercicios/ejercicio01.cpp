/*
Crea una clase Fraccion con metodos para sumar, restar, multiplicar y dividir fracciones.
*/
#include<iostream>

using namespace std;

class Fraccion{
	// Atributos
	private:
		int a;
		int b;
		int c;
		int d;
	// Metodos
	public:
		Fraccion(int, int, int, int);
		float sumar();
		float restar();
		float multiplicar();
		float dividir();
};

// Iniciar constructor
Fraccion::Fraccion(int _a, int _b, int _c, int _d){
	a = _a;
	b = _b;
	c = _c;
	d = _d;
}

// Metodo sumar
float Fraccion::sumar(){
	return (float)(a*d + b*c)/(b*d);
}

// Metodo restar
float Fraccion::restar(){
	return (float)(a*d - b*c)/(b*d);
}

// Metodo multiplicar
float Fraccion::multiplicar(){
	return (float)(a*c)/(b*d);
}

// Metodo dividir
float Fraccion::dividir(){
	return (float)(a*d)/(b*c);
}

int main(){
	cout.precision(3);
	Fraccion f(4, 2, 9, 3);
	cout<<"Suma: "<<f.sumar()<<endl;
	cout<<"Resta: "<<f.restar()<<endl;
	cout<<"Multiplicacion: "<<f.multiplicar()<<endl;
	cout<<"Division: "<<f.dividir()<<endl;
	return 0;
}

