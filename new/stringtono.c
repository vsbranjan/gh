#include<stdio.h>
#include<string.h>
int main()
{
char inp[100],toc[20][20];
int i,j=0,k=0,n=0,res=0;
printf("enter string: ");
gets(inp);
n=strlen(inp);
n++;
for(i=0;i<n;i++)
{
if(inp[i]!=' '&&inp[i]!='\0')
{
toc[j][k]=inp[i];
k++;
}
else
{
toc[j][k]='\0';
j++;
k=0;
}
}
n=0;
for(i=0;i<j;i++)
{
if(strcmp(toc[i],"ten")==0)
n=10;
else if(strcmp(toc[i],"eleven")==0)
n=11;
else if(strcmp(toc[i],"twelve")==0)
n=12;
else if(strcmp(toc[i],"therteen")==0)
n=13;
else if(strcmp(toc[i],"fourteen")==0)
n=14;
else if(strcmp(toc[i],"fifteen")==0)
n=15;
else if(strcmp(toc[i],"sixteen")==0)
n=16;
else if(strcmp(toc[i],"seventeen")==0)
n=17;
else if(strcmp(toc[i],"eighteen")==0)
n=18;
else if(strcmp(toc[i],"ninteen")==0)
n=19;
else if(strcmp(toc[i],"twenty")==0)
n=20;
else if(strcmp(toc[i],"thirty")==0)
n=30;
else if(strcmp(toc[i],"forty")==0)
n=40;
else if(strcmp(toc[i],"fifty")==0)
n=50;
else if(strcmp(toc[i],"sixty")==0)
n=60;
else if(strcmp(toc[i],"seventy")==0)
n=70;
else if(strcmp(toc[i],"eighty")==0)
n=80;
else if(strcmp(toc[i],"ninety")==0)
n=90;
else if(strcmp(toc[i],"one")==0)
n+=1;
else if(strcmp(toc[i],"two")==0)
n+=2;
else if(strcmp(toc[i],"three")==0)
n+=3;
else if(strcmp(toc[i],"four")==0)
n+=4;
else if(strcmp(toc[i],"five")==0)
n+=5;
else if(strcmp(toc[i],"six")==0)
n+=6;
else if(strcmp(toc[i],"seven")==0)
n+=7;
else if(strcmp(toc[i],"eight")==0)
n+=8;
else if(strcmp(toc[i],"nine")==0)
n+=9;
else if(strcmp(toc[i],"lakh")==0)
{
res=res+n*100000;
n=0;
}
else if(strcmp(toc[i],"thousand")==0)
{
res=res+n*1000;
n=0;
}
else if(strcmp(toc[i],"hundred")==0)
{
res=res+n*100;
n=0;
}
}
res+=n;
printf("\nno is = %d\n",res);
return 0;
}
