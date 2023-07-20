#include <iostream>
#include <cstdio>

using namespace std;
int main(){
	int n;
	
	scanf("%d", &n);
	
	while(n%2==0){
		n = n/2;
	}
	
	if(n==1){
		printf("ya");
	}else{
		printf("bukan");
	}
	
	/*
	oh iya kan katanya 2pangkat k. k = 0, 2^k = 1
	*/
	return 0;
}
