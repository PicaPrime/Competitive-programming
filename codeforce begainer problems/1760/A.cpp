#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int arr[3];
        for(int i=0 ; i< 3 ; i++){
            cin>>arr[i];
        }
        sort(arr,arr+3);
        cout<<arr[1]<<endl;
    }
    return 0;
}
