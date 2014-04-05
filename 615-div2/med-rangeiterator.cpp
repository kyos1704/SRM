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

//////////
typedef long long ll;
struct T{
  ll x;
  ll val() const ;
};
class range_iterator 
: public std::iterator<std::forward_iterator_tag,T>
{
  private:
    T t;
  public:
    range_iterator(ll in){
      t = (T){in};
    }
    range_iterator& operator++(){
      t.x++;
      return *this;
    }
    range_iterator operator++(int){
      return range_iterator(t.x++);
    }
    ll operator*(){
      return t.val();
    }
    bool operator==(const range_iterator& a) const {
      return this->t.val() == a.t.val();
    }
    bool operator!=(const range_iterator& a) const {
      return !(*this==a);
    }
};
class search_range_object{
  private:
    ll s,e;
  public:
    search_range_object(ll start,ll end){
      s = start;
      e = end+1;
    }
    range_iterator begin(){
      return range_iterator(s);
    }
    range_iterator end(){
      return range_iterator(e);
    }
};
typedef search_range_object R;
////////////


ll b;
ll t;
ll T::val() const{
  return (t-x) + b*(x);
}
////////////

class LongLongTripDiv2 {

	public:

	string isAble(long long D, int T, int B) {
    R range(0,T);
    b = B;t=T;
    if(binary_search(range.begin(),range.end(),D)){
      return "Possible";
    }else{
      return "Impossible";
    }
	}

	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { long long Arg0 = 10LL; int Arg1 = 6; int Arg2 = 3; string Arg3 = "Possible"; verify_case(0, Arg3, isAble(Arg0, Arg1, Arg2)); }
	void test_case_1() { long long Arg0 = 10LL; int Arg1 = 5; int Arg2 = 3; string Arg3 = "Impossible"; verify_case(1, Arg3, isAble(Arg0, Arg1, Arg2)); }
	void test_case_2() { long long Arg0 = 50LL; int Arg1 = 100; int Arg2 = 2; string Arg3 = "Impossible"; verify_case(2, Arg3, isAble(Arg0, Arg1, Arg2)); }
	void test_case_3() { long long Arg0 = 120LL; int Arg1 = 10; int Arg2 = 11; string Arg3 = "Impossible"; verify_case(3, Arg3, isAble(Arg0, Arg1, Arg2)); }
	void test_case_4() { long long Arg0 = 10LL; int Arg1 = 10; int Arg2 = 9999; string Arg3 = "Possible"; verify_case(4, Arg3, isAble(Arg0, Arg1, Arg2)); }
	void test_case_5() { long long Arg0 = 1000LL; int Arg1 = 100; int Arg2 = 10; string Arg3 = "Possible"; verify_case(5, Arg3, isAble(Arg0, Arg1, Arg2)); }
	void test_case_6() { long long Arg0 = 1000010000100001LL; int Arg1 = 1100011; int Arg2 = 1000000000; string Arg3 = "Possible"; verify_case(6, Arg3, isAble(Arg0, Arg1, Arg2)); }

// END CUT HERE


};



// BEGIN CUT HERE 

int main() {

	LongLongTripDiv2 ___test;

	___test.run_test(-1);

}

// END CUT HERE
