#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> solve(vector<int>& num) {
   sort(num.begin(),num.end());
   vector<int> ans;
   for(int i=0;i<num.size();i++){
      int l=i+1;
      int r=num.size()-1;
      while(l<r){
         int sum=num[i]+num[l]+num[r];
         if(sum==0){
            cout<<num[i]<<" "<<num[l]<<" "<<num[r]<<endl;
            l++,r--;
         }
         else if(sum<0) l++;
         else r--;
      }
   }
}

int main(){
   int n;
   cin>>n;

   vector<int> v(n);
   for(int i=0;i<n;i++){
     cin>>v[i];
   }
   solve(v);
}
