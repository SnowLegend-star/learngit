#include<stdio.h>
main(){
int a,b;float c;
printf("请输入您的收入和是否离退休人员（1表示是，0表示否）："); 
scanf("%d%d",&a,&b);
switch (b){case 1:printf("免纳税！");break;}
if(a<=3500)
printf("免纳税！");
else if (a>3500&&a<5000)
{c=(a-3500)*0.03;
printf("纳税金额为%.2f",c);
}
else if(a>5000&&a<8000)
{c=1500*0.03+(a-5000)*0.1;
printf("纳税金额为%.2f",c);
}
else (a>8000)
{c=1500*0.03+3000*0.1+(a-8000)*0.2;
printf("纳税金额为%.2f",c);
}

}

