#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

    int x, y;
    cin>>x>>y;

    int sum = 0;

    for(int i=y+1 ; i < x ; i++){
        if(i % 2 == 1 || i % 2 == -1){
            sum = sum + i;
        }
    }

    cout<<sum<<endl;

    return 0;
}
