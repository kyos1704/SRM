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

string valid(string s){
  string res="";
  int c=0;
  for(int i=0;i<s.size();i++){
    if(s[i]!='w'){
      break;
    }
    c++;
  }
  if(c==0)return "INVALID";
  for(int i=0;i<c;i++){
    if(!(s[i]=='w'&&s[i+c]=='o'&&s[i+2*c]=='l'&&s[i+3*c]=='f')){
      return "INVALIUD";
    }
  }
  return s.substr(4*c);
}
class WolfDelaymaster {
	public:
	string check(string s) {

    while(s!="INVALID"){
      cout<<s<<endl;
      if(""==(s=valid(s))){
        return "VALID";
      }
    }
    cout<<s<<endl;
    return s;
	}
};
