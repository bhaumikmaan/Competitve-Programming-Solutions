/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200008
using namespace std ;
typedef vector<int> vi;
typedef vector<vector<int>> vvi ;
void solve()
{
	int n ;
	cin >> n ;
	set<pair<int,int>> s ;
	for(int i = 0 ; i < n ; i++)
	{
		int l , r ;
		cin >> l >> r ;
		s.insert({l , r}) ;
	}
	for(auto i:s)
	{
		if(i.first == i.second)
		{
			cout << i.first << " " << i.second << " " << i.second << "\n" ;
		}
		else
		{
			for(int j = i.first ; j <= i.second ; j++)
			{
				bool flag = true ;
				if(j != i.first && !s.count(pair<int,int>(i.first , j - 1)))
				{
					flag = false ;
				}
				if(j != i.second && !s.count(pair<int,int>(j + 1 , i.second)))
				{
					flag = false ;
				}
				if(flag)
				{
					cout << i.first << " " << i.second << " " << j << "\n" ;
					break ;
				}
			}
		}
	}
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
	while( testcases -- )
    {
    	solve( ) ;
        cout << "\n" ;
    }	
    return 0 ;
}    	
