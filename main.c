#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort( int numbers[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0; j<size-1; j++){
            if(numbers[j]>numbers[j+1]){
                int temp=numbers[j];
                numbers[j]=numbers[j+1];
                numbers[j+1]=temp;
            }
        }
    }

}

void printNumbers(int numbers[], int size){
    for(int i=0;i<size;i++){
        printf("%d\t", numbers[i]);
    }
}
int main()
{
    /*float physics_assignment, physics_coursework, physics_midterm, physics_endterm;
    float chemistry_assignment, chemistry_coursework, chemistry_midterm, chemistry_endterm;
    float math_assignment, math_coursework, math_midterm, math_endterm;


    float avg_physics, avg_chemistry, avg_math;


    printf("Enter marks for Physics:\n");
    printf("Assignment: ");
   scanf_s("%f", &physics_assignment);
    printf("Coursework: ");
    scanf_s("%f", &physics_coursework);
    printf("Midterm: ");
    scanf_s("%f", &physics_midterm);
    printf("End of Term Exam: ");
   scanf_s("%f", &physics_endterm);


    printf("\nEnter marks for Chemistry:\n");
    printf("Assignment: ");
   scanf_s("%f", &chemistry_assignment);
    printf("Coursework: ");
    scanf_s("%f", &chemistry_coursework);
    printf("Midterm: ");
    scanf_s("%f", &chemistry_midterm);
    printf("End of Term Exam: ");
    scanf("%f", &chemistry_endterm);


    printf("\nEnter marks for Math:\n");
    printf("Assignment: ");
  scanf_s("%f", &math_assignment);
    printf("Coursework: ");
     scanf_s("%f", &math_coursework);
    printf("Midterm: ");
   scanf_s("%f", &math_midterm);
    printf("End of Term Exam: ");
     scanf_s("%f", &math_endterm);


    avg_physics = (physics_assignment + physics_coursework + physics_midterm + physics_endterm) / 4;
    avg_chemistry = (chemistry_assignment + chemistry_coursework + chemistry_midterm + chemistry_endterm) / 4;
    avg_math = (math_assignment + math_coursework + math_midterm + math_endterm) / 4;


    printf("\nAverage marks for Physics: %.2f\n", avg_physics);
    printf("Average marks for Chemistry: %.2f\n", avg_chemistry);
    printf("Average marks for Math: %.2f\n", avg_math);


    float overall_avg = (avg_physics + avg_chemistry + avg_math) / 3;
    printf("\nOverall average marks: %.2f\n", overall_avg);

int n, x;
printf("Enter the number of domestic animals: ");
scanf_s("%d", &n);

char domestic_animals[n][50];
for(int i=0; i<n; i++){
    printf("Enter the domestic animal %d:", i+1);
    scanf_s("%s", domestic_animals[i]);
}
 printf("Enter the number of wild animals: ");
scanf_s("%d", &x);

char wild_animals[x][50];
for(int i=0; i<x; i++){
    printf("Enter the domestic animal %d:", i+1);
    scanf_s("%s", wild_animals[i]);
}
   /* printf("All the animals:\n ");
    for(int i=0; i<n; i++){
        printf("%d. %s\n", i+1, domestic_animals[i]);
    }
    for(int i=0; i<x; i++){
        printf("%d. %s\n", n+i+1, wild_animals[i]);
    }

    //merge
    int size=n+x;
    char merged_array[size][50];
    for(int i=0; i<size; i++){
        strcpy(merged_array[i],domestic_animals[i]);
    }
     for(int i=0; i<size; i++){
        strcpy(merged_array[i+n],wild_animals[i]);
    }
    for(int i=0; i<size; i++){
        printf("%s ", merged_array[i]);
    }*/

    //SORTING AN ARRAY
    int numbers[10];
    int size =sizeof(numbers)/sizeof(numbers[0]);
    printf("Enter any number\n");
    for(int i=0;i<10;i++){
        scanf("%d",&numbers[i]);
    }
    sort(numbers,size);
    printNumbers(numbers,size);

    return 0;
}
