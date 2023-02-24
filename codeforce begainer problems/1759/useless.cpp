#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> OS;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> OMS;

const int   N                               = (int) 1e6+5;
const int   M                               = (int) 1e9+5;
const int   mod                             = (int) 1000000007;
const int   max_prime                       = (int) 1e6+3;
const int   BLKs                            = (int) 70000;
const int   BLKspan                         = (int) 700;

#define     ll                              long long int
#define     Faster                          ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



int main(){
    Faster;
    int t;                      cin>>t;
    while(t--){
        int m,s;                cin>>m>>s;
        vector<int> b(m);
        for(int i=0;i<m;i++){
            cin>>b[i];
        }

        vector<bool> taken(1111,false);
        
        for(int i=0;i<m;i++)taken[b[i]]=true;
        
        int mx=*max_element(b.begin(),b.end());

        int sum=0;
        bool ok=false;
        int curr=1;
        while(true){
            if(taken[curr]){
                curr++;
                continue;
            }
            sum+=curr;
            taken[curr]=true;
            if(sum==s){
                bool imp=false;
                for(int i=curr;i<=mx;i++){
                    if(!taken[i]){
                        imp=true;
                        break;
                    }
                }
                if(!imp){
                    ok=true;
                }
                break;
            }
            curr++;
            if(sum>s)break;
        }

        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
