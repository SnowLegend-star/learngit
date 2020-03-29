#include <stdio.h>
#include<string.h>
#include<math.h>
int main()
{  

	int a[1000],b,d=0,i,k,n;
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);

	for(i=1;i<=n;i++){
		b=a[i];
	if(b<k) {
		for(;b<k;){
		i++;
		b=b+a[i];}
	}
	d++;
	b=0;
	}

printf("%d",d);
return 0;
}

