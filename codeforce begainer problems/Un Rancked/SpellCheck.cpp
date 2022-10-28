#include <bits/stdc++.h>
using namespace std;

bool check(int n, string s){
    if(n != 5){
        return false;
    }

    //Timur, miurT, Trumi, mriTu
    if(s == "Timur" || s == "miurT" || s == "Trumi" || s == "mriTu"){
        return true;
    }
    else{
        return false;
    }
}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t){

        int n;
        cin>>n;
        string s;
        cin>>s;

        if(check(n,s)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


        t--;
    }
    return 0;
}
