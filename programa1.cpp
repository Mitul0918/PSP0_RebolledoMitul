#include <iostream>
using namespace std;
int main(){
    float A;
    float B;
    float C;
    cout<<"Ingrese el valor de A: ";
    cin>>A;
    cout<<"Ingrese el valor de B: ";
    cin>>B;
    cout<<"Ingrese el valor de C: ";
    cin>>C;

    if(A>0 && B>0 && C>0){
        if((A+B>C)&&(A+C>B)&&(B+C>A)){
            if(A==B && B==C){
                cout<<"La figura es un triangulo equilatero"<<endl;
            }else if (A==B||A==C||B==C){
                cout<<"La figura es un triangulo isosceles"<<endl;
            }else{
                cout<<"La figura es un triangulo escaleno"<<endl;
            }
        }else{
            cout<<"Los valores no indican figura"<<endl;
        }
    }else if (A>0 && B>0 && C==0){
        if(A==B){
            cout<<"La figura es un cuadrado"<<endl;
        }else{
            cout<<"La figura es un rectangulo"<<endl;
        }
    }else if (A>0 && B==0 && C==0){
        cout<<"La figura es un circulo"<<endl;
    }else{
        cout<<"Los valores no indican figura"<<endl;
    }
    return 0;
}