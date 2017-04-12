#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int swap(int ram, int num){
    int temp;
    temp = num;
    num = ram;
    ram = temp;
    return;
}

int main (){
    int num;
    int ans=0;
    int ran=0;
    //char change[256];
    int change;
    printf("Welcome number game\n");
    printf("Gamer choose number: ");
    ans = (rand() % 100) + 1;
    scanf("%d",&num);
    printf("Your change number(y=0/n=1): ");
    scanf("%d",&change);
    //scanf("%s",change);

    if(change == 0){//(change == "y"){
        if(ans == num){
            ran = (rand() % 100) + 1;
            if(ran == ans){
                ran = (rand() % 100) + 1;
            }
            printf("I have number= %d\n",ran);
            swap(ran,num);
            printf("You lose!!!\n");
        }
        else{
            swap(ans,num);
            printf("You Win ^_^\n");
        }
    }
    else if(change == 1){
        if(num == ans){
            printf("You Win ^o^\n");
        }
        else {
            printf("You lose!!\n");
        }
    }
    else {}

    printf("answer is = %d",ans);
    getch();
    return 0;
}
