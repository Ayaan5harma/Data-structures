#include<stdio.h>
int main()
{
	int digits[4],num,i;
	printf("enter the numbers");

for(i=0;i<4;++i)
	{
		scanf("%d",&digits[i]);
	}
 
	printf("numbers in asecending order are shown below");
	int t,j;
	for(i=0;i<4;++i)
	{
	for(j=1;j<4;++j)
	
	{
		if(digits[i]>digits[j])
		{
	t=digits[i];
		digits[i]=digits[j];
		digits[j]=t;
	
		
		}	
		
		}	
}
for(i=0;i<4;++i)
{

	printf("%d,",digits[i]);
	}
}
