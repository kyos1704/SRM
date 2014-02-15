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
class MagicalStringDiv2 {
  public:
  int minimalMoves(string s) {
    int res = int ();
    string a,b;
    a = s.substr(s.size()/2);
    b = s.substr(0,s.size()/2);
    for(int i=0;i<a.size();i++){
      if(a[i]!='<')res++;
    }
    for(int i=0;i<b.size();i++){
      if(b[i]!='>')res++;
    }

    return res;
  }
};
