/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
    	  int n, x=1, y=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0; i<n; i++)
        {
          cin>>a[i];
        }
        sort(a,a+n);

        b[0]=a[0];

        for(int i=1; i<n; i++)
        {
          if(a[i] != a[i-1])
          {
            b[i-y]=a[i];
          }
          else
          {
            b[n-x] = a[i];
            x++;
            y++;				
          }
        }
        for(int i=0; i<n; i++)
        {
          cout<<b[i]<<" ";
        }
        cout<<endl;
        x=1;
        y=0;
    }	
    return 0 ;
}    
				/*Maango16*/
