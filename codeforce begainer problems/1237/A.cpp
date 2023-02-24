#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0 ; i< n ; i++){
        cin>>arr[i];
    }
    int l = 0;
    int h = 0;

    for(int i=0 ; i< n ; i++){
        if(l == 0){
            if(arr[i] < 0){
                arr[i] = arr[n] * (-1);
                arr[i] = floor(arr[n]/2);
                arr[i] = arr[i] * (-1);
            }
            else{
                arr[i] = floor(arr[n]/2);
            }
            l++;
            if(h != 0){
                h--;
            }
        }

        else if(h == 0){
            if(arr[i] < 0){
                arr[i] = arr[n] * (-1);
                arr[i] = ceil(arr[n]/2);
                arr[i] = arr[i] * (-1);
            }
            else{
                arr[i] = ceil(arr[n]/2);
            }
            h++;
            if(l != 0){
                l--;
            }
        }
    }

    int sum = 0;
    for(int i=0 ; i< n ; i++){
        sum =+ arr[i];
    }
    if(sum != 0){
        arr[n] = arr[n] - sum;
    }
    for(int i=0 ; i< n ; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}