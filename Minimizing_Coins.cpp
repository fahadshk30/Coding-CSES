#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
 
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
int solve(vector<int> coin,int n,int x){

    vector<int> min_coins(x+1,INT_MAX);
    // ll min_curr_coin,a;
    min_coins[0]=0;
    // int least_coin = INT_MAX;
    // for(int i =0;i<n;i++)least_coin=min(least_coin,coin[i]);

    // min_coins[coin[0]-1] = 1;
    for(int i=1;i<=x;i++){
    //    min_
        // cout<<i<<" "; 
        for(int k=0;k<coin.size();k++){
            // int a=coin[k];
            if(coin[k]<=i){
            // cout<<min_curr_coin<<" "<<coin[i-a]+1<<" "<<a<<" ";
                int sub_res = min_coins[i-coin[k]];
                if(sub_res!=INT_MAX and sub_res+1<min_coins[i]){
                    min_coins[i] = sub_res+1;
                }
            }

        }


    }


    return min_coins[x]==INT_MAX?-1:min_coins[x];

    
 


 
}
int main()
{
    fast_cin();
    int n,x;
     //t=1;
    cin >> n >> x;
    // while(t--){
    // cin >> n;
    vector<int> coin(n);
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }
    sort(coin.begin(),coin.end());
    cout<<solve(coin,n,x);
    // }
    return 0;
}