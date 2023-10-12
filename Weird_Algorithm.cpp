#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<vector<ll> > vvl;
ll MOD = 998244353;
double eps = 1e-12;
#define fo(i,n) for(int i=0;i<int(n);i++)
#define Fo(i,k,n) for(int i = int(k); k<n ? i< int(n):i>int(n);k<n?i+=1:i-=1)
#define fi(A) for(auto x:A)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve(ll n){
    if(n%2==0){
        n /= 2;
        cout<<n<<" ";
        solve(n);
    }
    else if(n==1){
        // cout<<n<<" ";
        // break;
        return;
    }
    else if(n%2 and n!=1){
        n *=3;
        // n++;
        cout<<++n<<" ";
        solve(n);
    }

}

int main()
{
    fast_cin();
    ll t,n;
    // cin >> t;
    t=1;
    for(ll it=1;it<=t;it++) {
        cin >> n;
        cout<<n<<" ";
        solve(n);
    }
    return 0;
}