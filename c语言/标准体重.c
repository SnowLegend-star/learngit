#include<stdio.h>
main(){
	char a,m,f;int h,w;float b;
	printf("请输入你的性别(m/f)，身高cm，体重kg：\n");
	scanf("%c,%d,%d",&a,&h,&w);
	if(a=='m')
	{b=(h-100)*0.9;
	if (w>=0.9*b&&w<=1.1*b)
	   printf("您的标准体重是%.2fkg\n您是标准体重。",b);
	else if (w>1.1*b&&w<1.2*b)
	printf("您的标准体重是%.2fkg\n您超重了。",b);
	else if(w>1.2*b&&w<1.3*b)
	printf("您的标准体重是%.2fkg\n您属于轻度肥胖。",b);
	else if(w>1.3*b&&w<1.5*b)
	printf("您的标准体重是%.2fkg\n您属于中度肥胖。",b);
	else if(w>1.5*b)
	printf("您的标准体重是%.2fkg\n您属于重度肥胖。",b);
	else 
	printf("您的标准体重是%.2fkg\n您偏瘦。",b);
	}
	if(a=='f'||a=='F')
	{b=(h-100)*0.9-2.5;
	if (w>=0.9*b&&w<=1.1*b)
	   printf("您的标准体重是%.2fkg\n您是标准体重。",b);
	else if (w>1.1*b&&w<1.2*b)
	printf("您的标准体重是%.2fkg\n您超重了。",b);
	else if(w>1.2*b&&w<1.3*b)
	printf("您的标准体重是%.2fkg\n您属于轻度肥胖。",b);
	else if(w>1.3*b&&w<1.5*b)
	printf("您的标准体重是%.2fkg\n您属于中度肥胖。",b);
	else if(w>1.5*b)
	printf("您的标准体重是%.2fkg\n您属于重度肥胖。",b);
	else 
	printf("您的标准体重是%.2fkg\n您偏瘦。",b);
	
	}
	
}