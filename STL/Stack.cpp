
#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
  stack<ll> st;

  ll n;
  cin>>n;

  for(ll i=0;i<n;i++){
     ll x;cin>>x;
     st.push(x);
  }

  while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
  }
  return 0;
}
