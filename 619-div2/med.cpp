#include<bits/stdc++.h>
using namespace std;
class ChooseTheBestOne {
  public:

  int countNumber(int N) {
    vector<int> dp(N+1,1);
    dp[0]=0;
    int deleted = 1;
    for(int i=1;i<N;i++){
      deleted--;
      long long tmp = (i%(N-i+1))*(i%(N-i+1))*(i%(N-i+1));
      tmp=tmp%(N-i+1);
      deleted = (deleted + tmp)%(N-i+1);
      if(deleted==0)deleted+=(N-i+1);
      int count=0;
      for(int j=0;j<dp.size();j++){
        if(dp[j]==1)count++;
        if(count==deleted){
          dp[j]=false;
          break;
        }
      }
      deleted = count;
    }
    int c = 0;
    for(int i=0;i<dp.size();i++){
      c+=dp[i];
    }
    for(int i=0;i<dp.size();i++){
      if(dp[i])return i;
    }
    return -1;
  }

  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 3; int Arg1 = 2; verify_case(0, Arg1, countNumber(Arg0)); }
	void test_case_1() { int Arg0 = 6; int Arg1 = 6; verify_case(1, Arg1, countNumber(Arg0)); }
	void test_case_2() { int Arg0 = 10; int Arg1 = 8; verify_case(2, Arg1, countNumber(Arg0)); }
	void test_case_3() { int Arg0 = 1234; int Arg1 = 341; verify_case(3, Arg1, countNumber(Arg0)); }

// END CUT HERE


};



// BEGIN CUT HERE 

int main() {

  ChooseTheBestOne ___test;

  ___test.run_test(0);
  ___test.run_test(1);
  ___test.run_test(2);
  ___test.run_test(3);

}

// END CUT HERE
