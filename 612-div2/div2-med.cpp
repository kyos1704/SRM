#include<iostream>
#include<sstream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<cassert>
using namespace std;

vector<vector<pair<int,int>>> list;//[now]sec,clip
typedef pair<int,int> pii;//sec,clip
class EmoticonsDiv2 {

  public:

  int printSmiles(int s) {
    list.clear();
    list.resize(1400);
    list[1].push_back(pii(0,0));
    for(int i=1;i<list.size();i++){
      sort(list[i].begin(),list[i].end());
      list[i].push_back(pii(list[i][0].first+1,i));
      for(int j=0;j<list[i].size();j++){
        if(list[i][j].second+i>i&&list[i][j].second+i<list.size()){
          list[list[i][j].second+i].push_back(pii(list[i][j].first+1,list[i][j].second));
        }
      }
    }
    sort(list[s].begin(),list[s].end());
    return list[s][0].first;
  }

  
// BEGIN CUT HERE
  public:
  void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
  private:
  template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
  void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
  void test_case_0() { int Arg0 = 2; int Arg1 = 2; verify_case(0, Arg1, printSmiles(Arg0)); }
  void test_case_1() { int Arg0 = 6; int Arg1 = 5; verify_case(1, Arg1, printSmiles(Arg0)); }
  void test_case_2() { int Arg0 = 11; int Arg1 = 11; verify_case(2, Arg1, printSmiles(Arg0)); }
  void test_case_3() { int Arg0 = 16; int Arg1 = 8; verify_case(3, Arg1, printSmiles(Arg0)); }
  void test_case_4() { int Arg0 = 1000; int Arg1 = 21; verify_case(4, Arg1, printSmiles(Arg0)); }

// END CUT HERE


};



// BEGIN CUT HERE 

int main() {

  EmoticonsDiv2 ___test;

  ___test.run_test(-1);

}

// END CUT HERE
