/*
 ============================================================================
 Name        : task_one-one.c
 Author      : Obukhova
 Version     :
 Copyright   : copyleft
 Description : shows PID and parent PID
 ============================================================================
 */


#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    printf("Current PID is: %d\nParent PID is: %d\n", getpid(), getppid());
    return 0;
}
