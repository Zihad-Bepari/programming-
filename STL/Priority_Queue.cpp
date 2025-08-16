
#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
  priority_queue<int> pq;
  ll n;
  cin>>n;

  for(ll i=0;i<n;i++){
     ll x;
     cin>>x;
     pq.push(x);
  }
  while(!pq.empty()){
    cout<<pq.top()<<endl;
    pq.pop();
  }

  priority_queue<int,vector<int>,greater<int> > pq1;
  ll n1;
  cin>>n1;

  for(ll i=0;i<n1;i++){
     ll x;
     cin>>x;
     pq1.push(x);
  }
  while(!pq1.empty()){
    cout<<pq1.top()<<endl;
    pq1.pop();
  }
  return 0;
}
