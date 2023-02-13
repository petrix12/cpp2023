#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    float x, y;
    cout<<"x = "; cin>>x;
    cout<<"y = "; cin>>y;
    x += y;
    y = x - y;
    x = x - y;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    return 0;
}