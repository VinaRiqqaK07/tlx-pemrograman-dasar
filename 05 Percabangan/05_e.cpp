#include <iostream>
using namespace std;

int main(){
	int n;
	
	scanf("%d", &n);
	
	if(n<10){
		printf("satuan");
	}else if(n>9 && n<100){
		printf("puluhan");
	}else if(n>99 && n<1000){
		printf("ratusan");
	}else if(n>999 && n<10000){
		printf("ribuan");
	}else if(n>9999 && n<100000){
		printf("puluhribuan");
	}
	return 0;
}
