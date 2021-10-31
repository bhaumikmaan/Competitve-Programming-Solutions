/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int arr[4];
    int cnt = 0;
    for(int i=0; i<4; i++)
    {
    	cin >> arr[i];
    }
    string s;
    cin >> s;
    int l = s.length();
    
    for( int i=0; i< l; i++)
    {
    	int x = s[i] - '0';
    	cnt += arr[x-1];
    }    
    cout << cnt << endl; 
    return 0;
}   
