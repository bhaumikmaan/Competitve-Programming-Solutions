/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 155555
using namespace std ;
typedef vector<int> vi;
typedef vector<vector<int>> vvi ;
#define haan cout << "YES" 
void solve()
{
	string s ;
	cin >> s ;
	bool flag = false ;
	for(int i = 0 ; i < s.length() - 1 ; i++)
	{
		if(s[i] - '0' + s[i + 1] - '0' > 9)
		{
			flag = true ;
			break ;
		}
	}
	if(flag)
	{
		for(int i = s.length() - 2 ; i >= 0 ; i--)
		{
			if(s[i] - '0' + s[i+1] -'0' > 9)
			{
				s[i + 1] = (s[i]-'0' + s[i+1] - '0')%10 + '0' ;
				s[i] = '1' ;
				break ;
			}
		}
		cout << s ;
	}
	else
	{
		cout << s[0] - '0' + s[1] - '0' ;
		for(int i = 2 ; i < s.length() ; i++)
		{
			cout << s[i] ;
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
