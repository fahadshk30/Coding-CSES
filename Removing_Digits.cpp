#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
 
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
int solve(int n){
    int mx_d=-1;
    int dig=-1;
    int tmp,cnt=0;
    // if(n==0)return 0;

    while(n>0){
        tmp=n;
        mx_d=-1;
        while(tmp>0){
            dig = tmp%10;
            tmp/=10;
            mx_d = max(mx_d,dig);
            // cout<<dig<<" ";
        }
        // cout<<endl;
        n=n-mx_d;
        cnt++;  
    }
    return cnt;
}
int main()
{
    fast_cin();
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}