/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 1000005
using namespace std ;
typedef vector<int> vi;
typedef vector<vector<int>> vvi ; 
bool isvowel(char c)
{
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
	{
		return true ;
	}
	return false ;
}
void solve()
{
	int n ;
	cin >> n ;
	string s , p ;
	cin >> s >> p ;
	if(s == p)
	{
		cout << 0 ;
		return ;
	}
	int ans = inf ;
	for(char i = 'a' ; i <= 'z' ; i++)
	{
		string a = s , b = p ;
		int cnt = 0 ;
		for(int j = 0 ; j < n ; j++)
		{
			if(a[j] == '?')
			{
				a[j] = i ;
			}
			if(b[j] == '?')
			{
				b[j] = i ;
			}
		}
		for(int j = 0 ; j < n ; j++)
		{
			if(a[j] != b[j])
			{
				if(isvowel(a[j]) != isvowel(b[j]))
				{
					cnt++ ;
				}
				else
				{
					cnt += 2 ;
				}
			}
		}
		ans = min(ans , cnt) ;
	}
	cout << ans ;
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
