					
#include<stdio.h>
struct employee
{
	char emp_name[50];
	int emp_wages;
	float days,basic_pay,hra,net_pay;
};
int main()
{
	int n,i;
	scanf("%d",&n);
	struct employee e[n];
	for(i=0;i<n;i++)
	{
		scanf("%s",e[i].emp_name);
		scanf("%d %f",&e[i].emp_wages,&e[i].days);
		e[i].basic_pay=e[i].emp_wages*e[i].days;
		e[i].hra=e[i].basic_pay * 0.12;
		e[i].net_pay=e[i].hra+e[i].basic_pay;

	}
	for(i=0;i<n;i++)
	{
		printf("Name: %s\nBasicPay: %f\nHRA:%f\nNetPay:%f\n",e[i].emp_name,e[i].basic_pay,e[i].hra,e[i].net_pay);
	}

}

		