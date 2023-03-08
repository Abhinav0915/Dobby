#include <bits/stdc++.h>
using namespace std;
void solve() 
{ 
  int n; 
  cin>>n; 
   
  if(n%2){ 
    cout<<-1<<endl; 
  } 
  else{ 
    for(int i=1;i<=n;i+=2){ 
        cout<<i+1<<" "<<i<<" "; 
    } 
    cout<<endl; 
  } 
   

} 
int32_t main(){ 
     
    int t; 
    t=1; 
    cin>>t; 
    while(t--){ 
        solve();  
    } 
    return 0; 
}