#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    string s = "";
    for(int i=0 ; i< 100 ; i++){
        s = s + "Yes";
    }
    int t;
    cin>>t;

    while(t){

        string x;
        cin>>x;

        int pos = s.find(x[0]);

        if(pos == -1){
            cout<<"NO"<<endl;
            t--;
            continue;
        }
        string y = s.substr(pos,x.length());
        
        if(x == y){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        t--;
    }    
    return 0;
}
