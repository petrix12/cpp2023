/*
Excepción cuando no se puede asignar mas memoria
*/
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	try {
		int *p;
		while (true)
			p = new int[1000000];
	}
	//catch(exception & excep) {
	catch(bad_alloc & excep) {
		cout<<"Error: "<<excep.what()<<endl;
	}
	
	getch();
	return 0;
}
