// Write a C program to input marks of five subjects Physics, Chemistry, Biology,
//     Mathematics and Computer.Calculate percentage and grade according to
//             following : Percentage >= 90 % : Grade A
//    Percentage >= 80 % : Grade B
//    Percentage >= 70 % : Grade C
//    Percentage >= 60 % : Grade D
//    Percentage >=  40 % : Grade E
//    Percentage < 40 % : Grade F

#include <stdio.h>
int main()
{
    int i, n, obt_marks = 0, total_marks = 0;
    char grade;
    float percentage;
    printf("Enter Size of Array : ");
    scanf("%d", &n);
    int subject[n];
    total_marks = 100 * n;

    for (i = 0; i < n; i++)

    {
        printf("Enter marks of Subject[%d] : ", i + 1);
        scanf("%d", &subject[i]);
        obt_marks += subject[i];
    }

    printf("\n*********** MARKS ************* \n");
    printf("---------------------------------\n");
    printf("|  SUBJECT    |      MARKS      |\n");
    printf("---------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("| SUBJECT[%d]  |       %d       |\n", i + 1, subject[i]);
        printf("---------------------------------\n");
    }
    percentage = ((float)obt_marks / total_marks) * 100;

    // for checking grade
    if (percentage >= 90)
    {
        grade = 'A';
    }
    else if (percentage >= 80)
    {
        grade = 'B';
    }
    else if (percentage >= 70)
    {
        grade = 'C';
    }
    else if (percentage >= 60)
    {
        grade = 'D';
    }
    else if (percentage >= 40)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }

    printf("\n\n********************* RESULT *********************** \n");
    printf("-----------------------------------------------------\n");
    printf("TOTAL MARKS : %d \t |\tOBTAIN MARKS : %d", total_marks, obt_marks);
    printf("\n-----------------------------------------------------\n");
    printf("PERCENTAGE : %.2f% % \t |\t  GRADE :  %c", percentage, grade);
    printf("\n-----------------------------------------------------\n");
}