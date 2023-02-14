#include <stdio.h>
int main()
{
	int arr[100];
	int i_value=0;
	int value=26;
	for(i_value=0;i_value<=100;i_value++,value +=1)
	{
		arr[i_value]=value;
	}
	for(i_value=0;i_value<100;i_value++)
	{
		printf("\nelement in array a[%d] =%d",i_value,arr[i_value]);
	}
	printf("\n\n");
	return 0;
}
