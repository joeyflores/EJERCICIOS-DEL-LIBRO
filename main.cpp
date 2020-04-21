#include <iostream>

using namespace std;


EJERCICIO 2.16
int main()
{
    int n1,n2;
    int suma;
    int resta;
    int multi;
    int div;
    cout<<"Ingrese su primer numero: ";cin>>n1;
    cout<<"Ingrese su segundo numero: ";cin>>n2;

    suma=n1+n2;
    resta=n1-n2;
    multi=n1*n2;
    div=n1/n2;
    cout<<"La suma de los dos numeros es: "<<suma<<endl;
    cout<<"La resta de los dos numeros es: "<<resta<<endl;
    cout<<"La multiplicacion de los dos numeros es: "<<multi<<endl;
    cout<<"El cociente de los dos numeros es: "<<div<<endl;

    return 0;
}



int main()
{
    char h[]={"v x y z"};
    char a='v';
    char b='x';
    char c='y';
    char d='z';
    char i[]={"v x"};
    char j[]={"y z"};


    //a

    cout<<h<<endl;

    //b

    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

    //c

    cout<<i<<" ";
    cout<<j;
    return 0;
}


EJERCICIO 2.18
int main()
{
    int n1,n2;

    cout<<"Ingrese su primer numero: ";cin>>n1;
    cout<<"Ingrese su segundo numero: ";cin>>n2;

    if(n1>n2){
        cout<<n1<<" Es mas grande"<<endl;
    }
    if(n2>n1){
        cout<<n2<<" Es mas grande"<<endl;
    }
    if (n1==n2){
        cout<<"Estos numeros son iguales"<<endl;
    }

    return 0;

}


EJERCICIO 2.19
int main()
{
    int n1,n2,n3;
    int suma,promedio,producto;

    cout<<"Introduzca tres enteros distintos: ";cin>>n1>>n2>>n3;
    suma=n1+n2+n3;
    promedio=(n1+n2+n3)/3;
    producto=n1*n2*n3;
    cout<<"La suma es: "<<suma<<endl;
    cout<<"El promedio es: "<<promedio<<endl;
    cout<<"El producto es: "<<producto<<endl;

    if((n1<n2)&&(n1<n3)){
        cout<<"El menor es: "<<n1<<endl;
    }
    if((n2<n1)&&(n2<n3)){
        cout<<"El menor es: "<<n2<<endl;
    }
    if((n3<n1)&&(n3<n2)){
        cout<<"El menor es: "<<n3<<endl;
    }
    if((n1>n2)&&(n1>n3)){
        cout<<"El mayor es: "<<n1<<endl;
    }
    if((n2>n1)&&(n2>n3)){
        cout<<"El mayor es: "<<n2<<endl;
    }
    if((n3>n1)&&(n3>n2)){
        cout<<"El mayor es: "<<n3<<endl;
    }

    return 0;
}


EJERCICIO 2.27
int main()
{
    char ch;

    cout<<"Ingresa tu caracter: ";cin>>ch;
    cout<<static_cast< int >(ch);





    return 0;
}


EJERCICIO 2.28
int main()
{
    int numero;
    int unidades,decenas,centenas,millar;

    cout<<"Ingrese su numero: ";cin>>numero;

    unidades=numero%10;
    numero=numero/10;
    decenas=numero%10;
    numero=numero/10;
    centenas=numero%10;
    numero=numero/10;
    millar=numero%10;
    numero=numero/10;
    cout<<unidades<<"   "<<decenas<<"   "<<centenas<<"   "<<millar<<"   "<<endl;

    return 0;
}


EJERCICIO 2.29

int main()
{

    int n1;
    cout<<"Longitud del cubo"<<"     "<<"Area del cubo:"<<"     "<<"Volumen del cubo:"<<endl;


    n1=0;
    cout<<n1<<"                     "<<6*n1*n1<<"                "<<n1*n1*n1<<endl;
    n1=1;
    cout<<n1<<"                     "<<6*n1*n1<<"                "<<n1*n1*n1<<endl;
    n1=2;
    cout<<n1<<"                     "<<6*n1*n1<<"               "<<n1*n1*n1<<endl;
    n1=3;
    cout<<n1<<"                     "<<6*n1*n1<<"               "<<n1*n1*n1<<endl;
    n1=4;
    cout<<n1<<"                     "<<6*n1*n1<<"               "<<n1*n1*n1<<endl;

    return 0;
}

