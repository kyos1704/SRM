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
class LISNumberDivTwo {
	public:
	int calculate(vector <int> seq) {
    int ans=1;
    for(int i=0;i<seq.size()-1;i++){
      if(!(seq[i]<seq[i+1])){
        ans++;
      }
    }
    return ans;
	} 
};
