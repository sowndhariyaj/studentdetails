#include<stdio.h>
int main()
{
	char name[15];
	char nominee[15];
	int nominee_age[15];
	int nominee_mobile;
	char nominee_email[15];
	scanf("%s",name);
	scanf("%s",nominee);
	scanf("%d",&nominee_age);
	scanf("%d",&nominee_mobile);
	scanf("%s",nominee_email);
	printf("%s",name);
	printf("%s",nominee);
	printf("%d",nominee_age);
	printf("%d",nominee_mobile);
	printf("%s",nominee_email);
}
