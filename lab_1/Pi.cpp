#include <stdio.h>
#include <time.h>
#include <omp.h>

double step, x, pi, sum=0.0, start_omp, stop_omp;
int i;
clock_t start, stop;

void run_with_time(long long n_steps, int n_proc, double (*f)(long long, int)){

    sum=0.0;
    start = clock();                // Systemowy pomiar czasu
    start_omp = omp_get_wtime();    // Pomiar czasu rzeczywistego (funkcja OMP)

    pi = (*f)(n_steps,n_proc);

    stop = clock();
    stop_omp = omp_get_wtime();

    printf("Wartosc liczby PI wynosi %15.12f\n",pi);
    printf("Czas przetwarzania wynosi:\n\tSYS : %f sekund\n\tREAL : %f sekund\n\n",((double)(stop - start)/ CLOCKS_PER_SEC), stop_omp-start_omp);
}

double pi_1(long long n_steps, int n_proc){
	step = 1./(double)n_steps;

	for (i=0; i < n_steps; i++)
	{
		x = (i + .5)*step;
		sum = sum + 4.0/(1.+ x*x);
	}
	
	return sum*step;
}
double pi_2(long long n_steps, int n_proc){
    step = 1./(double)n_steps;

#pragma omp parallel for reduction(+:sum)
    for (i=0; i < n_steps; i++)
    {
        x = (i + .5)*step;
        sum = sum + 4.0/(1.+ x*x);
    }

    return sum*step;
}
double pi_3(long long n_steps, int n_proc){
    return 3;
}
double pi_4(long long n_steps, int n_proc){
    return 4;
}
double pi_5(long long n_steps, int n_proc){
    return 5;
}
double pi_6(long long n_steps, int n_proc){
    return 6;
}
double pi_7(long long n_steps, int n_proc){
    return 7;
}
