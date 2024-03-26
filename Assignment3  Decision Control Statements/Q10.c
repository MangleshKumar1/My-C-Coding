// 10. Write a program which takes the cost price and selling price of a product from the user.Now calculate and print profit or loss percentage
#include<stdio.h>
int main()
{
    float cost, sell, profitperc, lossperc;
    printf("Enter cost price:\n");
    scanf("%d", &cost);
    printf("Enter selling price:\n");
    scanf("%d", &sell);

    if(sell>cost){
        profitperc = ((sell-cost)/cost)*100;
        printf("%.2f %% as profit %% ", profitperc);
    }else if(sell<cost){
        lossperc = ((cost-sell)/cost)*100;
        printf("%.2f %% as loss %%", lossperc);
    }else{
        printf("no loss or profit");
    }
}