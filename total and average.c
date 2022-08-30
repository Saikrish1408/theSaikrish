/*This is program will help you to get the result of total and average of
the number of subjects you have entered*/

#include<stdio.h>
void main()
{
    int no_of_subjects,total=0;
    float average;
    printf("Enter the Number of Subjects: ");
    scanf("%d",&no_of_subjects);
    int subjects[no_of_subjects];
    for ( int i=0; i<no_of_subjects ; i++ )
    {   
        printf("Enter the mark of Subject %d : ",(i+1));
        scanf("%d",&subjects[i]);
    }
    for ( int j=0 ; j<no_of_subjects ; j++)
    {
        total = total + subjects[j];
    }
    //Finding the average
    average = total/no_of_subjects;
    //printing all the outputs
    printf("Number of Subjects: %d\n",no_of_subjects);
    printf("The Total Mark of %d Subjects are: %d\n",no_of_subjects,total);
    printf("And the Average is: %.2f",average);
    
}
