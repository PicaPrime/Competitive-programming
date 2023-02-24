#include<iostream>
#include<vector>
using namespace std;


struct even{
    int index;
    int value;
};

struct odd{
    int index;
    int value;
};

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector <even> evenList;
        vector <odd> oddList;

        int arr[n];
        for(int i=0 ; i< n ; i++){
            int a;
            cin>>a;

            arr[i] = a;
            if(a % 2 == 0){
                struct even e;
                e.index = i;
                e.value = a;
                evenList.push_back(e);
            }
            else{
                struct odd o;
                o.index = i;
                o.value = a;
                oddList.push_back(o);
            }
        }

        if(oddList.size() >= 3){
            cout<<"yes"<<endl;
            for(int j=0 ; j< 3 ; j++){
                cout<<oddList[j].value<<" ";
            }
            cout<<endl;
        }
        else if (evenList.size() >= 2 && oddList.size() >= 1){
            cout<<"yes"<<endl;
            for(int j=0 ; j< 2 ; j++){
                cout<<evenList[j].value<<" ";
            }
            cout<<oddList[0].value<<endl;
        }
        else{
            cout<<"no"<<endl;
        }

    }

    return 0;
}