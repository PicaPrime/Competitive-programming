#include<iostream>
#include<array>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int t ; cin>>t;
    while (t){

        int n; cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        if(n == 1){
            if(arr[0] == 1 || arr[0] == 0){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
        }

        else{
            sort(arr,arr+n);
            if(arr[n-1] == arr[n-2] || arr[n-1] == arr[n-2] + 1){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
        }
        
        t--;
    }
    

    return 0;
}