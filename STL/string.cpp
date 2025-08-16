#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main(){

  string s;
  getline(cin,s);

  s.push_back('s');
  s.pop_back();

  if(s.find("zihad")!=string:: npos){
    cout<<"YES find"<<endl;
  }

  s.append("zihad");

  string ss=s.substr(0,4);

  int a=stoi(s);
  ll b=stoll(s);

  string s2=to_string(39269562);
  return 0;
}
