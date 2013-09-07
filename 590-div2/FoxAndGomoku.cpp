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
class FoxAndGomoku {
	public:
	string win(vector<string> b) {
    string ans[]= {"found","not found"};
    for(int i=0;i<b.size();i++){
      int c =0;
      for(int j=0;j<b[i].size();j++){
        if(b[i][j]=='o'){
          c++;
        }else{
          c=0;
        }
        if(c==5){
          return ans[0];
        }
      }
    }

    for(int i=0;i<b[0].size();i++){
      int c=0;
      for(int j=0;j<b.size();j++){
        if(b[j][i]=='o'){
          c++;
        }else{
          c=0;
        }
        if(c==5){
          return ans[0];
        }
      }
    }
    int cc=0;
    for(int i=0;i<b.size();i++){
      for(int j=0;j+i<b[i].size();j++){
        if(b[i][i+j]=='o'){
          cc++;
        }else{
          cc=0;
        }
        if(cc==5){
          return ans[0];
        }
      }
      cc=0;
      for(int j=0;j+i<b.size();j++){
        if(b[i+j][i]=='o'){
          cc++;
        }else{
          cc=0;
        }
        if(cc==5){
          return ans[0];
        }
      }
      cc=0;
      for(int j=0;j+i<b.size();j++){
        if(b[i+j][b.size()-1-i]=='o'){
          cc++;
        }else{
          cc=0;
        }
        if(cc==5){
          return ans[0];
        }
      }
      cc=0;
      for(int j=0;j+i<b.size();j++){
        if(b[b.size()-1-i][i+j]=='o'){
          cc++;
        }else{
          cc=0;
        }
        if(cc==5){
          return ans[0];
        }
      }
    }

    return ans[1];
	}
};
