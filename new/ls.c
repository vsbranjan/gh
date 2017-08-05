#include <stdio.h>
#include<sys/types.h>
 #include <sys/stat.h>
#include<fcntl.h>
 #include<unistd.h>
 #include <dirent.h>
void main() 
{ 
DIR *dp; 
struct dirent *dirp; 
dp=opendir("."); 
while((dirp=readdir(dp))!=NULL) 
{
 if(dirp->d_ino==0) 
continue;
 else 
printf("%s \n",dirp->d_name); 
}
 }
