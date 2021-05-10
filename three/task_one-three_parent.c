/*
 ============================================================================
 Name        : task_one-three_child.c
 Author      : Obukhova
 Version     :
 Copyright   : copyleft
 Description : copies itself, shows parent PID, says Hello
 ============================================================================
 */


#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    printf("Hello from parent.c\n");
    printf("PID of old process is: %d\n", getpid());
    char *args[] = {"Hello", "World", NULL};
    execv("./child", args);
    return 0;
}
