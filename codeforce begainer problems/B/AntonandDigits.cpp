#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int k1,k2,k3,k4; 
    cin>>k1>>k2>>k3>>k4;

    int a = min(min(k1,k3),k4);
    k1 = k1 - a;
    int result = a * 256;
    a = min(k1,k2);

    result += a * 32;

    cout<<result<<endl;
    
    return 0;
}