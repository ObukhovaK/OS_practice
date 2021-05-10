Запускаем приёмник:

gcc receiver.c -o r && ./r

ОТправляем сигнал:

gcc emitter.c -o e && ./e <PID> <SIGNAL>


PID - число, которое отобразилось в консоли после запуска приёмника
SIGNAL - значение: ( SIGUSR1 | SIGUSR2 )
