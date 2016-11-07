#include <stdio.h>
int seqsearch(int, const int*, int);
int main(){
	int n, x, i;
	printf("배열 크기 입력 : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("a[%d] 입력 : ",i);
		scanf("%d",&a[i]);
	}
	printf("검색할 수 입력 : ");
	scanf("%d",&x);
	printf("%d는 a[%d]에 있습니다.\n",x,seqsearch(n,a,x));
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
