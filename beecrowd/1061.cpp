#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{

    int day1, day2;
    int h1, m1, s1;
    int h2, m2, s2;

    char temp;


    int a = ((((((day1*24)+h1)*60)+m1)*60)+s1);
    int b = ((((((day2*24)+h2)*60)+m2)*60)+s2);

    int x = b-a;

    cout<<(int)((x/60)/60)/24;
    x = ((x%60)%60)%24;

    return 0;
}
