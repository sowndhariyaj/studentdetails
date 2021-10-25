#include<stdio.h>
int main()
{
        char name[15];
        int rollno;
        char fathername[15];
        char mothername[15];
        int age;
        int mobile_no;
        char email[15];
        char blood_grp[10];
        char address[15];
        int adhar_no;
        scanf("%s",name);
        scanf("%d",&rollno);
        scanf("%s",fathername);
        scanf("%s",mothername);
        scanf("%d",&age);
        scanf("%d",&mobile_no);
        scanf("%s",email);
        scanf("%s",blood_grp);
        scanf("%s",address);
        scanf("%d",&adhar_no);
        printf("Name:%s",name);
        printf("Rollno:%d",rollno);
        printf("Fathername:%s",fathername);
        printf("Mothername:%s",mothername);
        printf("Age:%d",age);
        printf("Mobile Number:%d",mobile_no);
        printf("Email Id:%s",email);
        printf("Blood Group:%s",blood_grp);
        printf("Address:%s",address);
        printf("Adhar number:%d",adhar_no);
}
