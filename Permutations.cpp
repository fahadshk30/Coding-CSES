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
        cout<<1;
    }
    else if(n<=3){
        cout<<"NO SOLUTION";
    }

    else{
        int ev = 2,od=1;
        for(int i =2;i<=n;i+=2){
            cout<<i<<" ";
        }
        for(int i =1;i<=n;i+=2){
            cout<<i<<" ";
        }

    }



}

int main() {
   ll n;
   cin >> n;
   solve(n);
   return 0;
}
