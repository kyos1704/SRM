#include<bits/stdc++.h>
using namespace std;
class EmployManager {

  public:

  int maximumEarnings(vector <int> value, vector <string> earning) {
    vector<int> hire(value.size());
    for(int i=0;i<value.size();i++){
      int tmp = -value[i];
      for(int j=0;j<value.size();j++){
        tmp += (int)(earning[i][j]-'0');
      }
      if(tmp>=0){
        hire[i]=true;
      }
    }
    int ans=0;
    for(int i=0;i<hire.size();i++){
      if(hire[i])ans-=value[i];
      for(int j=i+1;j<hire.size();j++){
        if(hire[j])ans+= (int)(earning[i][j]-'0');
      }
    }
    for(int i=0;i<hire.size();i++){
      for(int j=i+1;j<hire.size();j++){
        if(!hire[i]&&!hire[j])ans-=(int)(earning[i][j]-'0');
      }
    }
    return ans;
  }

  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {1, 1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"02", "20"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 0; verify_case(0, Arg2, maximumEarnings(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {2, 2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"01", "10"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = -1; verify_case(1, Arg2, maximumEarnings(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {1, 2, 3, 4}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"0121", "1021", "2201", "1110"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = -1; verify_case(2, Arg2, maximumEarnings(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {2, 2, 0, 1, 4, 0, 1, 0, 0, 4}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"0100451253",  "1010518123",  "0102989242",  "0020093171",  "4590045480",  "5189400676",  "1893500826",  "2121468008",  "5247872007",  "3321066870"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 156; verify_case(3, Arg2, maximumEarnings(Arg0, Arg1)); }

// END CUT HERE


};



// BEGIN CUT HERE 

int main() {

  EmployManager ___test;

  ___test.run_test(-1);

}

// END CUT HERE
