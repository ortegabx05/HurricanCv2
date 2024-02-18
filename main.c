#include <stdio.h>

void determineHurricaneCategory(int windSpeed) {
    if (windSpeed >= 74 && windSpeed <= 95)
        printf("Category One Hurricane\n");
    else if (windSpeed >= 96 && windSpeed <= 110)
        printf("Category Two Hurricane\n");
    else if (windSpeed >= 111 && windSpeed <= 129)
        printf("Category Three Hurricane\n");
    else if (windSpeed >= 130 && windSpeed <= 156)
        printf("Category Four Hurricane\n");
    else if (windSpeed >= 157)
        printf("Category Five Hurricane\n");
    else
        printf("Not a Hurricane\n");
}

int main(void) {
    int windSpeed;

    printf("Enter wind speed: ");
    scanf("%d", &windSpeed);

    determineHurricaneCategory(windSpeed);

    return 0;
}
