#include <stdio.h>

/* 1. Add two numbers */
void p1(void) {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Sum = %.2f\n", a + b);
}

/* 2. Subtract two numbers */
void p2(void) {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Difference = %.2f\n", a - b);
}

/* 3. Multiply two numbers */
void p3(void) {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Product = %.2f\n", a * b);
}

/* 4. Divide two numbers */
void p4(void) {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    if (b == 0)
        printf("Division by zero is not possible.\n");
    else
        printf("Quotient = %.2f\n", a / b);
}

/* 5. Add, multiply, subtract and divide two numbers */
void p5(void) {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Sum        = %.2f\n", a + b);
    printf("Difference = %.2f\n", a - b);
    printf("Product    = %.2f\n", a * b);
    if (b == 0)
        printf("Division by zero is not possible.\n");
    else
        printf("Quotient   = %.2f\n", a / b);
}

/* 6. Hours into minutes */
void p6(void) {
    float h;
    printf("Enter hours: ");
    scanf("%f", &h);
    printf("Minutes = %.2f\n", h * 60);
}

/* 7. Minutes into hours */
void p7(void) {
    float m;
    printf("Enter minutes: ");
    scanf("%f", &m);
    printf("Hours = %.2f\n", m / 60);
}

/* 8. Dollars into Rs (1 $ = 48 Rs) */
void p8(void) {
    float d;
    printf("Enter dollars: ");
    scanf("%f", &d);
    printf("Rupees = %.2f\n", d * 48);
}

/* 9. Rs into dollars (1 $ = 48 Rs) */
void p9(void) {
    float rs;
    printf("Enter rupees: ");
    scanf("%f", &rs);
    printf("Dollars = %.2f\n", rs / 48);
}

/* 10. Dollars into pounds (1 $ = 48 Rs, 1 pound = 70 Rs) */
void p10(void) {
    float d, rs, pound;
    printf("Enter dollars: ");
    scanf("%f", &d);
    rs = d * 48;
    pound = rs / 70;
    printf("Pounds = %.2f\n", pound);
}

/* 11. Grams into kg */
void p11(void) {
    float g;
    printf("Enter grams: ");
    scanf("%f", &g);
    printf("Kilograms = %.3f\n", g / 1000);
}

/* 12. Kg into grams */
void p12(void) {
    float kg;
    printf("Enter kilograms: ");
    scanf("%f", &kg);
    printf("Grams = %.2f\n", kg * 1000);
}

/* 13. Bytes into KB, MB and GB */
void p13(void) {
    double bytes;
    printf("Enter bytes: ");
    scanf("%lf", &bytes);
    printf("KB = %.6f\n", bytes / 1024);
    printf("MB = %.6f\n", bytes / (1024 * 1024));
    printf("GB = %.9f\n", bytes / (1024.0 * 1024 * 1024));
}

/* 14. Celsius into Fahrenheit */
void p14(void) {
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = (9.0 / 5 * c) + 32;
    printf("Fahrenheit = %.2f\n", f);
}

/* 15. Fahrenheit into Celsius */
void p15(void) {
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = 5.0 / 9 * (f - 32);
    printf("Celsius = %.2f\n", c);
}

/* 16. Simple interest I = PRN/100 */
void p16(void) {
    float p, r, n, i;
    printf("Enter principal, rate and number of years: ");
    scanf("%f %f %f", &p, &r, &n);
    i = (p * r * n) / 100;
    printf("Interest = %.2f\n", i);
}

/* 17. Area and perimeter of a square */
void p17(void) {
    float l;
    printf("Enter side of square: ");
    scanf("%f", &l);
    printf("Area      = %.2f\n", l * l);
    printf("Perimeter = %.2f\n", 4 * l);
}

/* 18. Area and perimeter of a rectangle */
void p18(void) {
    float l, b;
    printf("Enter length and breadth: ");
    scanf("%f %f", &l, &b);
    printf("Area      = %.2f\n", l * b);
    printf("Perimeter = %.2f\n", 2 * (l + b));
}

/* 19. Area of a circle A = 22/7 * R * R */
void p19(void) {
    float r, a;
    printf("Enter radius: ");
    scanf("%f", &r);
    a = 22.0 / 7 * r * r;
    printf("Area = %.2f\n", a);
}

/* 20. Area of a triangle A = H*L/2 */
void p20(void) {
    float h, l, a;
    printf("Enter height and length (base): ");
    scanf("%f %f", &h, &l);
    a = h * l / 2;
    printf("Area = %.2f\n", a);
}

/* 21. Net salary = gross + allowance(10%) - deduction(3%) */
void p21(void) {
    float gross, allowance, deduction, net;
    printf("Enter gross salary: ");
    scanf("%f", &gross);
    allowance = gross * 10 / 100;
    deduction = gross * 3 / 100;
    net = gross + allowance - deduction;
    printf("Allowance  = %.2f\n", allowance);
    printf("Deduction  = %.2f\n", deduction);
    printf("Net salary = %.2f\n", net);
}

/* 22. Net sales = gross sales - 10% discount of gross sales */
void p22(void) {
    float gross, discount, net;
    printf("Enter gross sales: ");
    scanf("%f", &gross);
    discount = gross * 10 / 100;
    net = gross - discount;
    printf("Discount  = %.2f\n", discount);
    printf("Net sales = %.2f\n", net);
}

/* 23. Average of three subjects along with total */
void p23(void) {
    float s1, s2, s3, total, avg;
    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &s1, &s2, &s3);
    total = s1 + s2 + s3;
    avg = total / 3;
    printf("Total   = %.2f\n", total);
    printf("Average = %.2f\n", avg);
}

/* 24. Swap two values */
void p24(void) {
    int a, b, temp;
    printf("Enter two values: ");
    scanf("%d %d", &a, &b);
    printf("Before swap: a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap:  a = %d, b = %d\n", a, b);
}

int main(void) {
    int choice;
    void (*programs[24])(void) = {
        p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12,
        p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24
    };

    printf("Enter program number (1-24): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 24)
        programs[choice - 1]();
    else
        printf("Invalid choice.\n");

    return 0;
}
