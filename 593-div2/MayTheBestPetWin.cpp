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

vector<int> a,b;
int ans(){
  vector<int> dp;
  dp.push_back(0);
  for(int i=0;i<a.size();i++){
    vector<int> tmp;
    for(int j=0;j<dp.size();j++){
      tmp.push_back(dp[j]+a[i]);
      tmp.push_back(dp[j]-b[i]);
    }
    dp=tmp;
  }
  int res=INT_MAX;
  for(int i=0;i<dp.size();i++){
    res=min(res,abs(dp[i]));
  }
  return res;
}

class MayTheBestPetWin {
	public:
	int calc(vector <int> A, vector <int> B) {
	  a=A,b=B;
    return ans();
  }
};
