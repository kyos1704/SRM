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

string to_s(int a){
  stringstream ss;
  ss<<a;
  string s;
  ss>>s;
  return s;
}
class MicroStrings {

	public:

	string makeMicroString(int A, int D) {
    string res="";

    while(A>=0){
      res += to_s(A);
      A = A-D;
    }
		return res;

	}

	


};





// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
