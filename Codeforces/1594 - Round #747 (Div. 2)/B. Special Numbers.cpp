/***  KNOWLEDGE IS POWER  ***/  

// PROBLEM STATEMENT //
// Theofanis really likes sequences of positive integers, thus his teacher (Yeltsa Kcir) gave him a problem about a sequence that consists of only special numbers.

// Let's call a positive number special if it can be written as a sum of different non-negative powers of n. For example, for n=4 number 17 is special, because it can be written as 40+42=1+16=17, but 9 is not.

// Theofanis asks you to help him find the k-th special number if they are sorted in increasing order. Since this number may be too large, output it modulo 109+7.

// SOLUTION LINK //
// https://codeforces.com/contest/1594/submission/131214822

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100005
using namespace std ;
int modExp(int b , int p)
{
    if(p == 0)
    {
    	return 1 ;
    }
    if(p == 1)
    {
    	return b%mod;
    }
    int x= modExp(b , p/2) ;
    int ans= ((x%mod)*(x%mod))%mod;
    if(p%2)
    {
        ans=((ans%mod)*(b%mod))%mod;
    }
    return ans%mod;
}
void solve( )
{
    int n , k ;
    cin >> k >> n ;
    int sum = 0 , i = 0;
    while(n >0)
    {
        if(n%2)
        {
        	n-- ;
        	sum += modExp(k , i)%mod ;
        }
        n /= 2 ;
        i++ ;
    }
    cout << sum%mod ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
        solve() ;
        cout << "\n" ;
    }
    return 0 ;
}    
