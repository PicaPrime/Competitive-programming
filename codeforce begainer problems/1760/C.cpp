#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){

    int t;  cin>>t;

    while(t--){

        int n;
        cin>>n;
        int arr[n];
        int arrr[n];
        int max = 0;
        int secondMax = 0;

        for(int i=0 ; i< n; i++){
            cin>>arr[i]; 
            arrr[i] = arr[i];
        }
        sort(arrr, arrr+n);
        max = arrr[n-1];
        secondMax = arrr[n-2];

        for(int i=0 ; i < n ; i++){
            if(arr[i] < max){
                cout<<(arr[i] - max)<<" ";
            }
            else if(arr[i] == max){
                cout<<(arr[i] - secondMax)<<" ";
            }
        }

        cout<<endl;

    }    
    return 0;
}
