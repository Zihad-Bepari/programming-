#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool possible(vector<ll> &v, ll day, ll n, ll m, ll k) {
    ll cnt = 0;
    ll total = 0;

    for (ll i = 0; i < v.size(); i++) {
        if (v[i] <= day) {
            cnt++;
        } else {
            total += (cnt / k);
            cnt = 0;
        }
    }

    total += (cnt / k);
    return total >= m;
}

ll roseGarden(vector<ll> &v, ll r, ll b) {

    ll val = r*b;
    if (val > v.size()) return -1;

    ll mini = 1e9, maxi = 0;
    for (ll i = 0; i < v.size(); i++) {
        mini = min(mini, v[i]);
        maxi = max(maxi, v[i]);
    }

    ll low = mini, high = maxi;
    while (low <= high) {
        ll mid = (low + high) / 2;
        if (possible(v, mid, r, b, r)) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

int main(){
  vector<ll> v={7,7,7,7,13,11,12,7};
  ll m=2,k=3;
  cout<<roseGarden(v,m,k)<<endl;
  return 0;
}
