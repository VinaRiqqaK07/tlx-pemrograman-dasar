#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	float x;
	int a, b, c;
	
	scanf("%f", &x);
	a = trunc(x);
	
	if(a==x){
		printf("%d %d", a, a);
	}else if(x>0){
		printf("%d %d", a, a+1);
	}else if(x<0){
		printf("%d %d", a-1, a);
	}


	return 0;
}
