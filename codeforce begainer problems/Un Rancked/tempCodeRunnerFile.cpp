#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

   int t; cin>>t;
   while(t){
        string s ;
    cin>>s;

    int n = s.length();
    if(n % 2 == 1){
        n--;
    }

    if((n/2) % 2 == 1){
        cout<<"DA"<<endl;
    }
    else{
        cout<<"NET"<<endl;
    }
    t--;
   }

    return 0;
}