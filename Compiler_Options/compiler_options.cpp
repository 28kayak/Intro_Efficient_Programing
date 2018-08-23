#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

int main(int argc, char const *argv[])
{
	const int loop = 65536;
	const int n = 65536;

	volatile float a = (float) rand();
	volatile float b = (float) rand();
	volatile float c = (float) rand();	

	float x[n];
	float y[n];

	for (int i = 0; i < n; ++i)
	{
		x[i] = (float) rand();
	}

	//below main calculation 
	clock_t start_time = clock();

	#pragma omp parallel for 

	for (int j = 0; j < loop; ++j)
	{
		for (int i = 0; i < n; ++i)
		{
			y[i] = a * x[i] + b * x[i] + c * x[i];
		}
	}

	clock_t end_time = clock();
	float etime = (end_time - start_time) / CLOCKS_PER_SEC;

	printf("Elapse Time: %15.7f\n", etime);

	return 0;
}