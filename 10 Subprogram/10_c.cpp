#include <iostream>
using namespace std;

int reverse(int &x){
	int temp=x, ret=0;
	
	while(temp>0){
		ret = (ret*10)+(temp%10);
		temp=temp/10;
	}
	return ret;
}

int main(){
	int a, b, c;
	
	scanf("%d %d", &a, &b);
	a = reverse(a); 
	b = reverse(b);
	c = a + b;
	
	printf("%d", reverse(c));
	
	return 0;
}
