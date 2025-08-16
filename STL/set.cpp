#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
  set<ll> st;

  ll n;
  cin>>n;
  for(ll i=0;i<n;i++){
    ll x;cin>>x;
    st.insert(x);
  }
  cout<<"lower bound : "<<*lower_bound(st.begin(),st.end(),7)<<endl;
  cout<<"upper bound : "<<*upper_bound(st.begin(),st.end(),7)<<endl;


  return 0;
}

