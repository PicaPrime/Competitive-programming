#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    string arr[n];
    int group_count = 1;

    for(int i=0 ; i< n ; i++){
        cin>>arr[i];
    }

    for(int i=0 ; i< n-1 ; i++){
        if(arr[i] == arr[i+1]){
            continue;
        }
        else{
            group_count++;
        }
    }


    cout<<group_count<<endl;
    return 0;
}