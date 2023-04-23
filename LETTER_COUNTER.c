#include <stdio.h>

int main()
{	
	char input[200];
	int num[200];
	char letters[200];
	
	
	int i=0, j, n=1, a=0;
	
	for (j=0;j<200;j++)
	{
		num[j]=0;
	}	
	
	printf("Enter your sentence: ");
	scanf("%s",input);
	
	while (input[i] != '\0')
	{
		for (j=0;j<n;j++)
		{
			if (input[i] == letters[j])
			{			
				num[j]++;
				break;
			}
			if (j==n-1)	
			{
				letters[a]= input[i];
				num[a]++;
				a++;
				n++;
				break;
			}
			
		}
		
		i++;
	}
	
	for (j=0;j<a;j++)
	{
		printf("\nAmount of %c letter is %d",letters[j],num[j]);
	}
	
	
	return 0;
}
