#include<iostream>
using namespace std;

int main(){

    int n; // num of problems
    cin>>n;

    int result = 0; // print this variable

    for(int i=0 ; i< n ; i++){
        int sum = 0;
        int a;
        for(int j=0 ; j< 3 ; j++){
            cin>>a;
            sum = sum + a;
        }
        if(sum>=2){
            result++;
        }
    }

    cout<<result<<endl;

    return 0;
}