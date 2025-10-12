#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>  
#include <time.h>
#define MAX 6
const int def = 0;//asto when reset

int Cylinder[MAX];

void reset(){//after every round
    for(int i = 0 ; i < MAX;i++){
        Cylinder[i] = def;
    }
}

void GiveBul(int i){//to give bullets in any two chamber
    Cylinder[i] = 1;
}

void display(){//for now just display later for ascii
    for(int i=0;i<MAX;i++){
        printf("%d ",Cylinder[i]);
    }
}

void fire(){
    display();//Add other stuff later
}
void reload(void){
    char choice;
    srand(time(NULL));
    int countwt = 0;
    bool y = true;
    while(y == true){
        reset(); // make sure cylinder is clear first
        int countwt = 0;
        while(countwt < 2){
            int chNum = rand() % MAX; // random chamber
            if(Cylinder[chNum] == 0){ // only place if empty
                GiveBul(chNum);
                countwt++;
            }
        }
        fire();
        printf("\nDo you want to continue:(y/n) ");scanf(" %c",&choice); //will play later in the game 
        if(choice=='Y'||choice=='y'){
            countwt = 0;
        }else if(choice=='N'||choice=='n'){
            y = false;
            printf("exit successful");
        } else {
            printf("ERR:INVALID INPUT > EXITING SYS\n");
            exit(1);
        }
    }
}

int main(void) {
    printf("=== RUSSIAN ROULETTE ===\n");
    reload();
    return 0;
}