#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin>>n;
    
    float arr[n];
    float nominator = 0.00;
    float denominator = 0.00;

    for(int i=0 ; i< n ; i++){
        cin>>arr[i];
        nominator += arr[i];
        denominator += 100;
    }

    float result = (nominator / denominator)*100;
    cout<< fixed << setprecision(7) << result << endl;    
    

    return 0;
}