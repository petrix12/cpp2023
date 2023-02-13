/*
+ Parte 1: Crea una clase llamada Cuenta que tendrá los siguientes atributos: titular y cantidad.
    + El titular será obligatorio y la cantidad es opcional. 
    + Crea dos constructores que cumpla lo anterior.
    + Crea sus respectivos métodos getters, setters y el mètodo toString.
    + Tendrá dos métodos especiales:
        + ingresar(double cantidad): se ingresa una cantidad a la cuenta, si la cantidad introducida es negativa, no se hará nada.
        + retirar(double cantidad): se retira una cantidad a la cuenta, si restando la cantidad actual a la que nos pasan es negativa, la cantidad de la cuenta pasa a ser 0.
+ Parte 2: Crear una nueva clase CuantaJoven que herede de la clase Cuenta. 
    + La clase deberá contener ahora el atributo edad.
    + Crear un constructor considerando el nuevo atributo.
    + Crear los mètodos getters y setters para el nuevo atributo.
    + Aplicar polimorfismo a al mètodo toString para mostrar ahora la edad.
*/
#include<iostream>
#include<conio.h>

using namespace std;

// Clase Cuenta
class Cuenta{
	// Atributos
	protected:
		string titular;
		double cantidad = 0;
	// Metodos
	public:
		Cuenta(string);
		Cuenta(string, double);
		string getTitular();
		void setTitular(string);
		double getCantidad();
		void setCantidad(double);
		void toString();
		void ingresar(double);
		void retirar(double);
};

// Constructor 1 Cuenta
Cuenta::Cuenta(string titular){
	this->titular = titular;
}

// Constructor 2 Cuenta
Cuenta::Cuenta(string titular, double cantidad){
	this->titular = titular;
	this->cantidad = cantidad;
}

// Getter Cuenta
string Cuenta::getTitular(){
	return this->titular;
}

double Cuenta::getCantidad(){
	return this->cantidad;
}

// Setter Cuenta
void Cuenta::setTitular(string titular){
	this->titular = titular;
}

void Cuenta::setCantidad(double cantidad){
	this->cantidad = cantidad;
}

// toString Cuenta
void Cuenta::toString(){
	cout<<"El titular "<<this->titular<<" tiene en su cuenta la cantidad de $ "<<this->cantidad<<endl;
}

// Metodos ingresar y retirar
void Cuenta::ingresar(double ingreso){
	this->cantidad += ingreso;
}

void Cuenta::retirar(double retiro){
	this->cantidad = (retiro <= cantidad) ? this->cantidad - retiro : 0;
}

// Clase CuentaJoven
class CuentaJoven : public Cuenta {
	// Atributos
	private:
		int edad;
	// Metodos
	public:
		CuentaJoven(string, double, int);
		int getEdad();
		void setEdad(int);
		void toString();
};

// Constructor CuentaJoven
CuentaJoven::CuentaJoven(string titular, double cantidad, int edad) : Cuenta(titular, cantidad) {
	this->edad = edad;
}

// Getter CuentaJoven
int CuentaJoven::getEdad(){
	return this->edad;
}

// Setter CuentaJoven
void CuentaJoven::setEdad(int edad){
	this->edad = edad;
}

// toString Cuenta
void CuentaJoven::toString(){
	cout<<"El titular "<<this->titular<<" de edad "<<this->edad<<" tiene en su cuenta la cantidad de $ "<<this->cantidad<<endl;
}

int main(){
	Cuenta c("Pedro");
	cout<<"Titular: "<<c.getTitular()<<endl;
	
	c.setTitular("Carlos");
	cout<<"Titular: "<<c.getTitular()<<endl;
	c.toString();
	
	Cuenta cuenta("Ramon", 1200);
	cout<<"Titular: "<<cuenta.getTitular()<<" Cantidad: "<<cuenta.getCantidad()<<endl;
	cuenta.toString();
	
	cuenta.ingresar(350);
	cuenta.toString();
	
	cuenta.retirar(1000);
	cuenta.toString();
	
	getch();
	return 0;
}
