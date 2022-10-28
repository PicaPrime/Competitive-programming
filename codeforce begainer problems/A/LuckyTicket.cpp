#include<iostream>
#include <bits/stdc++.h>
#include<string>

using namespace std;

int main(){

    string s;
    cin>>s;
    int j = s.length() - 1;
    int sum1 = 0;
    int sum2 = 0;

    for(int i=0 ; i< ((s.length()/2)-1) ; i++){
        int a = stoi(s.at(i));
        sum1 = sum1 + a;
        a = stoi(s.at(j));
        sum2 = sum2 + a;
        j--;
    }

    cout<<"sum1 : "<<sum1<<endl;
    cout<<"sum2 : "<<sum2<<endl;

    if(sum1 == sum2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}