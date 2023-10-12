#include<bits/stdc++.h>

#include <iostream>

typedef long long ll;
typedef long double ld;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve(vector< pair<ll,ll> > time,int n){

    sort(time.begin(),time.end());
    int curr=0,ans=1;
    for(int i=0;i<2*n;i++){
        curr += time[i].second;
        if(curr>0){
            ans = ans>curr?ans:curr;
        }
    }
    ans = ans>curr?ans:curr;

    cout<<ans;  
}

int main() {
//    int T = 1;
    int n;
   cin >> n;
   ll a,b;
   vector< pair<ll,ll> > time;
   for(ll i=0;i<n;i++){
        ll a,b;

        cin>>a>>b;
        // pair<ll,ll> time = ;
        time.push_back(make_pair(a,1));
        time.push_back(make_pair(b,-1));
   }
   
   solve(time,n);
   
   
   return 0;
}
