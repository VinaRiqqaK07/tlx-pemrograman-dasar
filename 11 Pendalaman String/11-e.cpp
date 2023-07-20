#include <cstdio>
#include <cstring>

int main(){
	char s[101];
	int len;
	
	scanf("%s", s);
	len = strlen(s);
	
	for(int i=0; i<len; i++){
		if(s[i]>='a'){
			s[i] -= 'a' - 'A';
		}else{
			s[i] += 'a' - 'A';
		}
	}
	
	printf("%s", s);
	return 0;
}
