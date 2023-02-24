#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t){

        string s;
        cin>>s;

        string u;
        u = s;
        reverse(s.begin(), s.end());

        cout<<s<<u<<endl;

        t--;
    }


    return 0;
}