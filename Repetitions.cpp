



#include<bits/stdc++.h>

#include <iostream>


typedef long long ll;
typedef long double ld;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve(string A)
{
    int n = A.size();
    int mx = 1,sz=1;

    if(n==1){
        cout<<1;
        return;
    }

    for(int i=1;i<n;i++){
        if(A[i]==A[i-1]){
            sz++;
        }

        else{
            mx = mx>sz?mx:sz;
            sz=1;
        }
    }
    mx = mx>sz?mx:sz;
    cout<<mx;

    return;


}
int main()
{
    // ll n;
    // cin >> n;
    string A;
    // for(ll i=0;i<n;i++){
        // ll x; cin >> x;
        // A.push_back(x);
    cin>>A;
    // }
    // cout<<A;
    solve(A);
    return 0;
}