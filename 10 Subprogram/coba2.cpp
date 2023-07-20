#include <iostream>
using namespace std;

int main(){
	int n, d, t=1;
	
	scanf("%d %d", &n, &d);
	for(int i=0; i<d; i++){
		t*=n;
	}
	
	printf("%d", n);
	return 0;
}
