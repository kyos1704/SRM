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
class SwappingDigits {
	public:
	string minNumber(string num) {
    string res=num;
    for(int i=0;i<num.size();i++){
      for(int j=i;j<num.size();j++){
        string tmp=num;
        swap(tmp[i],tmp[j]);
        if(tmp<res && tmp[0]!='0'){
          res=tmp;
        }
      }
    }
    return res;
	}
};
