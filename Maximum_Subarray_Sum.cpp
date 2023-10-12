#include<bits/stdc++.h>

#include <iostream>

typedef long long ll;
typedef long double ld;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve(vector<ll> A, int n)
{
    ll sum=0;
    ll prevsum=-1;
    ll ans = -1;
    bool flag=0;
    for(ll i=0;i<n;i++){
        flag += (A[i]>0);
    }

    if(!flag){
        int max=-1e9;
        for(ll i=0;i<n;i++){
            max = max>A[i]?max:A[i];
        }
        cout<<max;
    }
    else{
    for(ll i=0;i<n;i++){
        sum+=A[i];
        // prevsum = sum;
        ans = ans>prevsum?ans:prevsum;

        if(sum < 0){
            ans = ans>prevsum?ans:prevsum;
            sum = 0;
        }
        prevsum = sum;

    }
        ans = ans>prevsum?ans:prevsum;

        cout<<ans;
    }

    // ans = ans>sum?ans:sum;
    return;
}
int main()
{
    int n;
    cin >> n;
    vector<ll> A;
    for(ll i=0;i<n;i++){
        ll x; cin >> x;
        A.push_back(x);
    }
    solve(A,n);
    return 0;
}