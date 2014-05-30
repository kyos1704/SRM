#include<bits/stdc++.h>
using namespace std;
vector<int> w;
int cost(vector<int> u,int n){
  int res = 1;
  for(int i=n+1;i<u.size();i++){
    if(!u[i]){
      res *= w[i];
      break;
    }
  }
  for(int i= n-1;i>=0;i--){
    if(!u[i]){
      res *= w[i];
      break;
    }
  }
  return res;
}

bool end(vector<int> u){
  for(int i=1;i<u.size()-1;i++){
    if(!u[i])return false;
  }
  return true;
}

vector<int> use;
int solve(int c){
  if(end(use))return c;
  int res = 0;
  for(int i=1;i<use.size()-1;i++){
    if(!use[i]){
      use[i]=true;
      res = max(res,solve(c+cost(use,i)));
      use[i]=false;
    }
  }
  return res;
}


class CasketOfStarEasy {

  public:

  int maxEnergy(vector <int> we) {
    w = we;
    use = vector<int>(w.size(),0);
    return solve(0);
  }


  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {1,2,3,4}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 12; verify_case(0, Arg1, maxEnergy(Arg0)); }
	void test_case_1() { int Arr0[] = {100,2,1,3,100}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 10400; verify_case(1, Arg1, maxEnergy(Arg0)); }
	void test_case_2() { int Arr0[] = {2,2,7,6,90,5,9}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1818; verify_case(2, Arg1, maxEnergy(Arg0)); }
	void test_case_3() { int Arr0[] = {477,744,474,777,447,747,777,474}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2937051; verify_case(3, Arg1, maxEnergy(Arg0)); }
	void test_case_4() { int Arr0[] = {1,1,1,1,1,1,1,1,1,1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 8; verify_case(4, Arg1, maxEnergy(Arg0)); }

// END CUT HERE


};



// BEGIN CUT HERE 

int main() {

  CasketOfStarEasy ___test;

  ___test.run_test(-1);

}

// END CUT HERE
