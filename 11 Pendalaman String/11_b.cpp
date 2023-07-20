#include <iostream>
#include <string>
using namespace std;

int main(){
	string s, t;
	
	cin >> s >> t;
	while(s.find(t) != -1){
		s.erase(s.find(t), t.length());
	}
	printf("%s", s.c_str());
	
	return 0;
}
