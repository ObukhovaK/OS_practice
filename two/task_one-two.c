/*
 ============================================================================
 Name        : task_one-two.c
 Author      : Obukhova
 Version     :
 Copyright   : copyleft
 Description : copies itself, shows PID and parent PID
 ============================================================================
 */


#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
    switch (fork())
    {
    case 0:
        printf("Hello from child, my PID is: %d\n", getpid());
        break;
    default:
        printf("Hello from parent, my PID is: %d\n", getpid());
        break;
    }
    return 0; 
}