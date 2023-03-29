#include <iostream>
using namespace std;

void fun1(){
    int fila[10], n = 10;
    int sum = 0;
    cout<<"\nEscriba solo 10 numeros"<<endl;


    for(int i=0; i<n;i++){

        cout<<"\n"<<i+1<<". Digite un numero: ";
        cin>>fila[i];
    }
    for(int i=0; i<n;i++){
        sum += fila[i];
    }
    cout<<"\nLa suma de todos los numeros del array es: "<<sum<<endl;
}



void fun2(){
    int fila[6], n = 6, mayor = 0;
    cout<<"\nEscriba solo 6 numeros"<<endl;
    for(int i=0; i<n;i++){

        cout<<"\n"<<i+1<<". Digite un numero: ";
        cin>>fila[i];

    if(fila[i] > mayor){
        mayor = fila[i]; //1,2,3,4,5,6

    }
    }
    cout<<"\nEl numero mayor es: "<<mayor<<endl;

}



void fun3(){
    int fila[8], n=8;
    cout<<"\nEscriba solo 8 numeros"<<endl;
     for(int i=0; i<n; i++){
         cout<<"\n"<<i+1<<". Digite un numero: ";
         cin>>fila[i];
     }
     cout<<"El orden inverso del array es: "<<fila[7]<<","<<fila[6]<<","<<fila[5]<<","<<fila[4]<<","<<fila[3]<<","<<fila[2]<<","<<fila[1]<<","<<fila[0]<<"."<<endl;
}



void fun4(){
    int fila[] = {5,2,3,4,5,6,7,7,20,10}, n = 10;
    int sum = 0;

    for(int i=0; i<n;i++){
        sum += fila[i];
    }
    cout<<"\nLa suma de todos los numeros del array es: "<<sum<<endl;

}



void fun5(){
    string frutas[]={"fresa", "sandia", "melon", "fresa", "naranja", "melon", "mango", "naranja", "fresa"};
    string fruta1 = "fresa";
    string fruta2 = "sandia";
    string fruta3 = "melon";
    string fruta4 = "naranja";
    string fruta5 = "mango";
    int conta1 = 0, conta2 = 0, conta3 = 0, conta4 = 0, conta5 = 0;

    for(int i=0; i < sizeof(frutas) / sizeof(frutas[9]); i++){

        if(frutas[i] == fruta1){
            conta1++;
        }
        if(frutas[i] == fruta2){
            conta2++;
        }
        if(frutas[i] == fruta3){
            conta3++;
        }
        if(frutas[i] == fruta4){
            conta4++;
        }
        if(frutas[i] == fruta5){
            conta5++;
        }
    }

    cout<<"\nLa palabra: "<<fruta1<<" aparece "<<conta1<<" veces en el array."<<endl;
    cout<<"La palabra: "<<fruta2<<" aparece "<<conta2<<" veces en el array."<<endl;
    cout<<"La palabra: "<<fruta3<<" aparece "<<conta3<<" veces en el array."<<endl;
    cout<<"La palabra: "<<fruta4<<" aparece "<<conta4<<" veces en el array."<<endl;
    cout<<"La palabra: "<<fruta5<<" aparece "<<conta5<<" veces en el array."<<endl;
}
