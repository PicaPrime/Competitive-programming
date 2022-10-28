#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;

    if(n%2 == 1){
        cout<<-1<<endl;
        return 0;
    }
    
    int temp;

    for(int i=01 ; i<= n ; i++){
        if(i%2 == 1){
            temp = i;
        }
        else{
            cout<<i<<" "<<temp<<" ";
        }
    }
    cout<<endl;

    return 0;
}

