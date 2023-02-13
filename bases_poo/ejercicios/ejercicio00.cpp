// POO en C++
// Conceptos b�sicos: Clase, Objeto, Abstracci�n, Encapsulaci�n
#include<iostream>
#include<stdlib.h>

using namespace std;

class Persona{
	// Atributos
	private:
		int edad;
		string nombre;
	// M�todos
	public:
        Persona(int, string);   // Constructor
		void leer();
		void correr();
};

// Inicializar constructor
Persona::Persona(int _edad, string _nombre){
	edad = _edad;
	nombre = _nombre;
}

// M�todo leer
void Persona::leer(){
	cout << "Soy " << nombre << " y estoy leyendo" << endl;
}

// M�todo correr
void Persona::correr(){
	cout << "Soy " << nombre << " y estoy corriendo" << endl;
}

int main(){
	Persona p1 = Persona(22, "Isabel");
	Persona p2(19, "Mar�a");
	p1.leer();
	p2.leer();
    return 0;
}
