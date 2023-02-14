/*
Generar nuestra propia excepcion
*/
#include<iostream>
#include<conio.h>
using namespace std;

class MiExcepcion : public exception {
	public:
		const char * what();
};

int main(){
	try{
		int num = -1;
		if(num < 0)
			throw MiExcepcion();
	}
	catch(MiExcepcion &exp){
		cout<<exp.what()<<endl;
	}
	
	getch();
	return 0;
}

const char * MiExcepcion::what(){
	return "Mensaje de error modificado";
}
