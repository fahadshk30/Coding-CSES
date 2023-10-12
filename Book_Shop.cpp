#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
const int MOD = 1e9+7;
typedef long long ll;
typedef long double ld;
 
 
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
int solve(int n,int mon){
    vector<int> pages(n,0);
    vector<int> prices(n,0);
    for(int i=0;i<n;i++)cin>>prices[i];
    for(int i=0;i<n;i++)cin>>pages[i];

    vector< vector<int> > dp (n+1,vector<int> (mon+1,0));

    for(int i=1;i<=n;i++){
        for(int j=0;j<=mon;j++){

            dp[i][j] = dp[i-1][j];
            if(j >= prices[i-1]){
                dp[i][j] = max(dp[i][j],dp[i-1][j-prices[i-1]]+pages[i-1]);

                // dp[i][j] += dp[i-1][]
            }
        }
    }

    
    return dp[n][mon];

 
}
int main()
{
    fast_cin();
    int n,mon;
    cin>>n>>mon;
    cout<<solve(n,mon);
    return 0;
}