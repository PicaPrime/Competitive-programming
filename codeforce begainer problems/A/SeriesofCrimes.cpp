#include<iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int a[6];
    int k = 0;
    char arr[n][m];
    int x(0),y(0);

    for(int i=0 ; i< n ; i++){
        for(int j= 0 ; j< m ; j++){
            cin>>arr[i][j];
            if(arr[i][j] == '*'){
                a[k] = i;
                k++;
                a[k] = j;
                k++;
            }
        }
    }

    if(a[1] == a[3]){
        x = a[1];
        y = a[5];
    }

    else if()
    
    cout<<x+1<<" "<<y+1;

    return 0;
}