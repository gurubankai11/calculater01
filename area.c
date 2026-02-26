#include <stdio.h>

int main() {
    int choice;
    float area;
    float radius;
    float side;
    float length, width;
    float base, height;

    printf("1.Circle 2.Rectangle 3.Square 4.Parallelogram Enter choice:");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("enter the radius: ");
        scanf("%f", &radius);
        area = 3.14158 * radius * radius;
        printf("area of circle: %.2f\n", area);
    } 
    else if (choice == 2) {
        printf("enter length and width: ");
        scanf("%f %f", &length, &width);
        area = length * width;
        printf("area of rectangle: %.2f\n", area);
    } 
    else if (choice == 3) {
        printf("enter side: ");
        scanf("%f", &side);
        area = side * side;
        printf("area of square: %.2f\n", area);
    } 
    else if (choice == 4) {
        printf("enter base and height: ");
        scanf("%f %f", &base, &height);
        area = base * height;
        printf("area of parallelogram: %.2f\n", area);
    } 
    else {
        printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }

    return 0;
}