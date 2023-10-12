#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
 
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
int solve(vector<int> coin,int n,int v){
//     vector<ll> ways(v+1,0);
    vector< vector<int> > dp(n+1,vector<int>(v+1,0));
    dp[0][0] = 1;
    int MOD = 1e9+7;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=v;j++){
            dp[i][j] += dp[i-1][j];

            if(j-coin[i-1]>=0){
                dp[i][j]+= dp[i][j-coin[i-1]];
            }
             dp[i][j]%=MOD;
        }
    }
    return dp[n][v];
    // if(v==0)return 1;
    // if(v<0) return 0;
    // if(n<=0)return 0;

    // return solve(coin,n,v-coin[n-1])+solve(coin,n-1,v);
    
//     // int min_coin = INT_MAX;
//     for(int j=0;j<n;j++){
//         if(coin[j]<=v){
//             ways[coin[j]]=1;
//         }
//     }   
//     // ways[0]=0;
//     // ways[min_coin] = 1;
//     int MOD = 1e9+7;
//     for(int i=1;i<=v;i++){
//         // ways[i]=0;
//         for(int j=0;j<n;j++){
//             if(i>=coin[j]){
//                 ways[i] += (ways[i-coin[n-1]]+ways[i]);
//             }
//         }
//         ways[i] %= MOD;
//     }
// // for(int j=0;j<v+1;j++)cout<<ways[j]<<" ";
//     return ways[v];
 
 
}
int main()
{
    fast_cin();
    int n,v;
    cin>>n>>v;
    vector<int> coin(n);
    for(int i=0;i<n;i++)cin>>coin[i];
    cout<<solve(coin,n,v);

    return 0;
}