#include <stdio.h>
#include <string.h>

struct student{
    int country;
    int id;
    int score;
};

int main() {
    int n = 0;
    scanf("%d", &n);

    struct student ranking[3];
    memset(ranking, 0, sizeof(ranking));

    int ranker_country[100] = {0};

    while (n--) {
        struct student current_student;
        scanf("%d %d %d", &current_student.country, &current_student.id, &current_student.score);

        if (ranking[0].score < current_student.score) {
            if (ranking[0].country == ranking[1].country && current_student.country == ranking[0].country) {
                ranking[1] = ranking[0];
                ranking[0] = current_student;
            } else {
                ranking[2] = ranking[1];
                ranking[1] = ranking[0];
                ranking[0] = current_student;
            }
        } else if (ranking[1].score < current_student.score) {
            if (ranking[0].country == ranking[1].country && current_student.country == ranking[0].country) {
                ranking[1] = current_student;
            } else {
                ranking[2] = ranking[1];
                ranking[1] = current_student;
            }
        } else if (ranking[2].score < current_student.score) {
            if (ranking[0].country == ranking[1].country && current_student.country == ranking[0].country) {
                continue;
            } else {
                ranking[2] = current_student;
            }
        } else {
            continue;
        }
    }

    printf("%d %d\n", ranking[0].country, ranking[0].id);
    printf("%d %d\n", ranking[1].country, ranking[1].id);
    printf("%d %d\n", ranking[2].country, ranking[2].id);
    

    return 0;
}
