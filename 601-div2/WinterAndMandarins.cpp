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
class WinterAndMandarins {
  public:
  int getNumber(vector <int> bags, int K) {
    int res = INT_MAX;	
    sort(bags.begin(),bags.end());
    for(int i=K-1;i<bags.size();i++){
      res = min(res,abs(bags[i]-bags[i-(K-1)]));
    }
    return res;
  }
};

