#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
      map<ll,ll> mp;

      ll n;
      cin>>n;

      for(ll i=0;i<n;i++){
         ll x;
         cin>>x;
         mp[x]++;
      }
     // for(auto it: mp) cout<<it.first<<" "<<it.second<<endl;
      cout<<"Lower_bound : ";
      auto it = mp.lower_bound(8);
      if (it != mp.end()) {
          cout << it->first << " => " << it->second << endl;
      }
      else{
         cout << "No element found >= 8" << endl;
      }
      cout<<"Upper_bound : ";
      auto it1 = mp.upper_bound(8);
      if (it1 != mp.end()) {
          cout << it1->first << " => " << it1->second << endl;
      }
      else{
         cout << "No element found >= 8" << endl;
      }

  return 0;
}
