//konversi desimal ke biner 
#include <iostream>
#include <string>
using namespace std;

string b;

void convert(int x){
	if(x==1){
		b.insert(0, "1");
		printf("%s", b.c_str());
	}else if(x>1){
		if(x%2==0){
			b.insert(0, "0");
		}else{
			b.insert(0, "1");
		}
		convert(x/2);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	convert(n);
	
	return 0;
}
