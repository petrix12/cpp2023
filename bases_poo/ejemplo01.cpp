#include<iostream>
#include<conio.h>
using namespace std;

class Vehiculo{
	protected:
	    string color;
	    string marca;
	public:
		Vehiculo();
	    Vehiculo(string color, string marca);
	    const string &getColor() const;
	    const string &getMarca() const;
};

class Coche : public Vehiculo{
	private:
	    int numeroPuertas;
	    int potencia;
	public:
		Coche(int, int);
		Coche(string, string, int, int);
	    void arrancarCoche();
	    int getPotencia() const;
	    int getNumeroPuertas() const;
};

class Moto : public Vehiculo{
	private:
	    int cilindrada;
	    int potencia;
	public:
		Moto(string, string, int, int);
	    void derrapar();
	    int getPotencia() const;
	    int getCilindrada() const;
};

int main(){
	Moto moto1("Azul", "Honda", 500, 125);
	moto1.derrapar();
	
	getch();
	return 0;
}

Vehiculo::Vehiculo(){
}

Vehiculo::Vehiculo(string color, string marca){
    color = color;
    marca = marca;
}

const string &Vehiculo::getColor() const
{
    return color;
}

const string &Vehiculo::getMarca() const
{
    return marca;
}

Coche::Coche(int po, int pu) : Vehiculo(){
    potencia = po;
    numeroPuertas = pu;
}

Coche::Coche(string _color, string _marca, int po, int pu) : Vehiculo(_color, _marca){
    potencia = po;
    numeroPuertas = pu;
}

Moto::Moto(string _color, string _marca, int po, int ci) : Vehiculo(_color, _marca){
    potencia = po;
    cilindrada = ci;
}

void Moto::derrapar(){
    cout << "Soy una moto y estoy derrapando";
}


void Coche::arrancarCoche(){
    cout << "Has arrancado el coche";
}

int Moto::getPotencia() const
{
    return potencia;
}

int Moto::getCilindrada() const
{
    return cilindrada;
}

int Coche::getPotencia() const
{
    return potencia;
}

int Coche::getNumeroPuertas() const
{
    return numeroPuertas;
}
