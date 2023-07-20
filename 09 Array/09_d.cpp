#include <iostream>
using namespace std;

int main(){
	int i, j;
	int n, m; scanf("%d %d", &n, &m);
	int x[n][m];
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &x[i][j]);
		}
	}
	
	for(j=0; j<m; j++){
		for(i=n-1; i>=0; i--){
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
	return 0;
}
