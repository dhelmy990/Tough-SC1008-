#include <stdio.h>
#include <string.h>
void maxCharToFront(char *str);
int main()  
{
   char str[80], *p;
    
   printf("Enter a string: \n");
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0';  
   printf("maxCharToFront(): ");   
   maxCharToFront(str);  
   puts(str);
   return 0;
}
void maxCharToFront(char *str)  
{
   /* Write your code here */
   int i = 0;
   char *ori = str;
   char *addr =  str;
    char max = '\0';
   do
   {
       if (max < *str)
       {
           max = *str;
           addr = str;
       }
   }
   while (*++str != '\0');
   
   *--ori = max;
   
   for(; addr > ori; addr--)
   {
       *addr = *(addr - 1);
   }
}