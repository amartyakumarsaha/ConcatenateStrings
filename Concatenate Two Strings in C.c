#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	scanf("%s",str1);
	scanf("%s",str2);
									//printf("%s",strcat(str1,str2));
	int i,j;
	for(i=0;str1[i]!='\0';i++)
	{
		printf("%c",str1[i]);
	}
	if(str1[i]=='\0')
	{
		for(j=0;str2[j]!='\0';j++)
		{
			printf("%c",str2[j]);
		}
	}
}
