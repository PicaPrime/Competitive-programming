#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    

    int t;
    cin>>t;

    while(t){

        int m,s;
        cin>>m>>s;
        
        bool result = true;
        bool status[INT_MAX];
        int maxValue = 0;
        int arr[m];
        for(int i=0 ; i< m ; i++){
            cin>>arr[i];
            if(arr[i] > maxValue){
                maxValue = arr[i];
            }
            status[i] = true;
        }
        

        for(int i=0 ; i< m ; i++){
            cin>>arr[i];
            if(arr[i] > maxValue){
                maxValue = arr[i];
            }
            status[i] = true;
        }

        int sum = 0;

        for(int i=1 ; i<= maxValue; i++){

            if(status[i] == false){
                sum = sum + i;
            }

            if(sum == s){
                cout<<"yes"<<endl;
                result = false;
                break;
            }

            if(sum > s){
                cout<<"no"<<endl;
                result = false;
                break;
            }
        }

        int j = maxValue+1;
        while(result){
            if(status[j] == false){
                sum = sum + j;
            }
            if(sum == j){
                cout<<"yes"<<endl;
                break;
            }
            if(sum > s){
                cout<<"no"<<endl;
                break;
            }
        }
        t--;
    }
    
    
    return 0;
}
