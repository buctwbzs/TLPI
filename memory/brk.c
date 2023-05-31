#include <unistd.h>
#include<stdio.h>

#define MAX 1024;

int main(int argc, char const *argv[])
{
    int * p= sbrk(0);
    int *old = p;

    printf("%d\n", p);
    
    return 0;
}
