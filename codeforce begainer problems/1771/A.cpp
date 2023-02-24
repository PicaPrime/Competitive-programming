#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        int arr[n];
        for(int i=0 ; i< n ; i++){
            cin>>arr[i];
        }

        sort(arr+0,arr+n);

        int max = arr[n-1]-arr[0];
        int a=0, b=0;

        for(int i=0 ; i< n ; i++){
            if(arr[i] == arr[n-1]){
                b++;
            }
            else if(arr[i] == arr[0]){
                a++;
            }
        }

        cout<<a*b*2<<endl;



    }    

    return 0;
}
