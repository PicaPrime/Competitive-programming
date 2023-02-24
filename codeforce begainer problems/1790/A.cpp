#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    string pi = "314159265358979323846264338327";

    while(t--){

        string s;
        cin>>s;
        int result = 0;
        for(int i=0 ; i< s.length() ; i++){
            if(pi[i] == s[i]){
                result++;
            }
            else{
                cout<<result<<endl;
                break;
            }
        }


    }


    return 0;
}