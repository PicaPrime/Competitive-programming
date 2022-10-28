#include<iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int t; cin>>t;
    while(t){

        int x, y;
        cin>>x>>y;

        double d = (x*x) + (y*y);
        d = sqrt(d);

        int p = (int)d;

        if(x == 0 && y == 0){
            cout<<0<<endl;
        }
        else if(p == d){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }

        t--;
    }
    return 0;
}
