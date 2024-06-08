#include<stdio.h>
#include<conio.h>
void main(void){

char maze[5][5]={
    {'S', 'O', 'O', 'W', 'W'},
    {'O', 'W', 'O', 'W', 'W'},
    {'W', 'O', 'O', 'W', 'O'},
    {'W', 'W', 'O', 'W', 'O'},
    {'W', 'W', 'O', 'E', 'W'}
                };

int i=0,j=0;

printf("\t23k-3032  SHAH HUNAIN\n\n\n");

while (1){
    if (maze[i][j]=='S' || maze[i][j]=='O'){
        printf("%d,%d   ",i,j);
        j++;
    }
    else if (maze[i][j]=='W'){
        j--;
        i++;
    }
    else if (maze[i][j]=='E'){
        printf("%d,%d   ",i,j);
        break;
    }
}

}
