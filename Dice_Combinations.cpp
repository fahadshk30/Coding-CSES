#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
 
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
ll DiceComb(int n){
    
    // if(n==1) return 1;
    // else if(n<=6){
        // int ans=0;
        // for(int i=0;i<n;i++){
            
        // }
    // return DiceComb(n-1) + 1;
    vector<ll> comb(n+1,0);
    // comb[0]=1;
    comb[1]=1;
    // comb
    for(int i=1;i<=6;i++){
        // comb[i]=;
        int x = 1;
        for(int j=1;j<=i;j++){
            x+=comb[i-j];
        }
        comb[i] = x;
    }
    int MOD = 1e9+7;

    for(int i=7;i<=n;i++){
        for(int j=1;j<=6;j++){
            comb[i]+=comb[i-j];
        }
        comb[i]%=MOD;
        // comb[i] = x;
    }

    //     // if()


    // }
    return comb[n];
    // }
    // vector<int> ans[n];


 
 
}
int main()
{
    fast_cin();
    int n;
    cin>>n;
    cout<<DiceComb(n);
    return 0;
}