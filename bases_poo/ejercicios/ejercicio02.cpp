/*
+ Parte 1: Construir una clase llamada tri�ngulo, que tenga los siguientes atributos: base y altura, y el siguiente m�todos: �rea. 
+ Parte 2: Construir una clase llamada rect�ngulo, que herede de la clase tri�ngulo, y que sobrescriba el m�todo �rea de la clase padre.
*/
#include<iostream>

using namespace std;

// Clase Triangulo
class Triangulo{
	// Atributos
	protected:
		float base;
		float altura;
	// Metodos:
	public:
		Triangulo(float, float);
		float area();
};

// Constructor Triangulo
Triangulo::Triangulo(float _base, float _altura){
	base = _base;
	altura = _altura;
}

// Metodo area Triangulo
float Triangulo::area(){
	return base*altura/2;
}

// Clase Rectangulo
class Rectangulo : public Triangulo {
	// Metodos
	public:
		Rectangulo(float, float);
		float area();
};

// Constructor Rectangulo
Rectangulo::Rectangulo(float _base, float _altura) : Triangulo(_base, _altura){
}

// Metodo area Rectangulo
float Rectangulo::area(){
	return base*altura;
}


int main(){
	Triangulo t(10, 4);
	cout<<"Area del triangulo: "<<t.area()<<endl;
	Rectangulo r(10, 4);
	cout<<"Area del rectangulo: "<<r.area()<<endl;
	return 0;
}
