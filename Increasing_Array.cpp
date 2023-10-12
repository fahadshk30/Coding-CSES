#include<bits/stdc++.h>

#include <iostream>

typedef long long ll;
typedef long double ld;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve(vector<ll> A, ll n)
{
    ll cnt=0;
    for(ll i=1;i<n;i++){
        if(A[i] < A[i-1]){
            cnt += (A[i-1] - A[i]);
            A[i] = A[i-1];
        }
    }
    cout<<cnt;
}
int main()
{
    ll n;
    cin >> n;
    vector<ll> A;
    for(ll i=0;i<n;i++){
        ll x; cin >> x;
        A.push_back(x);
    }
    solve(A,n);
    return 0;
}