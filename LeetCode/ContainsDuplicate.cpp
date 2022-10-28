#include<iostream>
#include<vector>
#include<array>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
    sort(nums.begin() , nums.end());
        for(int i=0 ; i< nums.size() ; i++){
            if(nums[i] = nums[i+1]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
