#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
  queue<ll> qu;

  ll n;
  cin>>n;

  for(ll i=0;i<n;i++){
     ll x;
     cin>>x;
     qu.push(x);
  }
  //queue<ll> qu1=qu;

  cout<<"queue : ";
  while(!qu.empty()){
     cout<<qu.front()<<" ";
     qu.pop();
  }
  cout<<endl;
  if(qu.empty()){
     cout<<"Yes queue is empty"<<endl;
  }
  else{
     cout<<"no queue is not empty"<<endl;
  }

  queue<pair<ll,ll>> qu1;
  ll n1;
  cin>>n1;

  for(ll i=0;i<n1;i++){
     ll x;
     cin>>x;
     qu1.push(make_pair(i,x));
  }
  while(!qu1.empty()){
     cout<<qu1.front().first<<" "<<qu1.front().second<<endl;
     qu1.pop();
  }


  return 0;
}
