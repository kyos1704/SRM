#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
bool solve2(vector<int> l,long long  tmp){
  sort(l.begin(),l.end());
  vector<int> ans(l.size());
  for(int i=l.size()-1;i>=0;i--){
    ans[i] = tmp/l[i];
    tmp -= l[i]*ans[i];
  }
  sort(ans.begin(),ans.end());
  for(int i=0;i<ans.size()-1;i++){
    if(ans[i]==ans[i+1]||ans[i]==0)return false;
  }
  return true;
}
bool solve(vector<int> l){
  for(long long i=0;i<2500*15*15;i++){
    if(solve2(l,i))return true;;
  }
  return false;
}

class ColorfulCoinsEasy{
  public: 
    string isPossible(vector <int> values){ 
      if(solve(values)){
        return "Possible";
      }else{
        return "Impossible";
      }
    } 
    
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); if ((Case == -1) || (Case == 7)) test_case_7(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Possible"; verify_case(0, Arg1, isPossible(Arg0)); }
	void test_case_1() { int Arr0[] = {1, 3}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Possible"; verify_case(1, Arg1, isPossible(Arg0)); }
	void test_case_2() { int Arr0[] = {1, 2, 4}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Impossible"; verify_case(2, Arg1, isPossible(Arg0)); }
	void test_case_3() { int Arr0[] = {1, 5, 15, 90}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Possible"; verify_case(3, Arg1, isPossible(Arg0)); }
	void test_case_4() { int Arr0[] = {1, 4, 20, 60, 180, 1440, 5760}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Impossible"; verify_case(4, Arg1, isPossible(Arg0)); }
	void test_case_5() { int Arr0[] = {1, 7, 21, 105, 630, 3150, 18900}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Possible"; verify_case(5, Arg1, isPossible(Arg0)); }
	void test_case_6() { int Arr0[] = {1, 10, 30, 300, 900, 9000, 18000}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Impossible"; verify_case(6, Arg1, isPossible(Arg0)); }
	void test_case_7() { int Arr0[] = {1, 2, 10, 40, 200, 1000, 4000, 20000}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Impossible"; verify_case(7, Arg1, isPossible(Arg0)); }

// END CUT HERE
 
};

// BEGIN CUT HERE 
int main()
{
  ColorfulCoinsEasy ___test; 
  ___test.run_test(-1); 
} 
// END CUT HERE 
