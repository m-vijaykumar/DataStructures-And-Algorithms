#include<stdio.h>
#include<string.h>
#define SIZE 10
int main()
{
	printf("Roll number 20\n\n");
	char non_terminal;
	char alpha,beta;
	int num,index=3,i;
	char production[10][SIZE];
	printf("enter number of productions");
	scanf("%d",&num);
	
	printf("enter the grammar as E->E|A:\n");
	for(i=0;i<num;i++)
	{
		scanf("%s",production[i]);
	}
	for(i=0;i<num;i++)
	{
		printf("\n grammar::%s",production[i]);
		non_terminal=production[i][0];
		if(non_terminal==production[i][index])
		{
			alpha=production[i][index+1];
			printf(" is left recurssive \n");
			while(production[i][index]!='\0'&&production[i][index]!='|')
			index++;
			if(production[i][index]!='\0')
			{
				beta=production[i][index+1];
				printf(" grammar without left recurssion :\n");
				printf("%c->%c%c'",non_terminal,beta,non_terminal);
				printf("\n%c'->%c%c'|\0\n",non_terminal,alpha,non_terminal);
			}
		}
		else
		printf("production dosen't have any left recurssion");
		index=3;
	}
	return 0;
}
