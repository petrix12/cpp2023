/*
Bloque try catch dentro de otro bloque try catch
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	try{
			try{
				throw 3;
		}
		catch(int errorInterno){
			throw;
		}
	}
	catch(int errorExterno){
		cout<<errorExterno<<endl;
	}
	
	system("pause");
	return 0;
}
