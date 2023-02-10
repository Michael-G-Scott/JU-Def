#include <stdio.h>
int main(){
	int n,c=0,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int b[n];
	for(i=n-1;i>=0;i--){
		b[c++]=a[i];
	}
	for(i=0;i<n;i++){
		a[i]=b[i];
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}

