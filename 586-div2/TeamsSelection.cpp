#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <sstream>
using namespace std;
char A[]={'1','2'};
class TeamsSelection {
	public:
	string simulate(vector <int> p1, vector <int> p2) {
    string ans="";
    cout<<p1.size()<<endl;
    for(int i=0;i<p1.size();i++){
      ans+="0";    
    }
    bool use[55];
    for(int i=0;i<55;i++){
      use[i]=false;
    }
    int pp1=0,pp2=0;
    for(int i=0;i<p1.size();i++){
      if(i%2==0){
        while(use[p1[pp1]])pp1++;
        use[p1[pp1]]=true;
        ans[p1[pp1]-1]=A[i%2];
        cout<<"p1"<<pp1<<" "<<p1[pp1]<<endl;
      }else{
        while(use[p2[pp2]])pp2++;
        use[p2[pp2]]=true;
        ans[p2[pp2]-1]=A[i%2];
        cout<<"p2"<<pp2<<" "<<p2[pp2]<<endl;
      }
      cout<<ans<<endl;
    }
    return ans;
	}
};
