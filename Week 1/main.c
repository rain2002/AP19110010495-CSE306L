#include <stdio.h>
int main(void)
{
	char s[1000];
    scanf("%s",s);
    int state = 1;
       for(int i=0; s[i]!='\0'; i++)
       {
       	 
       	  switch(s[i])
       	  {
       	   case 'a':
       	           if(state==1)
       	              state = 2;
       	            
       	           else if(state==2)
       	               state=3;
       	           else  if(state==4)
       	               state =2 ;
       	           else if(state ==5)
       	               state = 2;
       	            
       	           break;
       	   case 'b' :
       	           if(state==1)
       	               state = 4;
       	             
       	          else  if(state == 4)
       	               state = 5;
       	              
       	          else  if(state == 2)
       	               state = 4;
       	              
       	           else   if(state ==3)
       	               state = 4;
       	           
       	           break;
       	           
       	   default:
       	         printf("Invalid Token");
       	         exit(0);
       	  }

       }
       if(state==3 || state ==5)
           printf("accepted ");
      
       else 
           printf("not accepted");
        printf("\n");
	return 0;
}
