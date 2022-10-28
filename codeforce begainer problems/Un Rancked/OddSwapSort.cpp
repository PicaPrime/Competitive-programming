#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin>>t;
    while(t!=0){
        int n; cin>>n;
        int arr[n];
        bool b = true;
        for(int i=0 ; i< n ; i++){
            cin>>arr[i];
        }

        for(int i=0 ; i< n ; i++){
            if(arr[i] > arr[i+1]){
                if((arr[i] + arr[i+1]) % 2 == 1){
                    b = false;
                    break;
                }
                int temp;
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = arr[i];
            }
        }

        if(b == false){
            cout<<"no"<<endl;
        }
        else {
            cout<<"yes"<<endl;
        }

        t--;
    }


    return 0;
}