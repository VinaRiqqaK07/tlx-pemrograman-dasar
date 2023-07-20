#include <iostream>
using namespace std;

int faktorUnik(int n){
	if(n==1){
		return 1;
	}else if(n%2==1){
		return n * faktorUnik(n-1);
	}else{
		return n/2 * faktorUnik(n-1);
	}
}

int main(){
	int n;
	
	scanf("%d", &n);
	printf("%d", faktorUnik(n));
	
	return 0;
}
