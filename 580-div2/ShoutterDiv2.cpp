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
class ShoutterDiv2 {
	public:
	int count(vector <int> s, vector <int> t) {
    int ans=0;
    for(int i=0;i<s.size();i++){
      for(int j=i+1;j<s.size();j++){
        if(!( s[i]>t[j] || s[j]>t[i])){
          ans++;
        }
      }
    }
    return ans;
	}
};
