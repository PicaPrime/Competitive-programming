#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int t ; cin>>t;
    while(t != 0){
        int n,s; cin>>n>>s;
        int sum = 0;
        int a = n*n;
        int result = 0;

        for(int i=0 ; i<= s ; i++){
            if(s == 0){
                break;
            }
            sum = sum + a;
            result++;
            if(sum > s){
                result--;
                break;
            }
        }
        cout<<result<<endl;
        t--;
    }

    return 0;
}