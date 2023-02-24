#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    double arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr, arr+3);
    double a,b,c;
    a = arr[2];
    b = arr[1];
    c = arr[0];

    if(a > b+c || a == b+c){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    if(a*a == (b*b + c*c)){
        cout<<"TRIANGULO RETANGULO"<<endl;
    }
    if(a*a > (b*b + c*c)){
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }
    if(a*a < (b*b + c*c)){
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }
    if(a == b && b == c){
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }
    if(a == b && a != c){
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }
    if(a == c && a != b){
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }
    if(b == c && b != a){
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }

    return 0;
}
