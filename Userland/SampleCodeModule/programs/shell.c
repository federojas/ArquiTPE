#include <shell.h>
#include <libc.h>
#include <commands.h>

void startShell(){
    shellWelcomeMessage();


    getCPUFeatures(0,0);
}

void shellWelcomeMessage(){
    printf("hola como estas!\n");
}

