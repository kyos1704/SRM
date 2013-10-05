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
class RaiseThisBarn {
	public:
	int calc(string str) {
    int c=0;
    for(int i=0;i<str.size();i++){
      if(str[i]=='c'){
        c++;
      }
    }
    if(c%2==1)return 0;
    int res=0;
    cout<<str.size()<<endl;
    for(int i=1;i<str.size();i++){
      int tmp=0;
      for(int j=0;j<i;j++){
        if(str[j]=='c'){
          tmp++;
        }
      }
      if(tmp==c/2){
        res++;
      }
    }
    return res;
	}
};
