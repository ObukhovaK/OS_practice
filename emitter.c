/*
 ============================================================================
 Name        : emitter.c
 Author      : Obukhova
 Version     :
 Copyright   : copyleft
 Description : sends signal codes to chosen PID
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  // если три аргумента
  if (argc == 3)
  {
    // проверяем на поданный сигнал. Если сигнал SIGUSR1 или SIGUSR2, то выполняем отправку
    if ((strcmp(argv[2], "SIGUSR1") == 0) || (strcmp(argv[2], "SIGUSR2") == 0))
    {
      // получаем pid из аргументов
      int pid = atoi(argv[1]);
      int sig;
      // определяем код сигнала, int
      if ((strcmp(argv[2], "SIGUSR1") == 0))
      {
        sig = 10;
      }
      else
      {
        sig = 12;
      }
      // отправляем сигнал
      kill(pid, sig);
      printf("Signal sended.\n");
    }
    // иначе не отправляем ничего, ошибка
    else
    {
      printf("Argumets error.\n");
    }
  }
  // если больше 3 аргументов
  else if (argc > 3)
  {
    printf("Too many arguments.\n");
  }
  // если меньше 3  аргументов
  else
  {
    printf("Not enough arguments.\n");
  }
}
