#include <stdio.h>
#include <string.h>

void rate_tone(char* composition, int index, int* CMajor, int* AMinor) {
    char currentTone = composition[index];
    switch(currentTone) {
        case 'C':
        case 'F':
        case 'G':
            *CMajor = *CMajor + 1;
            break;
        
        case 'A':
        case 'D':
        case 'E':
            *AMinor = *AMinor + 1;
            break;
        
        default:
            break;
    }
}

int main () {
    char composition[128] = "";
    scanf("%s", composition);

    int index = 0;
    int CMajor = 0;
    int AMinor = 0;
    rate_tone(composition, 0, &CMajor, &AMinor);

    while(composition[index] != 0) {
        if(composition[index] == '|') {
            rate_tone(composition, index + 1, &CMajor, &AMinor);
        }
        index++;
    }
    
    if (CMajor < AMinor) printf("A-minor\n");
    else if (AMinor < CMajor) printf("C-major\n");
    else {
        rate_tone(composition, strlen(composition) - 1, &CMajor, &AMinor);

        if (CMajor < AMinor) printf("A-minor\n");
        else if (AMinor < CMajor) printf("C-major\n");
    }

    return 0;
}
