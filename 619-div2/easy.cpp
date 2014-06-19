#include<bits/stdc++.h>
using namespace std;
class GoodCompanyDivTwo {

  public:

  int countGood(vector <int> s, vector <int> w) {
    int ans = 0;
    vector<vector<int>> bel(s.size());
    for(int i=1;i<s.size();i++){
      bel[s[i]].push_back(i);
    }
    /*
    for(int i=0;i<bel.size();i++){
      cout<<i<<":";
      for(int j=0;j<bel[i].size();j++){
        cout<<bel[i][j]<<" ";
      }cout<<endl;
    }*/

    for(int i=0;i<bel.size();i++){
      vector<int> dp(101,0);
      dp[w[i]]++;
      for(int j=0;j<bel[i].size();j++){
        dp[w[bel[i][j]]]++;
      }
      bool judge = false;
      for(int j=0;j<dp.size();j++){
        //if(dp[j]!=0)cout<<"("<<j<<","<<dp[j]<<")";
        if(!(dp[j]<=1))judge=true;
      }//cout<<endl;
      if(!judge)ans++;
    }
    return ans;
  }

  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {-1, 0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1, 2}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 2; verify_case(0, Arg2, countGood(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {-1, 0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1, 1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 1; verify_case(1, Arg2, countGood(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {-1, 0, 1, 1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1, 4, 3, 2}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 4; verify_case(2, Arg2, countGood(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {-1, 0, 1, 0, 0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {3, 3, 5, 2, 2}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 4; verify_case(3, Arg2, countGood(Arg0, Arg1)); }
	void test_case_4() { int Arr0[] = {-1, 0, 1, 1, 1, 0, 2, 5}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1, 1, 2, 3, 4, 5, 3, 3}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 7; verify_case(4, Arg2, countGood(Arg0, Arg1)); }
	void test_case_5() { int Arr0[] = {-1, 0, 0, 1, 1, 3, 0, 2, 0, 5, 2, 5, 5, 6, 1, 2, 11, 12, 10, 4, 7, 16, 10, 9, 12, 18, 15, 23, 20, 7, 4}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {4, 6, 4, 7, 7, 1, 2, 8, 1, 7, 2, 4, 2, 9, 11, 1, 10, 11, 4, 6, 11, 7, 2, 8, 9, 9, 10, 10, 9, 8, 8}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 27; verify_case(5, Arg2, countGood(Arg0, Arg1)); }

// END CUT HERE


};



// BEGIN CUT HERE 

int main() {

  GoodCompanyDivTwo ___test;

  ___test.run_test(-1);

}

// END CUT HERE
