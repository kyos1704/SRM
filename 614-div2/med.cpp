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
vector<int> x,y;

bool in(vector<int> n,int m){
  for(int i=0;i<n.size();i++){
    if(n[i]==m){
      return true;
    }
  }
  return false;
}
typedef long long ll;
typedef pair<long long,long long > pii;
long long cal(vector<int> n){
  pii p1,p2;
  for(int i=0;i<x.size();i++){
    if(!in(n,i)){
      p2 = p1 = pii(x[i],y[i]);
      break;
    }
  }

  for(int i=0;i<x.size();i++){
    if(!in(n,i)){
      p1.first = min<long long>(p1.first,x[i]);
      p1.second = min<ll>(p1.second,y[i]);
      p2.first = max<ll>(p2.first,x[i]);
      p2.second = max<ll>(p2.second,y[i]);
    }
  }
  p1.first--;
  p1.second--;
  p2.first++;
  p2.second++;
  ll res = max(abs(p1.first-p2.first),abs(p1.second-p2.second));
  res = res*res;
  if(res==0)return 4;
  return res;
}
class MinimumSquareEasy {

	public:

	long long minArea(vector <int> X, vector <int> Y) {
    x=X;y=Y;
    long long ans = -1;
    if(x.size()>2){
      for(int i=0;i<x.size();i++){
        for(int j=0;j<x.size();j++){
          if(ans==-1)ans = cal({i,j});
          else ans = min(ans,cal({i,j}));
        }
      }
    }
		return ans;
	}

	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const long long &Expected, const long long &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {0, 1, 2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {0, 1, 5}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); long long Arg2 = 4LL; verify_case(0, Arg2, minArea(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {-1, -1, 0, 2, 0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {-2, -1, 0, -1, -2}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); long long Arg2 = 9LL; verify_case(1, Arg2, minArea(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {1000000000, -1000000000, 1000000000, -1000000000}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1000000000, 1000000000, -1000000000, -1000000000}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); long long Arg2 = 4000000008000000004LL; verify_case(2, Arg2, minArea(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {93, 34, 12, -11, -7, -21, 51, -22, 59, 74, -19, 29, -56, -95, -96, 9, 44, -37, -54, -21}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {64, 12, -43, 20, 55, 74, -20, -54, 24, 20, -18, 77, 86, 22, 47, -24, -33, -57, 5, 7}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); long long Arg2 = 22801LL; verify_case(3, Arg2, minArea(Arg0, Arg1)); }

// END CUT HERE


};



// BEGIN CUT HERE 

int main() {

	MinimumSquareEasy ___test;

	___test.run_test(-1);

}

// END CUT HERE
