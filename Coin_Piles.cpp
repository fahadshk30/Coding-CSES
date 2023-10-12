#include<bits/stdc++.h>

#include <iostream>

typedef long long ll;
typedef long double ld;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

// void solve(){
    
// }

int main() {
   int T = 1;
   cin >> T;
   ll a,b;
   for(int i=0;i<T;i++){
        cin>>a;
        cin>>b;
        if(a>b){
            swap(a,b);
        }
        int diff = b-a;
        if(diff > a){
            cout<<"NO";
        }
        else if((a+b)==0){
            cout<<"YES";
        }
        else if((a+b)%3==0){

            if(a==0 or b==0){
                cout<<"NO";
                // break;
            }
            else{
                cout<<"YES";
            }
        }
        else{
            cout<<"NO";
        }
        cout<<"\n";

   }
   return 0;
}
