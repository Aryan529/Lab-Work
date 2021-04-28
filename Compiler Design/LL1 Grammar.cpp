#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

char a[10];
int top=-1,i;
void error()
{
	printf("Syntax Error");
}

void push(char k[])
{
	for(i=0;k[i]!='\0';i++)
	{
	if(top<9)
		a[++top]=k[i];
	}
}

char TOS()
{
	return a[top];
}

void pop()
{
	if(top>=0)
		a[top--]='\0';
}

void display()
{
	for(i=0;i<=top;i++)
		printf("%c",a[i]);
}

void display1(char p[],int m)
{
	int l;
	printf("\t");
	for(l=m;p[l]!='\0';l++)
		printf("%c",p[l]);
}

char* stack()
{
	return a;
}

int main()
{
char ip[20],r[20],nt,cin;
int ir,ic,j=0,k;
char t[5][6][10]={"$","$","TH","$","TH","$",
"+TH","$","$","e","$","e",
"$","$","FU","$","FU","$",
"e","*FU","$","e","$","e",
"$","$","(E)","$","i","$"};
printf("\nEnter any String(Append with $) ::");
gets(ip);
printf("Stack\tInput\tOutput\n\n");
push("$E");
display();
printf("\t%s\n",ip);
	for(j=0;ip[j]!='\0';)
	{
	if(TOS()==cin)
	{
		pop();
		display();
		display1(ip,j+1);
		printf("\tPOP\n");
		j++;
	}

cin=ip[j];
nt=TOS();
	if(nt=='E')
		ir=0;
	else if(nt=='H')
		ir=1;
	else if(nt=='T')
		ir=2;
	else if(nt=='U')
		ir=3;
	else if(nt=='F')
		ir=4;
	else 
	{
		error();
		break;
	}
	
	if(cin=='+')ic=0;
	else if(cin=='*')
		ic=1;
	else if(cin=='(')
		ic=2;
	else if(cin==')')
		ic=3;
	else if(isalpha(cin))
	{	
		ic=4;
		cin='i';
	}
	else if(cin=='$')
		ic=5;

strcpy(r,strrev(t[ir][ic]));
strrev(t[ir][ic]);
pop();
push(r);
	if(TOS()=='e')
	{
		pop();
		display();
		display1(ip,j);
		printf("\t%c->%c\n",nt,238);
	}
	else
	{
		display();
		display1(ip,j);
		printf("\t%c->%s\n",nt,t[ir][ic]);
	}
	if(TOS()=='$'&&cin=='$')
		break;
	if(TOS()=='$')
	{
		error();
		break;
	}
}
k=strcmp(stack(),"$");
	if(k==0)
		printf("\n Given String is accepted");
	else
		printf("\n Given String is not accepted");
}

