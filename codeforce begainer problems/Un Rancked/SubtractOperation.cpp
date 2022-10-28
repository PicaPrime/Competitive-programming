#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t; cin>>t;
    while(t){

        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0 ; i< n ; i++){
            cin>>arr[i];
        }

        bool flag = false;

        for(int i=0 ; i<n; i++){
            for(int j=0 ; j<n ; j++){
                if(arr[j] - arr[i] == k){
                    flag = true;
                    cout<<"YES"<<endl;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        if(flag == false){
            cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}
