#include<stdio.h>
char dna;
int main(){
	scanf("%c",&dna);
	if(dna=='A'|| dna=='a') printf("ADENINE");
	else if(dna=='T') printf("THYMINE");
	else if(dna=='G') printf("GUANINE");
	else if(dna=='C') printf("CYTOSINE");
	else printf("잘못 입력했습니다");
	 
	
	return 0;
}
