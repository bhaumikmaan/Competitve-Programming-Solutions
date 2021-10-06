/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://www.codechef.com/LTIME99B/problems/CROSBLK
// Solution Link: https://www.codechef.com/viewsolution/50286197

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
bool sorting(pair<int,int>a , pair<int,int>b)
{
    if(a.first > b.first)
    {
        return true ;
    }
    else if(a.first == b.first)
    {
        if(a.second > b.second)
        {
            return true ;
        }
    }
    return false ;
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
        int a[n] ;
        // map<int,int> m ;
        vector<pair<int,int>> v(n) ;
        for(int i = 0 ; i < n ; i++)
        {
        	cin >> a[i] ;
        	// cout << a[i] << " " ;
        }
        // cout << "\n" ;
        for(int i = 1 ; i < n ; i++)
        {
        	// cout << a[i] << " " << i << " " ;
        	v[i] = {a[i] , i} ;
        }
        // cout << "\n" ;
        sort(all(v) , sorting) ;
        // for(int i = 1 ; i < n ; i++)
        // {
        	// cout << a[i] << " " << i << " " ;
        // }
        int cnt = 0  , check = a[0] , x = 0 ;
        bool flag = false ;
        for(int i = 0 ; i < n ; i++)
        {
        	if(x < v[i].second)
        	{
        		if(v[i].first <= check)
        		{
		    		check = v[i].first ;
		    		x = v[i].second ;
		    		cnt++ ;
        		}
        		else
        		{
        			flag = true ;
        			break ;
        		}
        	}
        }
        if(flag)
        {
        	cout << cnt - 1 ;
        }
        else
        {
        	cout << cnt ;
        }
        cout << "\n" ;
    }
    return 0 ;
}    
