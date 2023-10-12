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
    ll sum=0;
    // for(ll i=0;i<n;i++){
    //     sum+=A[i];
    // }
    ll med = A[(ll)(n/2)];
    // ll num = sum/n;
    // cout<<num<<" ";
    ll cost=0;
    for(ll i=0;i<n;i++){
        cost += (ll)abs(med- A[i]);
    }

    cout<<cost;
    return;
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
    sort(A.begin(),A.end());
    solve(A,n);
    return 0;
}