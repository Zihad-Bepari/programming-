#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
  vector<ll> v = {5,33,2,2,3,11,98,76,340,242,12,23,45,656,9874};

  vector<ll> v1=v; // Copy all elements from v to v1

  cout<<"reverse vector : ";
  reverse(v1.begin(),v1.end());
  for(auto it:v1){
    cout<<it<<" ";
  }
  cout<<endl<<endl;

  cout<<"reverse sorted vector : ";
  sort(v1.rbegin(),v1.rend());
  for(auto it:v1){
    cout<<it<<" ";
  }
  cout<<endl<<endl;

  cout<<"sorted vector : ";
  sort(v1.begin(),v1.end());
  for(auto it:v1){
    cout<<it<<" ";
  }
  cout<<endl<<endl;

  cout<<"max_element : "<<*max_element(v1.begin(),v1.end())<<endl;
  cout<<"min_element : "<<*min_element(v1.begin(),v1.end())<<endl;

  cout<<endl;
  cout<<"one value remove from vector : ";
  v1.erase(v1.begin()+2); // erase 3rd index value
  for(auto it:v1){
    cout<<it<<" ";
  }
  cout<<endl<<endl;
  cout<<"more then one value remove from vector : ";
  v1.erase(v1.begin()+2,v1.begin()+5); // erase 3rd index to 6th index all value
  for(auto it:v1){
    cout<<it<<" ";
  }
  cout<<endl<<endl;

  if(find(v1.begin(),v1.end(),656)!=v1.end()){
     cout<<"656 if found"<<endl;
  }
  else{
     cout<<"656 if not found"<<endl;
  }

  cout<<"count 2 in vector : "<<count(v1.begin(),v1.end(),2)<<endl;

  v1.erase(remove(v1.begin(), v1.end(), 2), v1.end());
  cout<<"remove all 2 in vaector : ";
   for(auto it:v1){
    cout<<it<<" ";
  }
  cout<<endl;
  return 0;
}

