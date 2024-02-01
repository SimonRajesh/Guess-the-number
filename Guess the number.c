#include<stdio.h>
int main()
{
printf("--------------GUESS THE NUMBER GAME-------------\n\n");
printf("This is the game in which you need to\nfind a number that ×BOT× holds in its \nmind by getting only clues that entered\nnumber is high or low when compared to it...\n\n");
printf("NOTE : Number will be greater than 0\n(>0) and less that 100(<100)\n\n");
printf("-------------------------------------------------");
int random, num, count=0;
srand(time(NULL));
random=rand()%100;
printf("Can you Guess it within 2 attempts\n\n");
while(random!=num)
{
printf("NUMBER : ");
scanf("%d", &num);
count++;
printf("\n%s", num==random?"yah! you got it..":num>random?"you are high.":"you are low.");
printf("\n\nattempt: [ %d ]\n\n",count);
printf("-----------------------------------------------\n");
}
}
