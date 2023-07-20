#include <iostream>
#include <string>
using namespace std;

string s;

void Snake(){
	
	while(s.find('_') != -1){
		s[s.find('_')+1] -= 'a' - 'A';
		s.erase(s.find('_'), 1);
	}
	printf("%s", s.c_str());
}

void Camel(){
	string c = "_";
	
	for(int i=0; i<s.length(); i++){
			if(s[i] <='Z'){
				s[i] += 'a' - 'A';
				s.insert(i, c);
			}
			
		}
		
	printf("%s", s.c_str());
}

int main(){
	cin >> s;
	
	if(s.find('_') != -1){
		Snake();
	}else{
		Camel();
	}
	
	return 0;
}
