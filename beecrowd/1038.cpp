#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    double x,y;
    cin>>x>>y;

    if(x == 1){
        x = 4;
    }
    else if(x == 2){
        x = 4.5;
    }
    else if(x == 3){
        x = 5;
    }
    else if(x == 4){
        x = 2;
    }
    else if(x == 5){
        x = 1.5;
    }


    cout<<fixed<<"Total: R$ "<<setprecision(2) << (x*y)<<endl;

    return 0;
}
