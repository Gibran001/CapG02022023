#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n){
	if(n<=1){
		return false;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i ==0)
		{
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	printf("enter a positive integer: ");
	scanf("%d",&n);
	int count =0;
	printf("%d=\n",n);
	for(int i=2;i<=n/2;i++){
		if(isPrime(i) && isPrime(n-i)){
			printf("%d +%d\n",i,n-i);
			count++;
		}
	}
	printf("Number ofWays =%d\n",count);
	return 0;
}
