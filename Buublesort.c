#include<stdio.h>
void bubblesort(int a[20],int n);
int main()
{
	int a[20],n,i,temp,j;
	printf("\nenter size of array");
	scanf("%d",&n);
	printf("\nenter elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubblesort(a,n);
	printf("\nsorted array");
	for(i=0;i<n;i++)
	{
	
	printf("%d\t",a[i]);
    }
	return 0;
}
void bubblesort(int a[20],int n)
{
		int i,j,temp;
	for(i=0;i<n-1;i++)
	{
	
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{	
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
	  	    }
		}
    }
}
