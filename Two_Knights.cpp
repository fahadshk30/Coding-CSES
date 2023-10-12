#include<bits/stdc++.h>

#include <iostream>

typedef long long ll;
typedef long double ld;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve(ll n){
    if(n==1){
        cout<<0;
        return;
    }
    cout<< (((n*n)*((n*n)-1)/2) - 4*(n-1)*(n-2));

}

int main() {
   ll n;
   cin>>n;
//    solve(n);
    for(ll i=1;i<n+1;i++){
        solve(i);
        cout<<"\n";
    }
   return 0;
}
