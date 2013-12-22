#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count(vector<int> c){
  int res=0;
  int pre = c[0];
  res++;
  for(int i=1;i<c.size();i++){
    if(pre+1!=c[i]){
      res++;
      pre=c[i];
    }else{
    }
  }
  return res;
}

class SRMCards{
public:
  int maxTurns(vector<int> c){
    int res=0;
    sort(c.begin(),c.end());
    for(int i=0;i<c.size();i++){
      cout<<c[i]<<" ";
    }cout<<endl;
    res=count(c);
    return res;
  }
};
