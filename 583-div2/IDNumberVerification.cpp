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

bool c_birth(string s){
  int y,m,d;
  stringstream yyy,mmm,ddd;
  yyy<<s.substr(0,4);
  mmm<<s.substr(4,2);
  ddd<<s.substr(6,2);
  yyy>>y;
  mmm>>m;
  ddd>>d;
  cout<<y<<" "<<m<<" "<<d<<endl;
  int d_max;
  if(y<1900 || 2011<y)return 1;
  if(m<0 || 12<m) return 1;
  if(m==2){
    if((y%4!=0 &&y%100==0 )||(y%400==0)){
      d_max=29;
    }else{
      d_max=28;
    }
  }else if(m<8){
    if(m%2==0){
      d_max=30;
    }else{
      d_max=31;
    }
  }else{
    if(m%2==0){
      d_max=31;
    }else{
      d_max=30;
    }
  }
  if(d<0 || d_max<d)return 1;
  return 0;
}

bool c_sum(string s,string check){
  int c=check[0]-'0';
  if(c<0||9<c)c=10;
  long long sum=0;
  cout<<s<<endl;
  for(int i=0;i<17;i++){
    sum+=(1<<(18-i))*(s[i]-'0');
    sum%=11;
  }
  cout<<sum<<endl;
  for(int i=0;i<10;i++){
    if((sum+i)%11==1){
      return 0;
    }
    cout<<i<<endl;
  }
  return 1;
}

class IDNumberVerification {
	public:
	string verify(string id, vector <string> regionCodes) {
		int ans=0;

    string region = id.substr(0,6); 
    string birthday = id.substr(6,8);
    string sequential = id.substr(14,3);
    string check = id.substr(17,1);
    cout<<id<<endl;
    cout<<region<<" "<<birthday<<" "<<sequential<<" "<<check<<endl;

    ans=(sequential[sequential.size()-1]-'0'+1)%2+1;
    

    if(regionCodes.end()==find(regionCodes.begin(),regionCodes.end(),region)){
      return "Invalid";
    }
    cout<<"region"<<endl;
    if(sequential=="000"){
      return "Invalid";
    }
    cout<<"sequential"<<endl;
    if(c_birth(birthday)){
      return "Invalid";
    }
    cout<<"birth"<<endl;
    if(c_sum(id.substr(0,17),check)){
      return "Invalid";
    }
    cout<<"c_sum"<<endl;
    if(ans==1){
      return "Male";
    }else if(ans==2){
      return "Female";
    }else{
      return "Invalid";
    }
	}
};
