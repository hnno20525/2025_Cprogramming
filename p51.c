#include<stdio.h>
char dna;
int main(){
	scanf("%c",&dna);
	if(dna=='A'|| dna=='a') printf("ADENINE");
	else if(dna=='T') printf("THYMINE");
	else if(dna=='G') printf("GUANINE");
	else if(dna=='C') printf("CYTOSINE");
	else printf("�߸� �Է��߽��ϴ�");
	 
	
	return 0;
}
