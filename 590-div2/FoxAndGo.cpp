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
const int INF = 10000;
vector<string> b;
vector<vector<int> > m,map;
vector<string> make(vector<string> b){
  vector<string> res;
  string tmp = b[0];
  tmp = 'x'+tmp+'x';
  for(int i=0;i<tmp.size();i++){
    tmp[i]='x';
  }
  res.push_back(tmp);
  for(int i=0;i<b.size();i++){
    res.push_back('x'+b[i]+'x');
  }
  res.push_back(tmp);
  return res;
}

int update1(int i,int j){
  if(b[i][j]=='.'){
    return m[i][j]=-1;
  }else if(b[i][j]=='o'){
    return m[i][j]=1;
  }else if(b[i][j]=='x'){
    return m[i][j]=0;
  }
  return 0;
}
int vx[]={0,1,0,-1};
int vy[]={1,0,-1,0};
int update2(int i,int j){
  if(m[i][j]==0)return 0;
  if(m[i][j]==-1)return -1;
  int f=true;
  for(int i=0;i<4;i++){
    int tmp = update2(i+vx[i],j+vy[j]);
    if(tmp==-1){
      f=false;
    }else{
      m[i][j]+=tmp;
    }
  }
  int res = m[i][j];
  if(f){
    m[i][j]=0;
  }
  return res;
}
class FoxAndGo {
	public:
	int maxKill(vector <string> board) {
    int res=0;
    b = make(board);
    m.resize(b.size());
    for(int i=0;i<m.size();i++){
      m[i].resize(b[i].size());
    }
    for(int i=0;i<m.size();i++){
      for(int j=0;j<m[i].size();j++){
        update1(i,j);
      }
    }
    for(int i=0;i<m.size();i++){
      for(int j=0;j<m[i].size();j++){
        update2(i,j);
      }
    }
    for(int i=0;i<m.size();i++){
      for(int j=0;j<m[i].size();j++){
        res = max(res,count(i,j));
      }
    }
    return res;
	}
};
