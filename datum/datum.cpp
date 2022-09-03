// ***Datum Solution***
// Difficulty: 1.4
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 61%
// CPU Time: 0.00 s
// Author: No author
// Source: Croatian Open Competition in Informatics 2008/2009, contest #4
// Link: https://open.kattis.com/problems/datum


#include <bits/stdc++.h>
using namespace std;
int main()
{
string arr[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
int x[]={0,0,1,-1,0,0,1,1,2,3,3,4,4};

int d,m;
cin>>d>>m;
cout<<arr[((2*m)+d+(x[m])+1)%7];
}

