#include<stdio.h>
int main()
{
    double basicBill=0.0, taxRate=0.10, totalBill;
    int remGBs, totalGBs;
    
    printf("Enter the number of GBs: \n");
    scanf("%d", &totalGBs);
    remGBs = totalGBs;
    
    if(remGBs > 0){
        if(remGBs >= 100){
            basicBill += 100 * 2.0;
            remGBs -= 100;
        } else {
            basicBill += remGBs * 2.0;
            remGBs = 0;
        }
    }
    
    if(remGBs > 0){
        if(remGBs >= 100){
            basicBill += 100 * 1.5;
            remGBs -= 100;
        } else {
            basicBill += remGBs * 1.5;
            remGBs = 0;
        }
    }
    
    if(remGBs > 0){
        if(remGBs >= 200){
            basicBill += 200 * 1.0;
            remGBs -= 200;
        } else {
            basicBill += remGBs * 1.0;
            remGBs = 0;
        }
    }
    
    if(remGBs > 0){
        basicBill += remGBs * 0.5;  
        remGBs = 0;
    }
    
    totalBill = basicBill + (basicBill * taxRate); 
    printf("Your total bill after tax is: %.3lf\n", totalBill);
    
    return 0;
}
