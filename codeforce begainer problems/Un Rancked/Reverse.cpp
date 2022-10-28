#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t!=0){
        int n; cin>>n;
        int arr[n];
        for(int i=0 ; i< n; i++){
            cin>>arr[i];
        }

        sort(arr,arr+n);
        cout << arr[0] <<" ";

        for(int i=1 ; i< n ; i++){
            if(arr[i] == arr[i-1]){
                continue;
            }
            else{
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;

        t--;
    }

    return 0;
}