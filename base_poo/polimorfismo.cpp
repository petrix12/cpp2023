// POO en C++
// Conceptos basicos: Polimorfismo
#include<iostream>
#include<stdlib.h>

using namespace std;

// Clase padre o superclase
class Persona{
	// Atributos
	private:
		int edad;
		string nombre;
	// Metodos
	public:
        Persona(int, string);   // Constructor
		virtual void mostrar();	// Metodo al cual aplicaremos polimorfismo
};

// Clase alumno que hereda de persona
class Alumno : public Persona{
	// Atributos
	private:
		float notaFinal;
	// Metodoa
	public:
		Alumno(int, string, float);   // Constructor
		void mostrar();
};

// Clase profesor que hereda de persona
class Profesor : public Persona{
	// Atributos
	private:
		string materia;
	// Metodoa
	public:
		Profesor(int, string, string);   // Constructor
		void mostrar();
};

// Inicializar constructor Persona
Persona::Persona(int _edad, string _nombre){
	edad = _edad;
	nombre = _nombre;
}

// Inicializar constructor Alumno
Alumno::Alumno(int _edad, string _nombre, float _notaFinal) : Persona(_edad, _nombre){
	notaFinal = _notaFinal;
}

// Inicializar constructor Profesor
Profesor::Profesor(int _edad, string _nombre, string _materia) : Persona(_edad, _nombre){
	materia = _materia;
}

// Metodo mostrar (Padre)
void Persona::mostrar(){
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
}

// Metodo mostrar (Alumno)
void Alumno::mostrar(){
	Persona::mostrar();
	cout << "Nota Final: " << notaFinal << endl;
}

// Metodo mostrar (Profesor)
void Profesor::mostrar(){
	Persona::mostrar();
	cout << "Materia: " << materia << endl;
}

int main(){
	Alumno alumno = Alumno(22, "Isabel", 17.3);
	Profesor profesor = Profesor(19, "Maria", "Programacion");
	alumno.mostrar();
	profesor.mostrar();
    return 0;
}
