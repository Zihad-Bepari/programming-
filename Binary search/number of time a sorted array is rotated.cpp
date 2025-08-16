#include<bits/stdc++.h>

using namespace std;
#define ll long long

void solve(vector<ll>& v){
   ll l=0,r=v.size()-1;
   ll ans=0;
   while(l<r){
     ll mid=(l+r)/2;
     if(mid<r && v[mid+1]<v[mid]){
         ans=mid+1;
         break;
     }
     else if(mid>l && v[mid]<v[mid-1]){
        ans=mid;
        break;
     }
     if(v[r]>v[mid]) r=mid-1;
     else{
        l=mid+1;
     }
   }
   cout<<ans<<endl;
   return;
}

int main(){
  vector<ll> v={12,14,16,17,19,20,22,1,2,3,4,5,6,8,9,10};
  //ll target=23;
  //sort(v.begin(),v.end());
  solve(v);

  return 0;
}
