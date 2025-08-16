#include<bits/stdc++.h>

using namespace std;
#define ll long long

void FIRST_occurrence(vector<ll>& v,ll target){
   ll ans=-1;
   ll l=0,r=v.size()-1;
   while(l<=r){
     ll mid=(l+r)/2;
     if(v[mid]==target){
         ans=mid;
         r=mid-1;
     }
     else if(v[mid]<target){
        l=mid+1;
     }
     else{
        r=mid-1;
     }
   }
   cout<<ans<<endl;
   return;
}

void LAST_occurrence(vector<ll>& v,ll target){
   ll ans=-1;
   ll l=0,r=v.size()-1;
   while(l<=r){
     ll mid=(l+r)/2;
     if(v[mid]==target){
         ans=mid;
         l=mid+1;
     }
     else if(v[mid]>target){
        r=mid-1;
     }
     else{
        l=mid+1;
     }
   }
   cout<<ans<<endl;
   return;
}

int main(){
  vector<ll> v={1,40,39,22,43,23,23,100,12,15,90,57,34};
  ll target=23;

  sort(v.begin(),v.end());
  FIRST_occurrence(v,target);
  LAST_occurrence(v,target);
  return 0;
}
