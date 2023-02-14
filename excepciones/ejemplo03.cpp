/*
Lanzar una excepcion desde una funcion
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int producto(int a, int b);

int main(){
	try {
		//int valor = producto(3, 5);
		int valor = producto(3, -5);
		cout<<valor<<endl;
	}
	catch(const char * error){
		cout<<error<<endl;
	}
	
	system("pause");
	return 0;
}

int producto(int a, int b){
	if(a<0 || b<0)
		throw "Error, numero negativo";
	return a*b;
}
