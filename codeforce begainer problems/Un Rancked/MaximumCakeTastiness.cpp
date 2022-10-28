#include<iostream>
#include <bits/stdc++.h>
#include<array>

using namespace std;

int main(int argc, char const *argv[])
{
    int t; cin>>t;
    while(t){

        int n; cin>>n;
        int arr[n];

        for(int i=0 ; i< n ; i++){
            cin>>arr[i];
        }

        int a = *max_element(arr,arr+n);
        *max_element(arr,arr+n) = 0;
        int b = *max_element(arr,arr+n);

        cout<<a+b<<endl;

        t--;
    }
    return 0;
}
