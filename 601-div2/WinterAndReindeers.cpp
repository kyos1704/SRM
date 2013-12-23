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
#include <cstdio>
using namespace std;

string set_string(vector<string> &l){
  string res="";
  for(int i=0;i<l.size();i++){
    res += l[i];
  }
  return res;
}
struct S{
  vector<int> first,last;
};
S splitList(string a,string c){
  cout<<"split"<<endl;
  
  vector<vector<int> > list;

  list.resize(c.size());
  for(int i=0;i<a.size();i++){
    for(int j=0;j<c.size();j++){
      if(a[i]==c[j]){
        list[j].push_back(i);
      }
    }
  }
  
  cout<<"split"<<endl;
  S res;
  res.first = list[0];
  res.last.resize(list[0].size());
  for(int i=0;i<res.first.size();i++){
    res.last[i]=-1;
    int tmp = 0;
    for(int j=res.first[i];j<a.size();j++){
      if(a[j]==c[tmp])tmp++;
      if(tmp==c.size()){
        res.last[i]=j;
        break;
      }
    }
  }  
  
  cout<<"fin split"<<endl;
  return res;
}


//最長共通部分列長を求めるLCS(string,string)
string x,y;
vector<vector<int> > l,rl;
int L(int i,int j){
  if(i<0||j<0){
    return 0;
  }
  if(l[i][j]!=-1){
    return l[i][j];
  }
  l[i][j] = max(L(i-1,j),L(i,j-1));
  if(x[i]==y[j])l[i][j] = max(l[i][j],L(i-1,j-1)+1);
  return l[i][j];
}
int revL(int i,int j){
  if(!(i<x.size()&&j<y.size())){
    return 0;
  }
  if(rl[i][j]!=-1){
    return rl[i][j];
  }
  rl[i][j] = max(revL(i+1,j),revL(i,j+1));
  if(x[i]==y[j])rl[i][j] = max(rl[i][j],revL(i+1,j+1)+1);
  return rl[i][j];
}


class WinterAndReindeers {
  public:
  int solve(string a,string b,string c){
    S ac = splitList(a,c);
    S bc = splitList(b,c);
    
    x = a;
    y = b;
    l.clear();rl.clear();
    l.resize(a.size());
    rl.resize(a.size());
    for(int i=0;i<a.size();i++){
      l[i].resize(b.size());
      rl[i].resize(b.size());
      for(int j=0;j<b.size();j++){
        l[i][j]=rl[i][j]=-1;
      }
    }

    int res=0;
    cout<<ac.first.size()<<" "<<bc.first.size()<<endl;
    for(int i=0;i<ac.first.size();i++)if(ac.last[i]!=-1){
      for(int j=0;j<bc.first.size();j++)if(bc.last[j]!=-1){
        const int ll = L(ac.first[i]-1,bc.first[j]-1);
        const int rll = revL(ac.last[i]+1,bc.last[j]+1);
        res = max<int>(res,ll+ rll +c.size());
      }else{break;}
    }else{break;}
    

    return res;
  }
  int getNumber(vector <string> allA, vector <string> allB, vector <string> allC) {
    string a,b,c;
    a = set_string(allA);
    b = set_string(allB);
    c = set_string(allC);
    return solve(a,b,c);
  }
};
/*
int main(){
  string a,b,c;
  while(cin>>a>>b>>c){
    WinterAndReindeers S;
    int ans = S.solve(a,b,c);
    cout<<ans<<endl;
  }
}*/
