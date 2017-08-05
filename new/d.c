#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int pid[7],status[7];
	pid[0]=getpid();                // PID of process P0
	if((pid[1]=fork())==0)     //p0 creats p1 
	{
		if((pid[3]=fork())==0)   //p1 creats process p3
		{
			if((pid[6]=fork())==0) //if proceess p3 is successfully created  then p3 create child process p6
			{     
				printf("Process P6\n");  //print message process P6
			}
			else
			{
				waitpid(pid[6],&status[6],0);   //else P3 wait for P6  if created process is not child  
				printf("Process P3\n");    // Display message process p3
			}
		}
		else
		{
			waitpid(pid[3],&status[3],0);  // p1 waits for p3 if child process created by p1 is successful
			printf("Process P1\n");
			if((pid[4]= fork())==0)  // p1 create process p4
			{
				printf("Process P4\n");
			}   
		}
	}
	else
	{ 
		waitpid(pid[1],&status[1],0);   //if child created by p0 is not then it wait for p1
		printf("Process P0\n");
		if((pid[2]=fork())==0) 
		{ // P0 creats P2
			if((pid[5]=fork())==0) // p2 create p5
			{
				printf("Process P5\n");
			}
			else
			{
				waitpid(pid[5],&status[5],0);   //p2 waits for p5 if it is not created success ful by p2
				printf("Process P2\n");  
			}
		}
		else
		{
			waitpid(pid[2],&status[2],0);   //p0 waits p2
		}
	}
exit(0); 
}
                
