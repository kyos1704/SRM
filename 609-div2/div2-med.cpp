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
class PackingBallsDiv2 {
  public:
  int minPacks(int R, int G, int B) {
    int res = int ();
    res += R/3;
    res += G/3;
    res += B/3;
    R = R%3;
    G = G%3;
    B = B%3;
    vector<int> list;
    list.push_back(R);
    list.push_back(G);
    list.push_back(B);
    sort(list.begin(),list.end());
    for(int i=0;i<list.size()-1;i++){
      while(list[i]!=0){
        res++;
        for(int j=i;j<list.size();j++){
          list[j]--;
        }
      }
    }
    if(list[2]>0)res++;
    return res;
  }
};
