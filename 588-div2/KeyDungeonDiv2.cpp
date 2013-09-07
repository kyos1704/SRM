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
class KeyDungeonDiv2 {
	public:
	int countDoors(vector <int> DR, vector <int> DG, vector <int> K) {
    int r,g,w;
    r=K[0];
    g=K[1];
    w=K[2];
    int ans=0;
    for(int i=0;i<DR.size();i++){
      int tmp=max(0,DR[i]-r)+max(0,DG[i]-g);
      if(tmp<=w){
        ans++;
      }
      
    }
    return ans;
		
	}
};
