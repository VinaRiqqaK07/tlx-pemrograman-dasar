#include <iostream>
using namespace std;

int main(){
	int i, j, n; cin >> n; 
	int a[n], mo=0;
	int temp=0, count;
	int tempco=1;
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n; i++){
		
		if(a[i]>0){
			count=1;
			for(j=i+1; j<n; j++){
				if(a[i]==a[j]){
					a[j]=0;
					count++;
				}
			}
		}
		
		if(count>tempco){
			tempco=count;
			mo=a[i];
		}else{
			if(count==tempco){
				if(a[i]>mo){
				mo=a[i];
				}
			}
		} 
		
	}
	
	printf("%d", mo);
	return 0;
}
