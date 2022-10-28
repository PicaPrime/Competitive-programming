#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin>>t;
    for(int i=0 ; i< t ; i++){
        int n; cin>>n;
        int x = n % 3;
        n = n/3;
        switch (x){
        case 0:
            while(n){
                cout<<"21";
                n--;
            }
            cout<<endl;
            break;
        case 1:
            while(n){
                cout<<"12";
                n--;
            }
            cout<<"1"<<endl;
            break;
        case 2:
            while(n){
                cout<<"21";
                n--;
            }
            cout<<"2"<<endl;
            break;

        default:
            break;
        }
    }    

    return 0;
}