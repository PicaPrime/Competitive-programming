#include<iostream>
using namespace std;

int main(){

    int n;
    int sum = 0;
    cin>>n;

    int arr[n][n];

    //input
    for(int i=0 ; i< n ; i++){
        for(int j=0 ; j< n ; j++){
            cin>>arr[i][j]; 
        }
    }

    // first diagonal
    for(int i=0 ; i< n ; i++){
        for(int j = 0 ; j<n ; j++){
            if(i == j){
                sum = sum + arr[i][j];
                arr[i][j] = 0;
            }
        }
    }

    // second diagonal
    int useless(0);
    for(int j= n-1 ; j>= 0 ; j--){
        sum = sum + arr[useless][j];
        arr[useless][j] = 0;
        useless++;
    }

    // middle collum
    for(int i= 0; i< n ; i++){
        sum = sum + arr[i][n/2];
        arr[i][n/2] = 0;
    }
    
    // middle row
    for(int i= 0; i< n ; i++){
        sum = sum + arr[n/2][i];
        arr[n/2][i] = 0;
    }
    
    cout<<sum<<endl;
    return 0;
}