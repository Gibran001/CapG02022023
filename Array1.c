#include <stdio.h>
int Sum(int n);
int main()
{
	int num, i;
	printf("enter number: ");
	scanf("%d", &num);
	int flag =0;
	for(i=2;i<=num/2;++i)
	{
		if(sum(i)==1){
			if(sum(num-i) ==1){
				printf("\nthe given %d can be expressed as the sum of %d and %d",num,i,num -i);
				flag=1;
			}
		}
	}
	if (flag ==0)
	printf("the given %d cannot be expressedas the sum of two prime numbers", num);
	return 0;
}
int sum(int n)
{
	int i, isPrime=1;
	if(n ==0 || n ==1){
		isPrime =0;
	}
	else{

	for(i=2;i<=n/2;++i){
		if(n%i ==0){
		break;
	}
}
}
return isPrime;

}

