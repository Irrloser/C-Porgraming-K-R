#include<stdio.h>
/* shell-sort assending */
void shell(int *, int k);
int main()
{
	int i, k;
	int a[20];
	scanf("%d", &k);
	for (i = 0; i < k; i++)
		scanf("%d", &a[i]);
	shell(a, k);
	for (i = 0; i < k; i++)
		printf("%-5d", a[i]);
	printf("\n");
}
void shell(int *a, int k)
{
	int gap, i, j;
	for(gap=k/2;gap>0;gap/=2)
		for(j=gap;j<k;j++)
			for(i=j-gap;i>=0;i-=gap)
				if( a[i] > a[i + gap])
				{
					int temp = a[i];
					a[i] = a[i + gap];
					a[i + gap] = temp;
				}
}