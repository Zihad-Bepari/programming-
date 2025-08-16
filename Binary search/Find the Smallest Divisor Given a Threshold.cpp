#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll sumByD(vector<ll>& arr, ll div) {
    ll sum = 0;
    ll n = arr.size();
    for (ll i = 0; i < n; i++) {
        sum = sum + ceil((double)(arr[i]) / (double)(div));
    }
    return sum;
}

ll smallestDivisor(vector<ll>& arr, ll limit) {
    ll low = 1, high = *max_element(arr.begin(), arr.end());

    while (low <= high) {
        ll mid = (low + high) / 2;
        if (sumByD(arr, mid) <= limit) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return low;
}

int main(){
  vector<ll> v = {1,2,5,9};
  ll threshold=6;
  cout<<smallestDivisor(v,threshold)<<endl;;
  return 0;
}
