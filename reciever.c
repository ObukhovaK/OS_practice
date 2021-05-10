/*
 ============================================================================
 Name        : emitter.c
 Author      : Obukhova
 Version     :
 Copyright   : copyleft
 Description : recieves messages from emitter. Prints a message every 2 seconds and changes it if signal has been handled
 ============================================================================
 */


#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <string.h>

char str[40] = "I'm waiting for your signal...\n"; // строка, отправляемая в консоль

// обрабатывает сигналы
void signalHandler(int signalCode)
{
  switch (signalCode)
  {
  case SIGUSR1:
    printf("SIGUSR1 кecieved\n");
    strcpy(str, "Last received signal is SIGUSR1\n"); // прееопределяет строку, отправляемую в консоль
    break;
  case SIGUSR2:
    printf("SIGUSR2 Recieved\n");
    strcpy(str, "Last received signal is SIGUSR2\n");
    break;
  }
}

int main()
{
  // регистрирует сигналы
  signal(SIGUSR1, signalHandler);
  signal(SIGUSR2, signalHandler);
  printf("[ PID: %d ]: Started...\n", getpid());
  while (1)
  {
    printf("%s", str); // выводит строку
    sleep(2);
  }
  return 0;
}
