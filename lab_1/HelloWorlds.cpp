#include <stdio.h>
#include <omp.h>

int helloWorlds() {
    int i;
    printf("Hello World\n");
    for(i=0;i<6;i++)
        printf("Iter:%d\n",i);

    printf("GoodBye World\n");
}

int test(){
    int i;
    printf("Max threads : %d\n",  omp_get_max_threads());

#pragma omp parallel
    printf("Thread number : %d\n",  omp_get_thread_num());

#pragma omp parallel
#pragma omp for
    for(i=0;i<6;i++)
        printf("Iter:%d, thread:%d\n",i,omp_get_thread_num());
    printf("GoodBye World\n");

    return 0;
}