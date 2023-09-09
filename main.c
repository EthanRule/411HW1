#include <stdio.h>
#include <omp.h>
#include <mpi.h>

#define __DEBUG__

int main(int argc, char *argv[])
{
	int rank, p;

	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &p);

	printf("my rank=%d\n", rank);
	printf("Rank=%d: number of processes =%d\n", rank, p);

#ifdef __DEBUG__
	while(1) {
	}
#endif

	MPI_Finalize();
	return 0;
}

