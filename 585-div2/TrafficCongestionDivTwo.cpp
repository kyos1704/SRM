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
class TrafficCongestionDivTwo {
	public:
	long long theMinCars(int tH) {
    long long ans = 1;
    long long under = 0;

    for(int i=1;i<tH;i++){
      if(i%2==1){
        ans = ans * 2 + 1;
      }else{
        ans = under * 2 + 1; 
      }
      under = ans - 1;
    }

    return ans;
	}
};
