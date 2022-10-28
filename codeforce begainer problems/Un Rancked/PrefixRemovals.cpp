#include<iostream>
#include<array>
#include<string>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){

    int t; cin>>t;
    bool flag = false;
    while(t){
        string s ; cin>>s;
        for(int i=0 ; i< s.length()-1; i++){
            for(int j=i+1; j< s.length(); j++){
                if(s[i] == s[j]){
                    s[i] = NULL;
                    flag = true;
                    break;
                }
            }
            if(flag == false){
                break;
            }
        }
        cout<<"result: "<<s.length()<<"   ";
        for(int i=0 ; i< s.length() ; i++){
            if(s[i] != NULL){
                cout<<s[i];
            }
        }
        cout<<endl;
        t--;
    }
    return 0;
}
