#include <stdio.h>

int main() {
    float x, y;


    printf("Enter the x-coordinate: ");
    scanf("%f", &x);
    printf("Enter the y-coordinate: ");
    scanf("%f", &y);

    if (x == 0 && y == 0) {
        printf("The point is at the origin (0, 0).\n");
    } else if (x == 0) {
        printf("The point lies on the y-axis.\n");
    } else if (y == 0) {
        printf("The point lies on the x-axis.\n");
    } else if (x > 0 && y > 0) {
        printf("The point lies in the first quadrant.\n");
    } else if (x < 0 && y > 0) {
        printf("The point lies in the second quadrant.\n");
    } else if (x < 0 && y < 0) {
        printf("The point lies in the third quadrant.\n");
    } else {
        printf("The point lies in the fourth quadrant.\n");
    }

    return 0;
}
