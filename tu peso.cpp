#include<iostream>
using namespace std;

int main()
{
    int peso;
    cout<<"HOLA CUAL ES TU peso?: ";
    cin>>peso;
    if(peso>=80) {
        cout<<"Estas con sobrepeso🍻";
    }
    
   else if(peso=65) {
        cout<<"Tu peso está perfecto🍻";
    }
    else if(peso<60) {
        cout<<"Estás bajo de peso👶";
    }
    return 0;
}