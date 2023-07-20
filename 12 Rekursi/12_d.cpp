//da kena std::out_of_range kalau nda bersarang di dalam subprogramnya
#include <iostream>
#include <string>
using namespace std;

void palindrom(string n){
	
	if(n.length()==1||n.length()==0){
		printf("YA");
	}else{
		if(n[0]==n[n.length()-1]){
			n.erase(0, 1); n.erase(n.length()-1, 1);
			palindrom(n);
		}else{
			printf("BUKAN");
		}
	}
}

int main(){
	string s;
	
	cin>>s;
	palindrom(s);
	
	return 0;
}

