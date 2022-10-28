#include<iostream>
using namespace std;

int main(){

    int t; cin>>t;
    while (t){

        string s;
        int n;
        cin>>n;
        cin>>s;
        int result = 0;
        cout<<s.size()<<endl;
        for(int i=0 ; i<s.size()-1; i++){
            if(s[i] == '0' && s[i+1] == '0'){
                result += 2;
            }
        }
        cout<<"result :"<<result<<endl;
    }
    

    return 0;
}