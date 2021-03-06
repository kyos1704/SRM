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
typedef long long ll;

class PowersOfTwo {

  public:

  long long count(vector<long long> p) {
    set<ll> all;
    all.insert(0);
    for(auto i:p){
      set<ll> tmp;
      for(auto j:all){
        tmp.insert(i+j);
      }
      all.insert(tmp.begin(),tmp.end());
    }
    return all.size();
  }

  
// BEGIN CUT HERE
  public:
  void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
  private:
  template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
  void verify_case(int Case, const long long &Expected, const long long &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
  void test_case_0() { long long Arr0[] = {1,2}; vector<long long> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 4LL; verify_case(0, Arg1, count(Arg0)); }
  void test_case_1() { long long Arr0[] = {1,1,1,1}; vector<long long> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 5LL; verify_case(1, Arg1, count(Arg0)); }
  void test_case_2() { long long Arr0[] = {1,2,2,2,4,4,16}; vector<long long> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 32LL; verify_case(2, Arg1, count(Arg0)); }
  void test_case_3() { long long Arr0[] = {1,32,1,16,32}; vector<long long> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 18LL; verify_case(3, Arg1, count(Arg0)); }
  void test_case_4() { long long Arr0[] = {1048576,1073741824,549755813888,70368744177664,4398046511104,262144,1048576,2097152,8796093022208,
 1048576,1048576,35184372088832,2097152,256,256,256,262144,1048576,1048576,70368744177664,262144,1048576}; vector<long long> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); long long Arg1 = 18432LL; verify_case(4, Arg1, count(Arg0)); }

// END CUT HERE


};



// BEGIN CUT HERE 

int main() {

  PowersOfTwo ___test;

  ___test.run_test(-1);

}

// END CUT HERE
