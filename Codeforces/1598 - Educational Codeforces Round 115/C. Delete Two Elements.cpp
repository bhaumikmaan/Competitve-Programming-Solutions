/***  KNOWLEDGE IS POWER  ***/

// PROBLEM STATEMENT
// Monocarp has got an array a consisting of n integers. Let's denote k as the mathematic mean of these elements (note that it's possible that k is not an integer).
// The mathematic mean of an array of n elements is the sum of elements divided by the number of these elements (i. e. sum divided by n).
// Monocarp wants to delete exactly two elements from a so that the mathematic mean of the remaining (n−2) elements is still equal to k.
// Your task is to calculate the number of pairs of positions [i,j] (i<j) such that if the elements on these positions are deleted, 
// the mathematic mean of (n−2) remaining elements is equal to k (that is, it is equal to the mathematic mean of n elements of the original array a).

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
        int n ;
        cin >> n ;
        int a[n] ;
        int sum = 0 ;
        map<int,ll> m ;
        for(int i = 0 ; i < n ; i++)
        {
        	cin >> a[i] ;
        	sum += a[i] ;
        	m[a[i]*n]++ ;
        }
        int ans = 0 ;
        for(auto i:m)
        {
        	int x = 2*sum - i.first ;
        	if(i.first == x)
        	{
        		ans += (i.second)*(i.second - 1) ;
        	}
        	else
        	{
        		ans += i.second*m[x] ;
        	}
        }
        cout << ans/2 ;
        cout << "\n" ;
    }
    return 0 ;
}    
