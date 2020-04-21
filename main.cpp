#include <iostream>

using namespace std;

int main()
{
    int n1;
    int suma=0;
    int multi=1;
    cout<<"Ingrese la cantidad de numero: ";cin>>n1;

    for(int i=1;i<n1;i++){
        if(i%2==0){
            suma=suma+i;
            }
        else{
            multi=multi*i;
        }

    }

    cout<<"el Resultado de la suma es: "<<suma<<endl;
    cout<<"el Resultado de la multiplicacion es: "<<multi<<endl;
    return 0;
}
