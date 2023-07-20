#include <iostream>
using namespace std;

int main(){
	int n, m, p; scanf("%d %d %d", &n, &m, &p);
	int a[n][m], b[m][p], c[n][p];
	int i, j, k;
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	for(i=0; i<m; i++){
		for(j=0; j<p; j++){
			scanf("%d", &b[i][j]);
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<p; j++){
			c[i][j]=0;
			for(k=0; k<m; k++){
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
