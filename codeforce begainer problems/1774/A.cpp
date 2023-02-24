#include<iostream>
using namespace std;


int main(){

    int t;
    cin>>t;

    while (t--){

        int n;
        cin>>n;
        string s;
        cin>>s;

        int result = 0;
        if(s[0] == '1'){
            result++;
        }
        for(int i=1 ; i< n ; i++){
            if(result == 0 && s[i] == '1'){
                cout<<'+';
                result++;
            }
            else if(result == 1 && s[i] == '0'){
                cout<<"+";
                result++;
            }
            else if(s[i] == '0'){
                cout<<"+";
            }
            else{
                cout<<'-';
                result--;
            }
        }
        cout<<endl;
    }
    

    return 0;
}