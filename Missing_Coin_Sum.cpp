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
    sort(A.begin(),A.end());

    if(A[0]!=1){
        cout<<1;
        return;
    }
    else{
        ll min_sm=2;
        bool flag=1;
        bool flag2=1;
        while(flag){
            ll sum=0;
            for(ll i=0;i<n;i++){
                sum+=A[i];
                if(sum==min_sm){
                    min_sm++;
                    flag2 = 1;
                    break;
                }
            }
            if(flag2){
                
            }
            cout<<min_sm;
            break;

        }

    }

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