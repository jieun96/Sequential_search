#include <stdio.h>
#include <time.h>
int seqsearch(int, const int*, int);
int main(){
	int a[3001],n[24];
	int i, j, k;
	long b;
	const long r[24] = {30000000,30000000,20000000,20000000,10000000,10000000,10000000,8000000,8000000,5000000,5000000,2500000,1500000,1500000,1000000,750000,700000,600000,500000,500000,300000,200000,200000,100000};
	for(i = 1; i < 3000; i++)
		a[i] = i;
	for(j = 0; j < 10; j++){
		n[j] = 10*j;
		n[j+10] = 100*(j+1);
	}
	n[20] = 1500;
	n[21] = 2000;
	n[22] = 2500;
	n[23] = 3000;
	printf("    n   totalTime     runTime\n");
	for(k=0;k<24;k++){
		clock_t start,stop;
		start = clock();
		for(b = 1; b<r[k]; b++){
			seqsearch(n[k], a+1, n[k]-1);
		}
		stop = clock();
		clock_t totalTime = stop-start;
		double runTime = (double)totalTime/(double)(r[k]);
		printf(" %4d %11d %11lf\n",n[k],totalTime,runTime);
	}
	return 0;
}
int seqsearch(int n, const int a[], int x){
	int location = 1;
	while(location<=n&&a[location]!=x)
		location++;
	if(location > n)
		location = 0;
	return location;
}
