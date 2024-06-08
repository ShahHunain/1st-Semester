#include<stdio.h>
#include<conio.h>
void main(void) {
    int n;
    int sum1=0, sum2=0;

    printf("\t23k-3032  SHAH HUNAIN\n\n\n");
    printf("Enter a number of how many to find Ramanujan-Hardy Numbers : \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                for (int l = 1; l <= n; l++) {
                    sum1 = i * i * i + j * j * j;
                    sum2 = k * k * k + l * l * l;
                    if (sum1 == sum2 && i != j && i != k && i != l && j != k && j != l && k != l) {
                        printf("Ramanujan-Hardy Number: %d = %d^3 + %d^3 = %d^3 + %d^3\n", sum1, i, j, k, l);
                    }
                }
            }
        }
    }

}

