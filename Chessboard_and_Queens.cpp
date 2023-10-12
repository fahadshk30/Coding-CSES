#include<bits/stdc++.h>

#include <iostream>

typedef long long ll;
// typedef long double ld;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

bool ld[15];
bool rd[15];
bool row[8];
char chess[8][8];
int cnt=0;
void solve(int j){
    
    // int row = 0;
    int i;
    for(i=0;i<8;i++){
        
        if(j==8){
            cnt++;
            return;
        }
        
        if(chess[i][j]=='.' and !row[i] and !rd[i+j] and !ld[7-i+j]){
            
            row[i]=1,rd[i+j]=1,ld[7-i+j]=1;
            solve(j+1);
            row[i]=0,rd[i+j]=0,ld[7-i+j]=0;

        }
    
    
    }



}

int main() {
//    vector<string> A;
//    cin >> T;
   for(int i=0;i<8;i++){
   for(int j=0;j<8;j++){
    //    solve();
        // string s;
        cin>>chess[i][j];
   }
   }

   solve(0);
   cout<<cnt;
   return 0;
}
