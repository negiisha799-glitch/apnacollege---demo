#include <stdio.h>
int main() {
    float radius;
    scanf(" enter radius: %f", &radius);
    float pi = 3.1415;
    float area = pi * radius * radius;
    printf("Area of Circle: %f", area);
    return 0;
}
