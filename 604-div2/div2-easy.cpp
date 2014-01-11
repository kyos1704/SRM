#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <sstream>
#include <climits>
using namespace std;
map<string,int> list;
class FoxAndWord {
  public:
  int howManyPairs(vector <string> w) {
    int res=0;
    for(int i=0;i<w.size();i++){
      for(int j=i+1;j<w.size();j++){
        bool n_find = true;
        for(int k=1;k<w[i].size() && n_find;k++){
          int l = w[i].size()-k; 
          string st = w[i].substr(0,k);
          string et = w[i].substr(k);
          if(st+et!=w[i])cout<<"???"<<endl;
          if(et+st == w[j]){
            n_find =false;
            res++;
          }
        }
      }
    }
    return res;
  }
};
