#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
const int MOD = 1e9+7;
 
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
int solve(int n){
    vector<vector<char> > grid(n,vector<char> (n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    // if(n==1)
    vector<vector<int> > dp(n,vector<int> (n,0));

    if(grid[0][0]=='*') return 0;
    dp[0][0]=1;

    // if(grid[0][1]!='*') dp[0][1]=1;
    // if(grid[1][0]!='*') dp[1][0]=1;
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]=='.'){
                if(j-1>=0 and grid[i][j-1]=='.'  ){
                    dp[i][j]+=dp[i][j-1];
                }
                if(i-1>=0 and grid[i-1][j]=='.'  ){
                    dp[i][j]+=dp[i-1][j];
                }
            }
            dp[i][j]%=MOD;
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    return dp[n-1][n-1];

 
 
}
int main()
{
    fast_cin();
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}