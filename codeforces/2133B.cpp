#include <stdio.h>
void swap(long long *a, long long *b){
    long long temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int partition(long long a[], long long left, long long right){
    long long pivot=a[right];
    long long i=left-1,k;
    for (k=left;k<right;k++){
        if (a[k]<pivot){
            i++;
            swap(&a[i],&a[k]);
        }
    }
    swap(&a[i+1],&a[right]);
    return i+1;
}

void quicksort(long long a[], long long left, long long right){
    if (left>=right){
        return;
    }
    long long p=partition(a, left, right);
    quicksort(a, left, p-1);
    quicksort(a, p+1, right);
}
//codeforces 2133B
int main(){
	int t; scanf("%d",&t);
	while (t--){
		int n, i;
		scanf("%d",&n);
		long long a[n];
		for (i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		quicksort(a,0,n-1);
		long long emerald=0;
		for (i=n-1;i>=0;i-=2){  //tle
			emerald+=a[i];
		}
		printf("%lld\n", emerald);
	}
	return 0;
}

