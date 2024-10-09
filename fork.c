// Ilie Dumitru
#include<stdio.h>
#include<unistd.h>

pid_t UTIL_FORK(void)
{
	pid_t res=fork();
	if(res)
	{
		printf("%d %d\n", getpid(), res);
		fflush(stdout); // Pentru a nu fi nevoie de sincronizare manuala.
		// Daca ceva nu merge sugerez adaugarea sincronizarii interproces.
	}
	return res;
}

#define fork UTIL_FORK

int main(int argc, char* argv[])
{
	// Pune codul intre comentariu asta si urmatorul

	int i, j;
	for(i=0;i<2;++i)
		for(j=i;j>0;--j)
			fork();

	// Pune codul intre comentariu asta si precedentul

	return 0;
}

#undef fork
