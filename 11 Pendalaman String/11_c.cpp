#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	char s[101];
	int k, len;
	
	scanf("%s", s);
	scanf("%d", &k);
	len = strlen(s);
	
	for(int i=0; i<len; i++){
		int dasar = s[i] - 'a';
		int enkripsi = (dasar+k) % 26;
		s[i] = enkripsi + 'a';
	}
	printf("%s", s);
	
	/* Tadi pertama langsung s[i] + k, tapi kan kalau k = 25,
	z + 25 sudah di luar dari nilai ASCII (mungkin) makanya simbol yang muncul*/
	return 0;
}
