#include<stdio.h>

int volume(int l, int w, int h);

void main(void){
    int n,i;
    printf("Please enter the number of boxes: ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        int l, w, h;
        printf("Enter dimensions of box %d (length-width-height): ",i+1);
        scanf("%d %d %d",&l,&w,&h);

        if (h<41){
            int vol=volume(l,w,h);
            printf("\nVolume of box %d is: %d\n",i+1,vol);
            printf("The box can be transported\n\n");
        } else{
            printf("Box %d cannot be transported\n\n",i+1);
        }
    }
}
int volume(int l, int w, int h){
    int answer=l*w*h;
    return answer;
}
