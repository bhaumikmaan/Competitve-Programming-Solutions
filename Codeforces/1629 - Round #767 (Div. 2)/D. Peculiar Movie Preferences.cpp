/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200100
using namespace std ;
typedef vector<int> vi ; 
typedef vector<string> vs ;
typedef vector<vector<int>> vvi ;
#define haan cout << "YES" 
void solve()
{
	int n ;
	cin >> n ;
	map<string , int> m ;
	bool flag = false ;
	for(int lop = 0 ; lop < n ; lop++)
	{
		string s ;
		cin >> s ;
		string r = s ;
		reverse(all(r)) ;
		if(s == r)
		{
			flag = true ;
		}
		if(m[r])
		{
			flag = true ;
		}
		if(s.length() == 1)
		{
			flag = true ;
		}
		if(s.length() == 2)
		{
			string t = s ;
			reverse(all(t)) ;
			for(int i = 0 ; i < 26 ; i++)
			{
				string temp = t ;
				temp += char(i + 'a') ;
				if(m[temp])
				{
					flag = true ;
					break ;
				}
			}
		}
		if(s.length() == 3)
		{
			string temp = "" ;
			temp += s[1] ;
			temp += s[2] ;
			reverse(all(temp)) ;
			if(m[temp])
			{
				flag = true ;
			}
		}
		m[s]++ ;
	}
	if(flag)
	{
		haan ;
	}
	else
	{
		cout << "NO" ;
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
