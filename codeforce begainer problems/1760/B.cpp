#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;  cin>>t;
    while (t--)
    {
        int x;
        string s;
        cin>>x;
        cin>>s;
        int c = 0;
        while (x--)
        {
            if(s[x] > c){
                c = (int)s[x];
            }
        }

        c = c - 96;
        cout<<c<<endl;
        
    }
        
    return 0;
}
