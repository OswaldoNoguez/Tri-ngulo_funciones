#include<stdio.h>
int k,j,condicion,n;
int para1(int condicion){
	for (k=1;k<=condicion;k++){
		printf(" ");
	}
	printf("*");
	printf("\n");
}
int para2(int n){
	int i;
	for (i=2;i<=n-1;i++){
		for (j=1;j<=n-i;j++){
			printf(" ");
		}
		printf("*");
		para1((2*i)-3);
	}
}
int para3(int n){
	for (k=1;k<=n-1;k++){
		printf(" ");
		printf("*");
	}
	printf("\n");
}
int main(){
	int n;
	printf("Dame la altura\n");
	scanf("%d",&n);
	printf("\n");
	if (n>0){
		para1(n-1);
	}
	para2(n);
	if (n>1){
		printf("*");
		para3(n);
	}
	return 0;
}
