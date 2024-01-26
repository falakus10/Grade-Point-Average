#include <stdio.h>
int finalscore (int midTerm, int final){
    int score = midTerm*0.4 + final*0.6 ;
    return score;
}
int main() {
    int number_students;
    int final, midTerm;
    printf("Enter the number of students: ");
    scanf("%d", &number_students);
    char students [number_students][100];
    for (int i = 0; i < number_students; i++){
        printf("Enter name of the students: ");
        scanf("%s",&students[i]);
    }
    for (int i = 0; i < number_students; i++){
        printf("\n Enter the midterm note of %s: \n", &students[i]);
        scanf("%d", &midTerm);
        printf("Enter the final note of %s: \n", &students[i]);
        scanf("%d", &final);
        int score = finalscore(midTerm,final);
        printf("Final score for %s is: %d ",students[i], score);
    }
    return 0;
}
