#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main() {
    fork();
    printf("Killo\n PID=%d\n", getpid());
}