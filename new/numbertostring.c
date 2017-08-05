#include<stdio.h>
#include<string.h>
void main()
{
int n,m,d,i=0,j;
char toc[20][20];
printf("enter no: ");
scanf("%d",&n);
m=n;
for(j=0;m>0;j++)
{
d=m%10;
m/=10;
if(j==2&&d!=0)
strcpy(toc[i++],"hundred");
else if(j==3&&d!=0)
strcpy(toc[i++],"thousand");
else if(j==4&&d!=0&&strcmp(toc[i-2],"thousand")!=0)
strcpy(toc[i++],"thousand");
else if(j==5&&d!=0)
strcpy(toc[i++],"lakh");
else if(j==6&&d!=0&&strcmp(toc[i-2],"lakh")!=0)
strcpy(toc[i++],"lakh");
if(d==1&&(j==0||j==2||j==3||j==5))
strcpy(toc[i++],"one");
else if(d==2&&(j==0||j==2||j==3||j==5))
strcpy(toc[i++],"two");
else if(d==3&&(j==0||j==2||j==3||j==5))
strcpy(toc[i++],"three");
else if(d==4&&(j==0||j==2||j==3||j==5))
strcpy(toc[i++],"four");
else if(d==5&&(j==0||j==2||j==3||j==5))
strcpy(toc[i++],"five");
else if(d==6&&(j==0||j==2||j==3||j==5))
strcpy(toc[i++],"six");
else if(d==7&&(j==0||j==2||j==3||j==5))
strcpy(toc[i++],"seven");
else if(d==8&&(j==0||j==2||j==3||j==5))
strcpy(toc[i++],"eight");
else if(d==9&&(j==0||j==2||j==3||j==5))
strcpy(toc[i++],"nine");
else if(d==1&&(j==1||j==4||j==6||j==8)&&strcmp(toc[i-1],"one")==0)
strcpy(toc[i-1],"eleven");
else if(d==1&&(j==1||j==4||j==6||j==8)&&strcmp(toc[i-1],"two")==0)
strcpy(toc[i-1],"twelve");
else if(d==1&&(j==1||j==4||j==6||j==8)&&strcmp(toc[i-1],"three")==0)
strcpy(toc[i-1],"therteen");
else if(d==1&&(j==1||j==4||j==6||j==8)&&strcmp(toc[i-1],"four")==0)
strcpy(toc[i-1],"fourteen");
else if(d==1&&(j==1||j==4||j==6||j==8)&&strcmp(toc[i-1],"five")==0)
strcpy(toc[i-1],"fifteen");
else if(d==1&&(j==1||j==4||j==6||j==8)&&strcmp(toc[i-1],"six")==0)
strcpy(toc[i-1],"sixteen");
else if(d==1&&(j==1||j==4||j==6||j==8)&&strcmp(toc[i-1],"seven")==0)
strcpy(toc[i-1],"seventeen");
else if(d==1&&(j==1||j==4||j==6||j==8)&&strcmp(toc[i-1],"eight")==0)
strcpy(toc[i-1],"eighteen");
else if(d==1&&(j==1||j==4||j==6||j==8)&&strcmp(toc[i-1],"nine")==0)
strcpy(toc[i-1],"ninteen");
else if(d==1&&(j==1||j==4||j==6||j==8))
strcpy(toc[i++],"ten");
else if(d==2&&(j==1||j==4||j==6||j==8))
strcpy(toc[i++],"twenty");
else if(d==3&&(j==1||j==4||j==6||j==8))
strcpy(toc[i++],"thirty");
else if(d==4&&(j==1||j==4||j==6||j==8))
strcpy(toc[i++],"fourty");
else if(d==5&&(j==1||j==4||j==6||j==8))
strcpy(toc[i++],"fifty");
else if(d==6&&(j==1||j==4||j==6||j==8))
strcpy(toc[i++],"sixty");
else if(d==7&&(j==1||j==4||j==6||j==8))
strcpy(toc[i++],"seventy");
else if(d==8&&(j==1||j==4||j==6||j==8))
strcpy(toc[i++],"eighty");
else if(d==9&&(j==1||j==4||j==6||j==8))
strcpy(toc[i++],"ninety");
}
for(j=i-1;j>=0;j--)
printf("%s ",toc[j]);
printf("\n");
}
