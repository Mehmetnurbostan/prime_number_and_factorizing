#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void prime_number_and_factorizing(int n){
	int s,i,prime_number=0;
	for(i=n-1;i>0;i--){
		if((n%(i))==0){
			s=n/i;
			n/=s;
			printf("%d\n",s);
			asal++;
	}}
	if(prime_number==1||prime_number==0)printf("prime_number\n");
}
int main() {
	int a;
	while(1){
	printf("type num");
	scanf("%d",&a);
	prime_number_and_factorizing(a);}
	return 0;
}
