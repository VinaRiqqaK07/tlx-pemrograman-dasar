#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int a[105], i=0;
	
	while(scanf("%d", &a[i]) != EOF){
		i++;
	}
	
	for(i=i-1; i>=0; i--){
		printf("%d\n", a[i]);
	}
	
	
	return 0;
}
