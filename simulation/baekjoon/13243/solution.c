#include <stdio.h>

typedef struct subsegment {
    int start;
    int end;
    int length;
} subsegment;

int main() {
    int n = -1;
    scanf("%d", &n);
    
    int numbers[131072] = {0};
    for (int index = 0 ; index < n ; index++) {
        scanf("%d", &numbers[index]);
    }
    numbers[n] = -1;

    subsegment answer;
    answer.start = 0;
    answer.end = 0;
    answer.length = 1;

    subsegment contestant;
    contestant.start = 0;
    contestant.end = 0;
    contestant.length = 1;

    int previous = numbers[0];
    for (int index = 1 ; index <= n ; index++) {
        if (previous <= numbers[index]) {
            contestant.end = index;
            contestant.length++;
        } else {
            if (answer.length < contestant.length) {
                answer.start = contestant.start;
                answer.end = contestant.end;
                answer.length = contestant.length;

                contestant.start = index;
                contestant.end = index;
                contestant.length = 1;
            } else {
                contestant.start = index;
                contestant.end = index;
                contestant.length = 1;
            }
        }

        previous = numbers[index];
    }

    int sum = 0;
    for(int index = answer.start ; index <= answer.end ; index++) {
        sum = sum + numbers[index];
    }

    printf("%d %d\n", answer.length, sum);

    return 0;
}
