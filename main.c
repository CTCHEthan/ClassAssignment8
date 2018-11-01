#include <stdio.h>
#include <stdlib.h>
#include "GradeBook.h"

int main()
{
    //float data[MAX_GRADE] = {56.6F,99.3F,90.F,70.F,66.3F};
    float data[MAX_GRADE];

    int i = 0;

    while (i < MAX_GRADE)
    {
        printf("Enter a grade: ");

        float grade;
        scanf("%f", &grade);

        data[i] = grade;

        i++;
    }

    assignShowGrade (data);
    return 0;
}
