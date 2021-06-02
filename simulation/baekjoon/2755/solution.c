#include <stdio.h>

float get_gpa(char* grade);

int main() {
    int courses = -1;
    scanf("%d", &courses);

    float total_credits = 0;
    float total_gpa = 0;
    
    for(int course = 1 ; course <= courses ; course++) {
        char course_name[128] = "";
        float course_credits = 0;
        char course_gpa[16] = "";
        scanf("%s %f %s", course_name, &course_credits, course_gpa);

        total_credits = total_credits + course_credits;
        total_gpa = total_gpa + (course_credits * get_gpa(course_gpa));
    }

    printf("%.2f\n", total_gpa / total_credits);

    return 0;
}

float get_gpa(char* grade) {
    float gpa = 0.0;

    if(grade[0] == 'F') gpa = 0.0;
    else {
        gpa = 4.0 - ((float)grade[0] - (float)'A');
        if (grade[1] == '+') gpa = gpa + 0.3;
        else if (grade[1] == '-') gpa = gpa - 0.3;
    }

    return gpa;
}
