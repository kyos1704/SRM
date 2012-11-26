#include<iostream>
#include<string>
#include<vector>
using namespace std;

class TypingDistance{
private:
	int key_pos[26];
	
public:
	int minDistance(string keyboard, string word){
		int ans=0;
		
		for(int i=0;i<keyboard.size();i++){
			key_pos[keyboard[i]-'a']=i;
		}
		for(int i=1;i<word.size();i++){
			ans=ans+abs(key_pos[word[i-1]-'a']-key_pos[word[i]-'a']);
			cout<<ans<<endl;
		}
		
		return ans;
	}
};

//
///

int main(){}