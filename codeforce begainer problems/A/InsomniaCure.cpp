#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    // k, l, m, n and d

    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;

    int result = d / n;
    result = result * 4;

    

    cout<<result<<endl;

    return 0;
}