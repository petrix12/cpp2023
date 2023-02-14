#include <iostream>

using namespace std;

class Vehiculo{

public:

    const string &getColor() const;
    const string &getMarca() const;

    Vehiculo(string color, string marca);//NECESARIO NOMBRE O NO?¿ MEJOR PARA ACLARARME

protected:
    string color;
    string marca;

};

class Coche:public Vehiculo{

public:

    void arrancarCoche();
    int getPotencia() const;
    int getNumeroPuertas() const;

    Coche(int, int);

private:

    int numeroPuertas;
    int potencia;

};

class Moto:public Vehiculo{

	public:
		Moto(int ,int );
	    void derrapar();
	    int getPotencia() const;
	    int getCilindrada() const;
	
	
	private:
	
	    int cilindrada;
	    int potencia;

};


int main()
{


    //Moto moto1(500,125);



}

Vehiculo::Vehiculo(string color, string marca){

    color = color;
    marca = marca;
}

Moto::Moto(int po, int ci){
    potencia = po;
    cilindrada = ci;
}

Coche::Coche(int po, int pu){

    potencia = po;
    numeroPuertas = pu;
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

const string &Vehiculo::getColor() const
{
    return color;
}

const string &Vehiculo::getMarca() const
{
    return marca;
}
