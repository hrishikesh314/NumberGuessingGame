#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

int number,guess,ngusses=1;
srand(time(0));
number=rand()%100+1;//generates a random Number between 1 to 100
do
{
    printf("enter the Number betweeen 1 to 100\n");
    scanf("%d",&guess);
    if(guess>number)
    {
        printf("lower number please\n");

    }
    else if (guess<number)
    {
        printf("higher Number please\n");

    }
    else
    {
        printf("you have guessed it in %d attempets \n",ngusses);
        
    }
    ngusses++;
} while (guess!=number);

return 0;
}
