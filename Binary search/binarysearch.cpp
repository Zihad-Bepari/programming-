#include<bits/stdc++.h>

using namespace std;
#define ll long long

void solve(vector<ll>& v,ll target){
   ll l=0,r=v.size()-1;
   while(l<=r){
     ll mid=(l+r)/2;
     if(v[mid]==target){
         cout<<"Found"<<endl;
         return;
     }
     else if(v[mid]>target){
        r=mid-1;
     }
     else{
        l=mid+1;
     }
   }
   cout<<"Not Found"<<endl;
   return;
}

int main(){
  vector<ll> v={1,40,39,22,43,23,100,12,15,90,57,34};
  ll target=23;

  sort(v.begin(),v.end());
  solve(v,target);

  return 0;
}
