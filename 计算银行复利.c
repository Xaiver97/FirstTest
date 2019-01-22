#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	double amount = x * (1 + 0.033)* (1 + 0.033)* (1 + 0.033);
    printf("三年后取出的本息合计为%f", amount);
    return 0;
 } 
