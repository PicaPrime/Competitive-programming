#include<iostream>
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

    int n; cin>>n;
    char arr[n];
    for(int i=0 ; i< n ; i++){
        cin>>arr[i];
    }

    if(isPalindrome(arr,n)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    

    return 0;
}