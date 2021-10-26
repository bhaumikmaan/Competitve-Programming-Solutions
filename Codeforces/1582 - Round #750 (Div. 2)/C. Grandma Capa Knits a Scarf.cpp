/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
int chk(string s, char ch , int n){
    int l = 0, r = n - 1, cnt = 0 ;
    while(l < r)
    {
        if(s[l] != s[r])
        {
        	cnt++ ;
            bool flag = false ;
            if(s[l] == ch)
            {
                l++;
                flag = true ;
            }
            else if(s[r] == ch)
            {
                r--;
                flag = true;
            }
            if(!flag)
            {
                return -1 ;
            }
        }
        else
        {
            l++ ;
            r-- ;
        }
    }
    return cnt ;
}
void solve( )
{
	int n ;
	cin >> n ;
	string s ;
	cin >> s ;
	int l = 0 , r = n - 1 ;
	while(l < r)
	{
        if(s[l] != s[r])
        {
            break ;
        }
        l++ ;
        r-- ;
    }
    if(l >= r)
    {
    	cout << 0 ;
    	return ;
    }
    int ans = inf ;
    int x = chk(s, s[l] , n) , y = chk(s, s[r] , n) ; 
    if(x != -1)
    {
        ans = x ;
    }
    if(y != -1)
    {
        ans = min(ans , y) ;
    }
    if(x == -1 && y == -1)
    {
    	cout << -1 ;
    }
    else
    {
        cout << ans ;
    }
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
