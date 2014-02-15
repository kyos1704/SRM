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
#define mp make_pair
int X,Y;
bool rec(long long x,long long y,long long k){
  if(x==X&&y==Y)return true;
  if(y==X&&x==Y)return true;
  if(k>1000000000)return false;
  if(y>Y)return false;
  if(x>X)return false;
  return rec(x+k,y,k*3)||rec(x,y+k,k*3);
}
bool solve(int x,int y){
  X=x;Y=y;
  return rec(0,0,1);
}
class PowerOfThreeEasy {
  public:
  string ableToGet(int x, int y) {
    if(solve(x,y)){
      return "Possible";
    }else{
      return "Impossible";
    } 
  }
};
