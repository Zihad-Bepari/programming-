#include <bits/stdc++.h>
using namespace std;
#define ll long long

int lengthOfLongestSubstring(string s) {
    ll ans=0;
    int i=0,j=0;
    map<char,int>mp;
    while(j<s.size())
    {
        mp[s[j]]++;
        if(mp.size()==(j-i+1))
        {
            ll z=j-i+1;
            ans=max(ans,z);
            j++;
        }
        else{
            while(mp.size()<(j-i+1))
            {
                mp[s[i]]--;
                if(mp[s[i]]==0)mp.erase(s[i]);
                i++;
            }
            j++;
        }
    }
    return ans;
}

int main() {
    string s;
    cin >> s;
    cout << lengthOfLongestSubstring(s) << endl;
    return 0;
}

