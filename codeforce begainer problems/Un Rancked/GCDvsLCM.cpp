#include<iostream>
using namespace std;

int main(){

    int t; cin>>t;
    while(t){

        int n; cin>>n;
        int a = n/4;
        int b = a;
        int c = n - a - b;
        int d = 1;
        c = c - d;
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        t--;
    }

    return 0;
}