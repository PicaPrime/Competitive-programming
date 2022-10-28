#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i= 0 ; i< n ; i++){
        cin>>arr[i];
    }
    int value = arr[k-1];
    sort(arr,arr+n);
    int sum = 0;

    for(int i=n-1 ; i >= 0 ; i--){
        if(value > arr[i] || arr[i] == 0){
            break;
        }
        sum++;
    }

    cout<<sum<<endl;

    return 0;
}