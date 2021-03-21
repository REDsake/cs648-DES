#include <math.h>
#include <stdio.h>

int main()
{
	int i, N = powf(2,20),
	FILE *file_output;
	file_output=fopen("key_out.txt","w+");
	file_outputr(i = 0; i < N; i++)
	{
		fprintf(file_output,"%u%u1%u%u1%u%u%u10%u1%u10%u%u%u11%u%u10%u0%u0001110%u00110001%u11%u0100%u011\n", i/524288%2, i/262144%2, i/131072%2, i/65536%2, i/32768%2, i/16384%2, i/8192%2, i/4096%2, i/2048%2, i/1024%2, i/512%2, i/256%2, i/128%2, i/64%2, i/32%2, i/16%2, i/8%2, i/4%2, i/2%2, i%2);
	}
	return 0;
}

