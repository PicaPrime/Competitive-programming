#include<iostream>
using namespace std;

int main(){

    int t; cin>>t;
    while (t != 0){
        int a,b;
        cin>>a>>b;
        if(a == 0){
            cout<<1<<endl;
        }
        else{
            int result = (a*1)+(b*2);
            cout<<result+1<<endl;
        }
        t--;
    }
    

    return 0;
}