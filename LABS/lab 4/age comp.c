// age comp
#include<stdio.h>
int main(void)
{
    int age1;
    printf("Enter age of Alishba: ");
    scanf("%d",&age1);
    int age2;
    printf("\nEnter age of 	Daniya: ");
    scanf("%d",&age2);
    int age3;
    printf("\nEnter age of Amber: ");
    scanf("%d",&age3);
    if(age1<age3 && age1<age2 ){
        printf("Alishba is youngest");
    }else if(age2<age3 && age2<age1 ){
        printf("Daniya is youngest");
    }else if(age3<age2 && age3<age1 ){
        printf("Amber is youngest");
    }
}
