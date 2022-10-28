#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int Salt  = (int)(p/np);
    int drink = (int)((k*l)/nl);
    int slice = (int)(c*d);

    int secondary_result = min(min(Salt,drink),slice);
    cout<<secondary_result/n<<endl;
    return 0;


}