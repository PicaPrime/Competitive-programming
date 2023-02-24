// https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1051

#include<iostream>
#include<math.h>
using namespace std;

bool isPerfectSquire(int n){
    float x = sqrt(n);
    float y = floor(sqrt(n));
    if((x - y) == 0.0){
        return true;
    }
    return false;
}

int main(){

    while(true){
        int n;
        cin>>n;

        if(n == 0){
            break;
        }
        else if(n == 1){
            cout<<"yes"<<endl;
        }
        else if(isPerfectSquire(n) == true){
            cout<<"yes"<<endl;
        }
        else {
            cout<<"no"<<endl;
        }
        
    }

    return 0;
}