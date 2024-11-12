// Write a C program to count total number of notes in given amount
#include<stdio.h>

int main(){
    int amount , note_2000, note_500,note_200,note_100,note_50,note_20,note_10,note_5,note_2,note_1;
    int remaining_bal,note_count=0;
    printf("Enter Amount : ");
    scanf("%d",&amount);

    if(amount>=2000){
        note_2000=amount/2000;
        remaining_bal=amount-(note_2000*2000);
        note_count+=note_2000;
        printf("\n Total number of 2000 notes = %d", note_2000);
    }

    if (remaining_bal >= 500)
    {
        note_500 = remaining_bal / 500;
        remaining_bal = remaining_bal - (note_500 * 500);
        note_count += note_500;
        printf("\n Total number of 500  notes = %d", note_500);
    }
    if (remaining_bal >= 200)
    {
        note_200 = remaining_bal / 200;
        remaining_bal = remaining_bal - (note_200 * 200);
        note_count += note_200;
        printf("\n Total number of 200  notes = %d", note_200);
    }
    if(remaining_bal>=100){
        note_100=remaining_bal/100;
        remaining_bal=remaining_bal-(note_100*100);
        note_count+=note_100;
        printf("\n Total number of 100  notes = %d", note_100);
    }
    if (remaining_bal>=50)
    {
        note_50=remaining_bal/50;
        remaining_bal=remaining_bal-(note_50*50);
        note_count+=note_50;
        printf("\n Total number of 50   notes = %d", note_50);
    }
    if (remaining_bal >= 20)
    {
        note_20 = remaining_bal / 20;
        remaining_bal = remaining_bal - (note_20 * 20);
        note_count += note_20;
        printf("\n Total number of 20   notes = %d", note_20);
    }
    if (remaining_bal >= 10)
    {
        note_10 = remaining_bal / 10;
        remaining_bal = remaining_bal - (note_10 * 10);
        note_count += note_10;
        printf("\n Total number of 10   notes = %d", note_10);
    }
    if (remaining_bal >= 5)
    {
        note_5 = remaining_bal / 5;
        remaining_bal = remaining_bal - (note_20 * 5);
        note_count += note_5;
        printf("\n Total number of 5    notes = %d", note_5);
    }
     if (remaining_bal >= 2)
    {
        note_2 = remaining_bal / 2;
        remaining_bal = remaining_bal - (note_2 * 2);
        note_count += note_2;
        printf("\n Total number of 2    notes = %d", note_2);
    }
    if (remaining_bal >= 1)
    {
        note_1 = remaining_bal / 1;
        remaining_bal = remaining_bal - (note_1 * 1);
        note_count += note_1;
        printf("\n Total number of 1    notes = %d", note_1);
    }

    printf("\n Total number of notes = %d ",note_count);
    printf("\n Total amount= %d",amount);
    
    
    
    
    
    
    
    
    
    

//we can also print like this , this show only available notes not all notes 
    // if (note_2000 > 0)
    //     printf("2000: %d\n", note_2000);
}
