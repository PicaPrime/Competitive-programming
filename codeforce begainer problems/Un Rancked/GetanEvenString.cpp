#include<iostream>
using namespace std;

int main(){

    int t; cin>>t;
    while (t)
    {
        string s ;
        cin>>s;
        bool flag = true;
        int n = s.length();
        if(n % 2 == 1){
            cout<<"no"<<endl;
        }
        else{
            for(int i=0 ; i<n-2 ; i++){
                if(i % 2 == 0){
                    if(s[i] != s[i+1]){
                        cout<<"no"<<endl;
                        i=n;
                        flag = false;
                    }
                }
            }
            if(flag){
            cout<<"yes"<<endl;
        }
        }
        
        t--;
    }
    
    return 0;
}