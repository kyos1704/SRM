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

vector<int> Y;
int CC(int y){
  int res=0;
  bool f = true;
  for(int i=0;i<Y.size()-1;i++){
    int ma = max(Y[i],Y[i+1]);
    int mi = min(Y[i],Y[i+1]);
    if(mi<y&&y<ma){
      cout<<Y[i]<<" "<<Y[i+1]<<" "<<y<<endl;
      res++;
    }else if(Y[i]==y){
      res++;
    }
    if(Y[i]==Y[i+1]&&Y[i]==y){
      f=false;
    }
  }
  if(Y[Y.size()-1]==y){
    res++;
  }
  if(f){
    return res;
  }else{
    return -1;
  }
}

class PiecewiseLinearFunctionDiv2 {
	public:
	vector <int> countSolutions(vector <int> YY, vector <int> query) {
    Y=YY;
    vector<int> ans;
    for(int i=0;i<query.size();i++){
      ans.push_back(CC(query[i]));
    }
    return ans;
	}
};
