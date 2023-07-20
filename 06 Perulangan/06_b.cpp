#include <iostream>
using namespace std;

int main(){
	int n, b, i;
	int jumlah = 0;
	
	scanf("%d", &n);
	for(i=n; i>0; i--){
		scanf("%d", &b);
		jumlah = jumlah + b;
	}
	printf("%d", jumlah);
	
	return 0;
}
