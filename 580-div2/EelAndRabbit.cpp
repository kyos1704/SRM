#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <sstream>
using namespace std;
class EelAndRabbit {
  private:
    vector<int> l,t;
	public:
  int count(int n,int c){
    int res=0;
    for(int i=0;i<t.size();i++){
      if((!(n<t[i] || l[i]<n))&& (c<t[i] || l[i]<c))res++;
    }
    return res;
  }
	int getmax(vector <int> laaa, vector <int> taaa) {
    l=laaa;
    t=taaa;
    vector<int> sep;
    for(int i=0;i<t.size();i++){
      l[i]+=t[i];
      sep.push_back(t[i]);
      sep.push_back(l[i]);
    }

    int res=0;
    for(int i=0;i<sep.size();i++){
      for(int j=i+1;j<sep.size();j++){
        int tmp=0;
        tmp+=count(sep[i],-100);
        tmp+=count(sep[j],sep[i]);
        cout<<sep[i]<<" "<<sep[j]<<" "<<tmp<<endl;
        res=max(res,tmp);
      }
    }
    return res;
	}
};
