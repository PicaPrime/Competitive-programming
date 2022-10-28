#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;

    while(t){

        bool flag = true;
        int n;
        cin>>n;
        string x;
        string y;

        cin>>x;
        cin>>y;

        for(int i=0 ; i< n ; i++){
            if(x[i] == y[i] || (x[i] == 'G' && y[i] == 'B') || (x[i] == 'B' && y[i] == 'G')){
                continue;
            }
            else{
                flag = false;
            }
        }

        if(flag){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }

        t--;
    }
    return 0;
}
