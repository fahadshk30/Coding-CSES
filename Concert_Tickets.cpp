#include<bits/stdc++.h>
#include<set>
#include<algorithm>
#include <iostream>

typedef long long ll;
typedef long double ld;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

int main()
{
    ll n,m;
    cin >> n>>m;
    // m=1;
    multiset<int> tick;
    ll h;
    for (int i=0;i<n;i++){
        cin>>h;
        tick.insert(h);
    }

    for(int i =0;i<m;i++){
        cin>>h;
        multiset<int>:: iterator it = tick.upper_bound(h);
        if(it==tick.begin()){
            cout<<-1;
        }
        else{
            cout<<*(--it);
            tick.erase(it);
        }
        cout<<"\n";
    }
    // solve(A,n);
    return 0;
}