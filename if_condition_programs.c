#include <stdio.h>

/* 1. Largest and smallest of two values */
void p1(void) {
    float a, b;
    printf("Enter two values: ");
    scanf("%f %f", &a, &b);
    if (a == b) {
        printf("Both values are equal.\n");
    } else if (a > b) {
        printf("Largest  = %.2f\n", a);
        printf("Smallest = %.2f\n", b);
    } else {
        printf("Largest  = %.2f\n", b);
        printf("Smallest = %.2f\n", a);
    }
}

/* 2. Largest and smallest of three values */
void p2(void) {
    float a, b, c, large, small;
    printf("Enter three values: ");
    scanf("%f %f %f", &a, &b, &c);

    large = a;
    small = a;

    if (b > large)
        large = b;
    if (c > large)
        large = c;

    if (b < small)
        small = b;
    if (c < small)
        small = c;

    printf("Largest  = %.2f\n", large);
    printf("Smallest = %.2f\n", small);
}

/* 3. Net salary = gross + allowances - deductions */
void p3(void) {
    float gross, allowance, deduction, net;
    printf("Enter gross salary: ");
    scanf("%f", &gross);

    if (gross > 10000) {
        allowance = gross * 10 / 100;
        deduction = gross * 3 / 100;
    } else if (gross > 5000) {
        allowance = gross * 7 / 100;
        deduction = gross * 2 / 100;
    } else {
        allowance = 0;
        deduction = 0;
    }

    net = gross + allowance - deduction;
    printf("Allowance  = %.2f\n", allowance);
    printf("Deduction  = %.2f\n", deduction);
    printf("Net salary = %.2f\n", net);
}

/* 4. Number divisible by 7 or not */
void p4(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 7 == 0)
        printf("%d is divisible by 7.\n", n);
    else
        printf("%d is not divisible by 7.\n", n);
}

/* 5. Net sales = gross sales - discount */
void p5(void) {
    float gross, discount, net;
    printf("Enter gross sales: ");
    scanf("%f", &gross);

    if (gross > 20000)
        discount = gross * 15 / 100;
    else if (gross > 10000)
        discount = gross * 10 / 100;
    else
        discount = gross * 5 / 100;

    net = gross - discount;
    printf("Discount  = %.2f\n", discount);
    printf("Net sales = %.2f\n", net);
}

/* 6. Total, average and grade of three subjects */
void p6(void) {
    float s1, s2, s3, total, avg;
    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &s1, &s2, &s3);

    total = s1 + s2 + s3;
    avg = total / 3;
    printf("Total   = %.2f\n", total);
    printf("Average = %.2f\n", avg);

    if (s1 < 35 || s2 < 35 || s3 < 35)
        printf("Result: Fail\n");
    else if (avg >= 70)
        printf("Result: Distinction\n");
    else if (avg >= 60)
        printf("Result: First class\n");
    else if (avg >= 50)
        printf("Result: Second class\n");
    else if (avg >= 35)
        printf("Result: Third class\n");
    else
        printf("Result: Fail\n");
}

int main(void) {
    int choice;
    void (*programs[6])(void) = { p1, p2, p3, p4, p5, p6 };

    printf("Enter program number (1-6): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 6)
        programs[choice - 1]();
    else
        printf("Invalid choice.\n");

    return 0;
}
