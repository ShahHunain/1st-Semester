#include<stdio.h>
#include<conio.h>
void main(void){
    int nop, noi, sum, highscore, noc, nohc;
    float average;
    printf("\t 23k-3032  SHAH HUNAIN\n\n\n");
    printf("Enter the number of players: \n");
    scanf("%d", &nop);

    printf("Enter the number of innings played by the players: \n");
    scanf("%d", &noi);

    int record[nop][noi];

    printf("Now enter the batting performance for each batsman in each inning: \n");
    for (int i = 0; i < nop; i++) {
        for (int j = 0; j < noi; j++) {
            scanf("%d", &record[i][j]);
        }
    }

    for (int i = 0; i < nop; i++) {
        sum = 0;
        for (int j = 0; j < noi; j++) {
            sum = sum + record[i][j];
        }
        printf("The total run scored by batsman %d is: %d \n", i + 1, sum);
    }

    printf("\n");

    for (int i = 0; i < nop; i++) {
        sum = 0;
        average = 0;
        for (int j = 0; j < noi; j++) {
            sum = sum + record[i][j];
        }
        average = sum / noi;
        printf("The average runs scored by batsman %d is: %.2f \n", i + 1, average);
    }

    printf("\n");

    for (int i = 0; i < noi; i++) {
        highscore = 0;
        for (int j = 0; j < nop; j++) {
            if (highscore < record[j][i]) {
                highscore = record[j][i];
            }
        }
        printf("The highest score in inning %d is: %d \n", i + 1, highscore);
    }

    printf("\n");

    noc = 0;
    for (int i = 0; i < nop; i++) {
        for (int j = 0; j < noi; j++) {
            if (record[i][j] >= 100) {
                noc++;
            }
        }
    }
    printf("The number of centuries made are: %d \n", noc);

    printf("\n");

    nohc = 0;
    for (int i = 0; i < nop; i++) {
        for (int j = 0; j < noi; j++) {
            if (record[i][j] >= 50 && record[i][j] < 100) {
                nohc++;
            }
        }
    }
    printf("The number of half centuries made are: %d \n", nohc);
}
