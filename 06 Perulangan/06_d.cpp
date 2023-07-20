#include <iostream>
#include <cstdio>

using namespace std;
int main(){
	int n, jumlah;
	
	jumlah = 0;
	while(scanf("%d", &n) != EOF){
		jumlah = jumlah + n;
	}
	printf("%d", jumlah);
	return 0;
}
