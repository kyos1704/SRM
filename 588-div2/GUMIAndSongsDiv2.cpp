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

vector<int> dp;
vector<vector<int>> tail;

class GUMIAndSongsDiv2 {
	public:
	int maxSongs(vector <int> duration, vector <int> tone, int T) {
    dp.resize(T+100);
    tail.resize(T+100);

    for(int i=0;i<duration.size();i++){
      for(int j=T-duration[i];j>=0;j--){
        if(tail[j].empty()){
          if(dp[j+duration[i]]<=1){
            dp[j+duration[i]]=1;
            tail[j+duration[i]].push_back(tone[i]);
          }
        }else{
          for(int k=0;k<tail[j].size();k++){
            if(j+duration[i]+abs(tail[j][k]-tone[i])>T+50)continue;
            if(dp[j+duration[i]+abs(tail[j][k]-tone[i])]<dp[j]+1){
              dp[j+duration[i]+abs(tail[j][k]-tone[i])]=dp[j]+1;
              tail[j+duration[i]+abs(tail[j][k]-tone[i])].clear();
              tail[j+duration[i]+abs(tail[j][k]-tone[i])].push_back(tone[i]);
            }else if(dp[j+duration[i]+abs(tail[j][k]-tone[i])]==dp[j]+1){
              tail[j+duration[i]+abs(tail[j][k]-tone[i])].push_back(tone[i]);
            }
          }
        }
      }
    }
    for(int i=100;i<T+50;i+=10000){
      cout<<dp[i]<<endl;
    }
    return dp[T];
  }
};
