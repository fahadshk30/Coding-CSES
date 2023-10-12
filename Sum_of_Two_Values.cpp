#include<bits/stdc++.h>

#include <iostream>

typedef long long ll;
typedef long double ld;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve(vector< pair<ll,ll> > arr, ll x,ll n){
    ll l =0,r=n-1;
    while(l<r){
        if(arr[l].first + arr[r].first == x){
            cout<<arr[l].second+1<<" "<<arr[r].second+1;
            return;
        }
        else if(arr[l].first + arr[r].first > x){
            r--;
        }
        else{
            l++;
        }
    }
    cout<<"IMPOSSIBLE";
    return;

    // IMPOSSIBLE

}

int main() {
//    int T = 1;
    ll n,x;
    cin>>n>>x;
    // cout<<x;
    ll t;
    //    cin >> T;
    vector< pair<ll,ll> > arr;
    for(int i=0;i<n;i++){
        cin>>t;
        arr.push_back(make_pair(t,i));
    }
    sort(arr.begin(),arr.end());
    solve(arr,x,n);


   return 0;
}
