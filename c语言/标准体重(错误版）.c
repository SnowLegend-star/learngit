#include<stdio.h>
main(){
int a,b;float c;
printf("����������������Ƿ���������Ա��1��ʾ�ǣ�0��ʾ�񣩣�"); 
scanf("%d%d",&a,&b);
switch (b){case 1:printf("����˰��");break;}
if(a<=3500)
printf("����˰��");
else if (a>3500&&a<5000)
{c=(a-3500)*0.03;
printf("��˰���Ϊ%.2f",c);
}
else if(a>5000&&a<8000)
{c=1500*0.03+(a-5000)*0.1;
printf("��˰���Ϊ%.2f",c);
}
else (a>8000)
{c=1500*0.03+3000*0.1+(a-8000)*0.2;
printf("��˰���Ϊ%.2f",c);
}

}

