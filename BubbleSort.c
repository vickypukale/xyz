#include<stdio.h>
int main()
{
	int m[20] , t , n , i , j ;
	printf("Enter the limit of Array : ");
	scanf("%d",&n);
	printf("Enter the Element : ");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&m[i]);
	}
	// Bubble sort 
	for(i=0 ; i<n-i ; i++)
	{
		for(j=0 ; j<n-i-1 ;j++)
		{
			if(m[j]>m[j+1])
			{
				t = m[j];
				m[j] = m[j+1];
				m[j+1] = t ; 
			}
		}
	}
	printf("Sorted ARRAY : ");
	for(i=0 ; i<n ; i++)
	{
		printf("%d\t",m[i]);
	}
}
