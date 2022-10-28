#include<iostream>
#include <bits/stdc++.h>
#include<array>

using namespace std;

int main(){

    int t; cin>>t;
    while(t != 0){

        int n; cin>>n;
        int arr[n];
        int max = 0;
        int red = 0;
        int blue= 0;
        for(int i=0 ; i< n ; i++){
            cin>>arr[i];
            if(max < arr[i]){
                max = arr[i];
            }
        }
        if(max > 0){
            red++;
        }

        sort(arr,arr+n);
        for(int i=0 ; i< n ; i++){
            if(arr[i] < max){
                blue++;
            }
        }
        if(blue > red){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }

    return 0;
}