#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){


    string s;
    cin>>s;

    sort(s.begin() , s.end());
    int result = 0;

    for(int i=0 ; i< s.length() ; i++){
        if(s[i] != s[i+1]){
            result++;
        }
    }

    if(result % 2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }  
    else{
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}