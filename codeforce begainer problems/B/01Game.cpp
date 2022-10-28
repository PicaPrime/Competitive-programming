#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin>>t;
    while(t){
        string s ;
        cin>>s;

        int n = s.length();
        int a = 0;
        int b = 0;
        for(int i=0 ; i< n ; i++){
            if(s.at(i) == '1'){
                a++;
            }
            else{
                b++;
            }
        }
        n = min(a,b);
        if(n % 2 == 1){
            cout<<"DA"<<endl;
        }
        else{
            cout<<"NET"<<endl;
        }
        t--;
    }

    return 0;
}