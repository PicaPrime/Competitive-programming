#include<iostream>
using namespace std;

int main(){

    int n, h;
    cin>>n>>h;
    int result = 0;

    int arr[n];

    for(int i=0 ; i < n ; i++){
        cin>>arr[i];
    }

    for(int i=0 ; i< n ; i++){
        if(arr[i] > h){
            result += 2;
        }
        else{
            result++;
        }
    }

    cout<<result<<endl;

    return 0;
}