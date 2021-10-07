/***	KNOWLEDGE IS POWER	***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
int gcdd(int a , int b)
{
	if(b > a)
	{
		swap(a,b) ;
	}
	while(a%b)
	{
		int x = a%b ;
		a = b ;
		b = x ;
	}
	return b ;
}
void solve( )
{
	int a , b ;
	cin >> a >> b ;
	int h = gcdd(a , b) ;
	cout << a/h + b/h + h ;
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
