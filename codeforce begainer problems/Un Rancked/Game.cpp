#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin>>t;
    while(t != 0){
        int n;
        int array[n] ;
        for(int i=0 ; i< n ; i++){
            cin>>array[i];
        }
        int temp = 1;
        int r = 0;
        int result = 0; 
        for(int i=1 ; i< n ; i++){
            if(array[i] == 0){
                r++;
            }
            else if(array[i] == 1){
                result = result + r;
                r = 0;
                temp = array[i];
            }
            else if(array[i] == temp){
                
            }
        }
        t--;
    }

    return 0;
}