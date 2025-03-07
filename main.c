#include <stdio.h>
#include <stdlib.h>

#define SUBJECTS 3  //for 3 papers
#define ASSIGMENTS 4

int main()
{
    // use a 2 dimensional array
    float marks[SUBJECTS][ASSIGMENTS];
    float average[SUBJECTS];
    int i,y;

   // Arrays for subject names and test names for clearer prompts.
    char *subjects[SUBJECTS] = {"Physics", "Chemistry", "Math"};
    char *tests[ASSIGMENTS] = {"Assignment", "Course Work", "Midterm", "End-Term Exam"};

    for(i = 0; i<SUBJECTS; i++) {
        printf("Enter marks for %s\n", subjects[0]);

        int sum = 0;
        for(int j=0; j<ASSIGMENTS; i++){
                printf("Enter the marks for %s : ", tests[i]);
                scanf("%d", &tests[i]);

                sum = sum + tests[i];
                printf("The sum of phy is %d: ", sum);
        }
    }


     return 0;
}
