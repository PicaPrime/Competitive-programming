#include<iostream>
#include <string>
using namespace std;

int main(){

    string s ;
    cin>>s;

    int max = 0;
    for(int i=0 ; i< s.length() ; i++){
        if((int)s[i] > max){
            max = (int)s.at(i);
        }
    }

    for(int i=0 ; i< s.length() ; i++){
        if((int)(s.at(i)) == (max)){
            cout<<s.at(i);
        }
    }

    cout<<endl;


    return 0;
}