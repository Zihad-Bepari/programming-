
#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  vector<ll> v={12,14,16,17,19,20,22,1,2,3,4,5,6,8,9,10};
  sort(v.begin(),v.end());

  cout<<*lower_bound(v.begin(),v.end(),16)<<endl;
  cout<<*upper_bound(v.begin(),v.end(),18)<<endl;;

  return 0;
}
