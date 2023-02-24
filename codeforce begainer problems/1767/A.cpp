#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin>>t;

    while(t--){

        int x1,x2,x3,y1,y2,y3;
        cin>>x1>>x2>>x3>>y1>>y2>>y3;


        if(x1 == x2 || x1 == x3 || x2 == x3){
            cout<<"NO"<<endl;
        }
        else if(y1 == x2 || y1 == y3 || y2 == y3){
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }


    }

    return 0;
}