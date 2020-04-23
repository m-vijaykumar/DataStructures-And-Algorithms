#include<stdio.h>
#include<string.h>
int main()
{
	printf("Roll number 20\n\n");
	char gram[20],part1[20],part2[20],modified_grammar[20],new_gramm[20],temp_gramm[20];
	int i,j=0,k=0,l=0,pos;
	printf("enter production:A->");
	gets(gram);
	for(i=0;gram[i]!='|';i++,j++)
	part1[j]=gram[i];
	part1[j]='\0';
	for(j=++i,i=0;gram[j]!='\0';j++,i++)
	part2[i]=gram[j];
	part2[i]='\0';
	for(i=0;i<strlen(part1)||i<strlen(part2);i++)
	{
		if(part1[i]==part2[i])
		{
			modified_grammar[k]=part1[i];
			k++;
			pos=i+1;
			
		}
	}
	for(i=pos,j=0;part1[i]!='\0';i++,j++)
	{
		new_gramm[j]=part1[i];
	}
	new_gramm[j++]='|';
	for(i=pos;part2[i]!='\0';i++,j++)
	{
		new_gramm[j]=part2[i];
	}
	modified_grammar[k]='X';
	modified_grammar[++k]='\0';
	new_gramm[j]='\0';
	printf("\n A->%s",modified_grammar);
	printf("\n X->%s\n",new_gramm);
	return 0;
	}
