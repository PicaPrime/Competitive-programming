#include<iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int result = 0;

    // brut force way to solve 2 eq 
    //when max n and m is 1000

    for(int i=0 ; i<= 1000 ; i++){
        for(int j=0 ; j<= 1000 ; j++){
            if(((i*i)+j) == n && (i+(j*j)) == m){
                result++;
            }
        }
    }

    cout<<result<<endl;

    return 0;
}