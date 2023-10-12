#include<bits/stdc++.h>

#include <iostream>

typedef long long ll;
typedef long double ld;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

const int maxn = 2e5 + 10;

bool have_gondola_yet[maxn];
void solve(vector<ll> A, ll n,ll k)
{
    ll sum=0;
    ll cnt=0;
    // for(int i=0;i<n;i++)cout<<A[i]<<" ";
    // cout<<"\n";
    ll i=0;
    ll j=n-1;
    while(i<j){
        if(A[i]+A[j]>k){
            j--;
        }
        else{
			have_gondola_yet[i] = have_gondola_yet[j] = true;
            cnt++;
            i++;
            j--;
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        /* code */
        if(!have_gondola_yet[i]){
            cnt++;
        }
        // cnt+= have_gondola_yet[i];
    }
    
    // cnt++;
    cout<<cnt;

}
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> A;
    for(ll i=0;i<n;i++){
        ll x; cin >> x;
        A.push_back(x);
    }
    sort(A.begin(),A.end());
    solve(A,n,k);
    return 0;
}