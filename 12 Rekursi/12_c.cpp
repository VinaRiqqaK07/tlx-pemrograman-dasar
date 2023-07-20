#include <iostream>
#include <cmath>
using namespace std;

int a, b, x, k;

int Fungsi(int x, int k){
	
	if(k==0){
		return x;
	}else{
		return abs(a*Fungsi(x, k-1)+b);
	}
	
}

int main(){
	int temp;
	
	scanf("%d%d%d%d", &a, &b, &k, &x);
	
	printf("%d", Fungsi(x, k));
	
	
	return 0;
}
