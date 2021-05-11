#include <stdio.h>

int main() {
    int initialHour = 0;
    int initialMinute = 0;
    scanf("%d %d", &initialHour, &initialMinute);

    int inputMinute = 0;
    scanf("%d", &inputMinute);
    
    int finalTimeInMinutes = initialHour * 60 + initialMinute + inputMinute;
    
    if (1440 <= finalTimeInMinutes) finalTimeInMinutes = finalTimeInMinutes - 1440;
    
    int finalHour = finalTimeInMinutes / 60;
    int finalMinute = finalTimeInMinutes % 60;

    printf("%d %d\n", finalHour, finalMinute);

    return 0;
}
