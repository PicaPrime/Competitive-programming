#include<iostream>
#include <bits/stdc++.h>

using namespace std;


int main(){

    double n1,n2,n3,n4;
    cin>>n1>>n2>>n3>>n4;
    double n = ((n1*2)+(n2*3)+(n3*4)+n4) / 10;


    cout<<setprecision(2)<<"Media: "<<n<<endl;

    if(n >= 7.0){
        cout<<"Aluno reprovado."<<endl;
    }
    
    if(n >= 5.0 && n <= 6.9){
        cout<<"Aluno em exame."<<endl;
        double n5;
        cin>>n5;
        cout<<"Nota do exame: "<<n5<<endl;
        cout<<"Aluno aprovado."<<endl;

        n = (n+n5) / 2;

        if(n >= 5.0 || n<= 4.9){
            cout<<"Media final: "<<n<<endl;
        }

    }



}

