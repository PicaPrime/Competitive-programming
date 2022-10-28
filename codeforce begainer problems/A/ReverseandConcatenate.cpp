#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(char array[] , int n){
        int j = n-1;
        for(int i=0 ; i<= (n/2) ; i++){
            if(array[i] != array[j]){
                return false;
            }
            j--;
        }
        return true;
    }

int main(){

    int t;
    cin>>t;

    for(int m = 0 ; m< t ; m++){
    
        int n,k;
        cin>>n>>k;

        char arr[n];

        for(int i= 0 ; i< n ; i++){
            cin>>arr[i];
        }
        bool palindrom = true;

        if( k == 0){
            cout<<1<<endl;
        }
        else if(isPalindrome(arr,n)){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }

    return 0;
}