#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[1000],temp=1,c='*';
    int  i,j,k=0,n;

    //taking input
    printf("Enter  the string : ");
    gets(s);       //read the input string and save it in the character array

    //converting uppercase letters to lowercase letters
    for(i=0;s[i];i++){
        if (s[i] >= 'a' && s[i] <= 'z'){
            continue;
        }
        else
            s[i]= tolower(s[i]);
    }

    for(i=0;s[i];i++)
    {
    	if(!(s[i]==c))
    	{
    		for(j=i+1;s[j];j++)
            {
            	if(s[i]==s[j])
            	   s[j]=c;

		    }
		}
    }

    for(i=0;s[i];i++)
    {
     	s[i]=s[i+k]; //initialize


     	if(s[i]==c)
     	{
     	    //If s[i]  is matched with  ‘*’ then increase the k and decrease the index value i
     	    k++;
     	    i--;
	    }

    }
    printf("Duplicate removed string is: ");

    printf("%s",s);


    return 0;
}
