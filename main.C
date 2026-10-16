
#include <stdio.h>

int main() {
    float m1, m2, m3, total, percentage;

    printf("Enter marks for 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = (total / 300) * 100;

    printf("Total Marks = %.2f/300\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
s