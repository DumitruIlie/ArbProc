// Ilie Dumitru
#include<stdio.h>
#include<stdlib.h>
#define NMAX 128

typedef struct
{
	int tt, son;
} edge;

int N;
edge v[NMAX];
int mapping[NMAX+1], mapSz;

void addToMapping(int x)
{
	if(mapSz==NMAX+1)
		return;

	int i;

	for(i=0;i<mapSz;++i)
		if(mapping[i]==x)
			return;

	mapping[mapSz++]=x;
}

int getFromMapping(int x)
{
	int i;

	for(i=0;i<mapSz && x!=mapping[i];++i);

	if(i==mapSz || mapping[i]!=x)
	{
		// Acest mesaj nu ar trebui sa fie vizibil vreodata
		printf("\033[101;97;1mCeva ciudat s-a intamplat, mai mult de %d noduri au fost generate, dar limita de muchii nu a fost atinsa.\033[0m\n", NMAX);
		fflush(stdout);
		abort();
	}

	return i;
}

void remap(void)
{
	int i;

	for(i=0;i<N;++i)
	{
		v[i].tt=getFromMapping(v[i].tt);
		v[i].son=getFromMapping(v[i].son);
	}
}

int main(int argc, char* argv[])
{
	int tt, x, i;

	while(scanf("%d%d", &tt, &x)==2)
	{
		if(N==NMAX)
		{
			printf("\033[101;97;1mLimita de muchii a fost atinsa. Daca aveti nevoie de mai multe sugeram sa cresteti valoarea constantei NMAX din fisierul remap.c. Momentan aceasta valoare este %d.\033[0m\n", NMAX);
			fflush(stdout);
			abort();
		}

		v[N].tt=tt;
		v[N].son=x;
		++N;
	}

	for(i=0;i<N;++i)
	{
		addToMapping(v[i].tt);
		addToMapping(v[i].son);
	}

	remap();

	for(i=0;i<N;++i)
		printf("%d %d\n", v[i].tt, v[i].son);

	return 0;
}
