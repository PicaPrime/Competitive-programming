#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    for(int i=0 ; i< t ; i++){
        int n; cin>>n;
        int arr[n];

        for(int j=0 ; j< n ; j++){
            cin>>arr[j];
        }
        sort(arr,arr+n);
        for(int j=0 ; j< n-1 ; j++){
            if((abs(arr[j] - arr[j+1]) <= 1)){
                arr[j] = -1;
            }
        }
        int result = 0;

        for(int j= 0 ; j < n ; j++){
            if(arr[j] != -1){
                result++;
            }
            if(result > 1){
                break;
            }
        }

        if(result > 1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }



    }


    return 0;
}