#include<iostream>
#include<conio.h>

using namespace std;

double factorial(int n){
	if (n == 1)
		return 1;
	else
		return n*factorial(n-1);
}

double fibonacci(int i){
	if(i <= 2)
		return 1;
	else
		return fibonacci(i - 1) + fibonacci (i - 2);
}

int main(){
    int n;
    cout<<"Digite un numero: "; cin>>n;
    
	double fact = factorial(n);
    cout<<"El factorial de "<<n<<" es "<<fact<<endl;

	double fib = fibonacci(n);
    cout<<"El valor para la serie de Fibonacci para "<<n<<" terminos es "<<fib<<endl;
    
	getch();
	return 0;
}
