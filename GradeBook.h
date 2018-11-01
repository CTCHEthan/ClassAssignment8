#ifndef GRADEBOOK_H_INCLUDED
#define GRADEBOOK_H_INCLUDED

#define MAX_GRADE 5

void assignShowGrade (float grades[MAX_GRADE]);
char getGrade(float grade);

//Iterate through the grades and display the
//associated letter grade for the range.
void assignShowGrade(float grades[MAX_GRADE])
{
    int i = 0;
    for(i = 0; i < MAX_GRADE; i++)
    {
        char c = getGrade(grades[i]);
        printf("%f = %c\n", grades[i], c);
    }
}

//Return a letter grade for a score.
char getGrade(float grade)
{
    char g;

    if (grade >= 90.F)
    {
        g = 'A';
    }
    else if (grade >= 80.F && grade <= 89.9F)
    {
        g = 'B';
    }
    else if (grade >= 70.F && grade <= 79.9F)
    {
        g = 'C';
    }
    else if (grade >= 60.F && grade <= 69.9F)
    {
        g = 'D';
    }
    else
    {
        g = 'F';
    }
    return g;
}

#endif // GRADEBOOK_H_INCLUDED
