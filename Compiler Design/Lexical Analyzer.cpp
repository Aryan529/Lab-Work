#include<stdio.h>
#include<string.h>

// KEYWORDS
   int isKeyword(char *str,int key)
   {
   	   char *t = "int",*t1 = "char", *t2="float";
	   if( (*str == *t) || (*str == *t1) || (*str == *t2) )
   	  { 
   	    key++;	
	  }
	
	return key;  
   }
// DELIMITERS   
bool isDelimiter(char ch) 
{ 
    if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' ||  ch == '/' || ch == ',' || ch == ';' || ch == '>' ||  ch == '<' || ch == '=' || ch == '(' || ch == ')' ||  ch == '[' || ch == ']' || ch == '{' || ch == '}') 
        return (true); 
    return (false); 
} 
   
// OPERATORS
   int isOperator(char *str,int op)
   {
   	 char *t = "+",*t1="-",*t2="*",*t3="/",*t4=">",*t5 = "<",*t6 ="=";
	 if( (*str == *t) || (*str == *t1) || (*str == *t2) || (*str == *t3) || (*str == *t4) || (*str == *t5) || (*str == *t6))
		 op++;
		 
   	 return op;
   }
   
// IDENTIFIER   
   int isIdenfier(char *str,int id)
   {
   	 	if (str[0] == '0' || str[0] == '1' || str[0] == '2' || str[0] == '3' || str[0] == '4' || str[0] == '5' ||  str[0] == '6' || str[0] == '7' || str[0] == '8' ||  str[0] == '9' || isDelimiter(str[0]) == true) 
        	id=id;
        else
        	id++;

   	 return id;
   }
// END OF STRING   
   int isEOS(char *str,int eos)
   {
   	  char *t = ";";
   	  if(*str == *t)
		eos++;
	
	return eos; 
   }


int main()
{
	int key,id,op,eos;
	char str[100],*token;
	key =0;
	id =0;
	op =0;
	eos = 0;
	printf("Enter the string :: ");
	scanf("%[^\n]%*c",str);
	token = strtok(str," ");
	while(token != NULL)
	{
		key = isKeyword(token,key);
		id =isIdenfier(token,id);
		op = isOperator(token,op);
		eos = isEOS(token,eos);  
		token = strtok(NULL," ");
	}
	
	printf("KEYWORDS:: %d\n",key);
	printf("OPERATORS :: %d\n",op);
	printf("IDENTIFIERS :: %d\n",id);
	printf("EOS :: %d\n",eos);
	
return 0;	
}
