#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& v, int target) {
    vector<pair<int,int>> vv;
    for(int i=0;i<v.size();i++){
        vv.push_back({v[i],i});
    }
    sort(vv.begin(),vv.end());

    int i=0,j=v.size()-1;
    while(i<j){
        int sum=vv[i].first+vv[j].first;
        if(sum==target){
            return {vv[i].second,vv[j].second};
        }
        else if(sum>target){
            j--;
        }
        else{
            i++;
        }
    }
    return {};
}

int main(){
    vector<int> num={1,2,3,4,5,6,7,8,9};
    int target = 9;

    vector<int> ans = twoSum(num,target);

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << ",";
    }
    cout<<endl;
}
