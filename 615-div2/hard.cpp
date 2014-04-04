#include<iostream>
#include<sstream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<stack>
using namespace std;
string s,a,b;
vector<vector<vector<string> > > dp;
string req(int z,int x,int y){
  if(dp[z][x][y]!="?")return dp[z][x][y];
  if(z+1==s.size()){
    if(x+1==a.size())if(s[z]==a[x]||s[z]=='?'){
      return string()+a[x];
    }
    if(y+1==b.size())if(s[z]==b[y]||s[z]=='?'){
      return string()+b[y];
    }
    return "";
  }
  string t1="";
  string t2="";
  if(x<a.size())if(s[z]==a[x]||s[z]=='?')t1 = req(z+1,x+1,y);
  if(y<b.size())if(s[z]==b[y]||s[z]=='?')t2 = req(z+1,x,y+1);
  if(t1.size()!=0)t1=a[x]+t1;
  if(t2.size()!=0)t2=b[y]+t2;
  
  if(t1.size()==0)dp[z][x][y]=t2;
  else if(t2.size()==0)dp[z][x][y]=t1;
  else dp[z][x][y]=min(t1,t2);
  return dp[z][x][y];
}
string solve(){
  dp.resize(s.size()+1);
  for(int i=0;i<dp.size();i++){
    dp[i].resize(a.size()+1);
    for(int j=0;j<dp[i].size();j++){
      dp[i][j].resize(b.size()+1);
      for(int k=0;k<dp[i][j].size();k++){
        dp[i][j][k]="?";
      }
    }
  }
  return req(0,0,0);
}


class MergeStrings {

	public:

	string getmin(string S, string A, string B) {
    s=S;a=A;b=B;
    string ans =solve();
    /*
    for(int i=0;i<dp.size();i++){
      for(int j=0;j<dp[i].size();j++){
        for(int k=0;k<dp[i][j].size();k++){
          cout<<i<<" "<<j<<" "<<k<<" ::"<<dp[i][j][k]<<endl;
        }
      }
    }
    //*/
    return ans;
	}

	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "??CC??"; string Arg1 = "ABC"; string Arg2 = "BCC"; string Arg3 = "ABCCBC"; verify_case(0, Arg3, getmin(Arg0, Arg1, Arg2)); }
	void test_case_1() { string Arg0 = "WHAT?"; string Arg1 = "THE"; string Arg2 = "WA"; string Arg3 = ""; verify_case(1, Arg3, getmin(Arg0, Arg1, Arg2)); }
	void test_case_2() { string Arg0 = "PARROT"; string Arg1 = "PARROT"; string Arg2 = ""; string Arg3 = "PARROT"; verify_case(2, Arg3, getmin(Arg0, Arg1, Arg2)); }
	void test_case_3() { string Arg0 = "???????????"; string Arg1 = "AZZAA"; string Arg2 = "AZAZZA"; string Arg3 = "AAZAZZAAZZA"; verify_case(3, Arg3, getmin(Arg0, Arg1, Arg2)); }
	void test_case_4() { string Arg0 = "????K??????????????D???K???K????????K?????K???????"; string Arg1 = "KKKKKDKKKDKKDDKDDDKDKK"; string Arg2 = "KDKDDKKKDDKDDKKKDKDKKDDDDDDD"; string Arg3 = "KDKDKDKKKDDKDDKKKDKDKKDKDDDKDDDKKDKKKDKKDDKDDDKDKK"; verify_case(4, Arg3, getmin(Arg0, Arg1, Arg2)); }

// END CUT HERE


};



// BEGIN CUT HERE 

int main() {

	MergeStrings ___test;
  /*
	___test.run_test(0);
  ___test.run_test(1);
	___test.run_test(2);
	___test.run_test(3);
	___test.run_test(4);
  */
  string i1,i2,i3;
  cin>>i1>>i2>>i3;
  cout<<___test.getmin(i1,i2,i3)<<endl;
}

// END CUT HERE
