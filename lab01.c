#include <stdio.h>
int main() {
    float height;
    printf("Enter the height of the person in centimeters: ");
    scanf("%f", &height);
    if (height < 150) {
        printf("The person is a Dwarf.\n");
    } else if (height == 150) {
        printf("The person has Average Height.\n");
    } else if (height >= 165) {
        printf("The person is Tall.\n");
    } else {
        printf("The person has an Average Height (between 150 and 165 cm).\n");
    }

    getchar();
}
