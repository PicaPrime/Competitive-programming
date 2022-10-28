#include<iostream>
using namespace std;

int main(){

    int n; cin>>n;
    int result = 0;

    int arr[n];
    for(int i= 0 ; i< n ; i++){
        cin>>arr[i];
    }

    int max = arr[0];
    int low = arr[0];

    for(int i=1 ; i< n ; i++){
        if(arr[i] > max){
            result++;
            max = arr[i];
        }
        else if(arr[i] < low){
            result++;
            low = arr[i];
        }
    }

    cout<<result<<endl;

    return 0;
}