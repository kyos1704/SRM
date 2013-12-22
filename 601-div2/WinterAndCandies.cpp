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
vector<int> t;
int list[50]={0};
class WinterAndCandies {
  public:
  int getNumber(vector <int> type) {
    int res = int ();
    t=type;
    for(int i=0;i<t.size();i++){
      list[t[i]]++;
    }
    int c=1;
    for(int i=1;i<=type.size();i++){
      c *= list[i];
      res += c;
    }
    return res;
  }
};
