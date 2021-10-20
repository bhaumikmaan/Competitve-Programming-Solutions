/***  KNOWLEDGE IS POWER  ***/

// PROBLEM STATEMENT
// Given an array B of length N, find an array A of length N where 0≤Ai≤10^9 such that array C where Ci = Ai mod Bi, ∀i∈{1,N} has maximum number of distinct integers.

// In case of multiple answers, print any.

// SAMPLE INPUT 
// 3
// 3
// 2 1 3
// 2
// 1 1
// 6
// 1 2 3 3 2 1

// SAMPLE OUTPUT
// 3 1 2
// 2 3
// 0 1 2 3 4 5

// SOLUTION

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
bool cond(pair<int,int> p , pair<int,int> q)
{
	return p.second < q.second ; 
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
        int n ;
        cin >> n ;
        vector<pair<int,int>> v(n) ;
        for(int i = n ; i < 2*n ; i++)
        {
        	int x ;
        	cin >> x ;
        	v.pb({x , i}) ;
        }
        sort(all(v)) ;
        int x = 0 ;
        for(int i = n ; i < 2*n ; i++)
        {
        	if(v[i].first > x)
        	{
        		v[i].first = x ;
        		x++ ;
        	}
        }
        sort(all(v) , cond) ;
        for(int i = n ; i < 2*n ; i++)
        {
        	cout << v[i].first << " " ;
        }
        cout << "\n" ;
    }
    return 0 ;
}    
