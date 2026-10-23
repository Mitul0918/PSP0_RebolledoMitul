#include <iostream>
using namespace std;
int main(){
    float ladoA;
    float ladoB;
    float area;

    cout<<"Ingrese el valor para el lado A: ";
    cin>>ladoA;
    cout<<"Ingrese el valor para el lado B: ";
    cin>>ladoB;

    if(ladoA==0||ladoB==0){
        cout<<"Ninguno de los valores pueden ser 0"<<endl;
    }else{
        area=ladoA*ladoB;
        if(ladoA==ladoB){
            cout<<"El resultado del area es: "<<area<<" y es un cuadrado"<<endl;
        }else{
            cout<<"El resultado del area es: "<<area<<endl;
        }
    }
    return 0;
}