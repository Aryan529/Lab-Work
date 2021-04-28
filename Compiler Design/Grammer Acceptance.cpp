#include<stdio.h>
#include<string.h>

int main() 
{
	char str[100];
	int flag, i=0;

	printf("GRAMMAR ::\n S->AB \n A->aA|b \n B->bB|a\n");
	printf("ENTER STRING TO BE CHECKED ::\n");
	gets(str);
	if(str[0]=='a') {
		flag=0;
		for (i=1;str[i-1]!='\0';i++) {
			if(str[i]=='b') 
			{
				flag=1;
				continue;
			}
			else if(flag==0 && (str[i]=='a')) 
				continue; 
			else if(str[i]=='b')
				continue; 
			else if((flag==1)&&(str[i+1]=='\0'))
			{ 
				printf("String Accepted");
				break;
			}
			else
			{ 
				printf("String Rejected");
				break;
			}
		}
	}
    else if(str[0]=='b') 
	{
		flag=1;
		for (i=1;str[i-1]!='\0';i++) {
			if(str[i]=='b') 
			{
			    flag=1;
				continue;
			} 
			else if(str[i]=='a'&& (flag==1)&&(str[i+1]=='\0')) 
			{
			  	printf("String Accepted"); 
				break;
			}
			else 
			{
				printf("String Rejected");
				break;
			}
		}
	}	
return 0;
}
