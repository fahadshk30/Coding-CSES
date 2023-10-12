#include<bits/stdc++.h>

#include <iostream>

typedef long long ll;
typedef long double ld;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve(vector<ll> A,vector<ll> B,ll k){
    int cnt=0;
    int m = B.size(),n=A.size();

    int i=0,j=0;

    while(i<n and j<m){
        if(abs(A[i]-B[j]) <=k){
            i++,j++;
            cnt++;
        }
        else if(A[i]-B[j]>k){
            j++;
        }
        else{
            i++;
        }
    }

    cout<<cnt;

}

int main() {
   int m,n;
   ll k,x;
   cin>>n>>m>>k;
   vector<ll> A,B;
   for(int i=0;i<n;i++){
    cin>>x;
    A.push_back(x);
   }

   for(int i=0;i<m;i++){
    cin>>x;
    B.push_back(x);
   }
   
   sort(A.begin(),A.end());
   sort(B.begin(),B.end());

   solve(A,B,k);



   return 0;
}
