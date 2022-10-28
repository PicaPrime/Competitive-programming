#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    for(int k=0 ; k< t ; k++){
        int n;
        cin>>n;
        int arr1[n];
        int arr2[n];

        for(int i=0 ; i<n ; i++){
            cin>>arr1[i];
            arr2[i] = arr1[i];
        }
        bool flag = true;
        sort(arr1,arr1+n);
        for(int i=0 ; i<n ; i++){
            if(arr1[i] != arr2[i]){
                flag = false;
                break;
            }
        }
        
        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}