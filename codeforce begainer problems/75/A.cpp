#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main(){

    string s1, s2;
    string s11, s22;

    int a,b,c;
    int x,y,z;

    cin>>s1>>s2;

    for(int i=0 ; i< s1.length(); i++){
        if(s1[i] != '0'){
            s11.push_back(s1[i]);
        }
    }

    for(int i=0 ; i< s2.length(); i++){
        if(s2[i] != '0'){
            s22.push_back(s2[i]);
        }
    }

    a = stoi(s1);
    b = stoi(s2);
    c = a+b;

    vector <int> v;

    while(c != 0){
        if(c % 10 != 0){
            v.push_back(c % 10);
            c = int(c / 10);
        }
        else{
            c= int(c / 10);
        }
    }

    c = 0;
    for(int i= v.size()-1 ; i>=0 ; i--){
        c = c*10 + v[i];
    }

    x = stoi(s11);
    y = stoi(s22);
    z = x+y;

    if(c == z){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}