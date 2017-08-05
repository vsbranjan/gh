#include<stdio.h>
int c;
int main(void)
 {
    int pid;     // declare pid variable it shows process id.
    extern c;
    c=10;
    if((pid=fork())==0)   // if a new child process is created then it will execute execlp system call .
      {
          execlp("ls","ls","-1",NULL);   //giving the shell a command to execute which is ls -1.
          printf("Child-c:%de\n",c);	//exec() functions return only if an error has occurred than it print value of c
          c*=3;
          printf("Exec failed\n");	//print exec failed
       }
     else
       {
           c+=3;
           printf("Parent-c:%d\n",c);	//in parant process print the modifie value of c
       }
     exit(0);
  }
