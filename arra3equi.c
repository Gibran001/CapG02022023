#include <stdio.h>

int equi(int n,int arr[]){
	int i=0;
	int j=0;
	int ls=0;
	int rs=0;

	for(i=0;i<n;i++){
			ls=0;
		
			for(j=0;j<i; j++)
				ls+=arr[j];
			rs=0;
			for(j=i+1;j<n;j++)
				rs+=arr[j];
			if(ls==rs)
				return i;
	}
	return -1;
}

int main(){
	int num =0;
	printf("\n enter size: ");
	scanf("%d",&num);

	int arr[num];
	for(int i=0;i<num;i++)
		scanf("%d",&arr[i]);
	printf("the equilibrium: %d",equi(num,arr));
	return 0;
}
