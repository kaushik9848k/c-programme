#include<stdio.h>
int main()
{
    float basic,da,ta,hra,others,pf,it,net_salary,DA,TA,HRA,OTHERS,PF,IT;
    printf("enter basic:");
    scanf("%f", &basic);
    printf("enter da:");
    scanf("%f", &da);
    printf("enter ta");
    scanf("%f", &ta);
    printf("enter hra");
    scanf("%f", &hra);
    printf("enter others");
    scanf("%f", &others);
    printf("enter pf");
    scanf("%f", &pf);
    printf("enter it");
    scanf("%f", &it);
    DA=basic*da/100;
    TA=basic*ta/100;
    HRA=basic*hra/100;
    OTHERS=basic*others/100;
    PF=basic*pf/100;
    IT=basic*it/100;
    net_salary=(basic+DA+TA+HRA+OTHERS)-(PF+IT);
    printf("net salary :");
    printf("%0.1f",net_salary);
    return(0);
}
    
    

