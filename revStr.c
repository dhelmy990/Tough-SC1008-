#include <stdio.h>
#include <string.h>
void rStrReverse1(char *s);
int main()
{
 char str[40], *p;

 printf("Enter a string: \n");
 fgets(str, 40, stdin);
 if (p=strchr(str,'\n'))
 *p = '\0';
 rStrReverse1(str);
 printf("rStrReverse1(): %s", str);
 return 0;
}
void rStrReverse1(char *s)
{
    static int length = 0;
	
	if (*s != '\0')
	{
	    length++;
	    return rStrReverse1(++s);
	}
	else 
	{
	    s--; length--;
	    int i;
	    for (i = 0; i < length; i++, length--)
	    {
	        char placeholder = *(s - length);
	        *(s - length) =  *(s - i);
	        *(s - i) = placeholder;
	    }
	}
}

    