#include<stdio.h>
#include<string.h>
int main()
{
char str[100],rev[100];
int i,count=0,j;
 
gets(str);
while(str[count]!=0){
  count++;
}
  j=count-1;
  for (i = 0; i < count; i++) {
rev[i] = str[j];
j--;
  }
  rev[i]='\0';
printf("%s",rev);
return 0;
}
