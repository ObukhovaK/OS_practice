/*
 ============================================================================
 Name        : task_one-three_child.c
 Author      : Obukhova
 Version     :
 Copyright   : copyleft
 Description : copies itself, shows PID
 ============================================================================
 */


#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    printf("Hello from child.c\n");
    printf("PID of new process is: %d\n", getpid());
    return 0;
}
