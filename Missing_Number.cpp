#include<bits/stdc++.h>

#include <iostream>

typedef long long ll;
typedef long double ld;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve(vector<int> A, int n)
{

    for(int j=0;j<n;j++){
        if(A[j]==0){
            cout<<j+1;
            break;
        }
    }
    return;
}

int main()
{

    int n;
    cin >> n;
    vector<int> A(n, 0); 

    for(int i=0;i<n-1;i++){
        int x; 
        cin >> x;
        // A.push_back(x);
        A[x-1]=1;
    }
    solve(A,n);
    return 0;
}

