#include<bits/stdc++.h>
using namespace std;

bool no(string s,char c){
  for(int i=0;i<s.size();i++){
    if(s[i]==c)return false;
  }
  return true;
}

pair<int,int> cul_val(string s){
  int f=0,e=0;
  for(int i=0;i<s.size();i++){
    if(s[i]!='.'){
      f+=s[i]-'0';
    }else{
      break;
    }
  }
  for(int i=s.size()-1;i>=0;i--){
    if(s[i]!='.'){
      e+=s[i]-'0';
    }else{
      break;
    }
  }
  return make_pair(f,e);
}

int max_use(vector<string> l){
  vector<pair<int,int>> val;
  for(int i=0;i<l.size();i++){
    val.push_back(cul_val(l[i]));
    cout<<l[i]<<" "<<val[val.size()-1].first<<" "<<val[val.size()-1].second<<endl;
  }
  sort(val.begin(),val.end());
  int res = 0;
  for(int i=0;i<val.size();i++){
    int tmp = max(val[i].first,val[i].second);
    res = max(tmp,res);
  }
  for(int i=0;i<val.size();i++){
    for(int j=0;j<val.size();j++){
      if(i==j)continue;
      int tmp = max(val[i].first+val[j].second,
                    val[i].second+val[j].first);
      res = max(res,tmp);
    }
  }
  return res;
}

int tmp_cul(vector<string> list){
  int res = 0;
  for(auto s:list){
    for(int i=0;i<s.size();i++){
      res = max(res,s[i]-'0');
    }
  }
  return res;
}

class DengklekMakingChains {
  public:
  int maxBeauty(vector <string> C) {
    int res = tmp_cul(C);
    vector<string> use;
    vector<string> tmp;
    for(int i=0;i<C.size();i++){
      if(no(C[i],'.')){
        use.push_back(C[i]);
      }else{
        tmp.push_back(C[i]);
      }
    }
    int res_tmp= 0;
    for(auto i:use){
      for(auto j:i){
        res_tmp += int(j-'0');
      }
    }
    res =max(res, max_use(tmp)+res_tmp);
    cout<<res_tmp<<endl;
    return res;
  }

  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {".15", "7..", "402", "..3"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 19; verify_case(0, Arg1, maxBeauty(Arg0)); }
	void test_case_1() { string Arr0[] = {"..1", "7..", "567", "24.", "8..", "234"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 36; verify_case(1, Arg1, maxBeauty(Arg0)); }
	void test_case_2() { string Arr0[] = {"...", "..."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(2, Arg1, maxBeauty(Arg0)); }
	void test_case_3() { string Arr0[] = {"16.", "9.8", ".24", "52.", "3.1", "532", "4.4", "111"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 28; verify_case(3, Arg1, maxBeauty(Arg0)); }
	void test_case_4() { string Arr0[] = {"..1", "3..", "2..", ".7."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 7; verify_case(4, Arg1, maxBeauty(Arg0)); }
	void test_case_5() { string Arr0[] = {"412", "..7", ".58", "7.8", "32.", "6..", "351", "3.9", "985", "...", ".46"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 58; verify_case(5, Arg1, maxBeauty(Arg0)); }

// END CUT HERE


};



// BEGIN CUT HERE 

int main() {

  DengklekMakingChains ___test;

  ___test.run_test(-1);

}

// END CUT HERE
