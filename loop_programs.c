#include <stdio.h>

/* 1. Print 1st 10 natural nos. */
void p1(void) {
    int i;
    for (i = 1; i <= 10; i++)
        printf("%d ", i);
    printf("\n");
}

/* 2. Print 1st 10 odd nos. */
void p2(void) {
    int i;
    for (i = 1; i <= 10; i++)
        printf("%d ", 2 * i - 1);
    printf("\n");
}

/* 3. Print 1st 10 even nos. */
void p3(void) {
    int i;
    for (i = 1; i <= 10; i++)
        printf("%d ", 2 * i);
    printf("\n");
}

/* 4. Print 1st n natural nos. */
void p4(void) {
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("%d ", i);
    printf("\n");
}

/* 5. Print 1st n odd nos. */
void p5(void) {
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("%d ", 2 * i - 1);
    printf("\n");
}

/* 6. Print 1st n even nos. */
void p6(void) {
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("%d ", 2 * i);
    printf("\n");
}

/* 7. Print sum of n natural nos. */
void p7(void) {
    int n, i, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum = sum + i;
    printf("Sum of %d natural numbers = %d\n", n, sum);
}

/* 8. Print sum of 1st n odd nos. */
void p8(void) {
    int n, i, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum = sum + (2 * i - 1);
    printf("Sum of first %d odd numbers = %d\n", n, sum);
}

/* 9. Print sum of 1st n even nos. */
void p9(void) {
    int n, i, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum = sum + (2 * i);
    printf("Sum of first %d even numbers = %d\n", n, sum);
}

/* 10. Factorial of a given no. */
void p10(void) {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        fact = fact * i;
    printf("%d! = %llu\n", n, fact);
}

/* 11. Print your name 5 times */
void p11(void) {
    int i;
    for (i = 1; i <= 5; i++)
        printf("Your Name\n");
}

/* 12. Print your name n times */
void p12(void) {
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("Your Name\n");
}

/* 13. Sum of all nos. divisible by 13 between 1 and 100 */
void p13(void) {
    int i, sum = 0;
    for (i = 1; i <= 100; i++) {
        if (i % 13 == 0)
            sum = sum + i;
    }
    printf("Sum of numbers divisible by 13 = %d\n", sum);
}

/* 14. Sum and mean of any 10 values */
void p14(void) {
    int i;
    float x, sum = 0, mean;
    for (i = 1; i <= 10; i++) {
        printf("Enter value %d: ", i);
        scanf("%f", &x);
        sum = sum + x;
    }
    mean = sum / 10;
    printf("Sum  = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);
}

/* 15. Sum and mean of any n values */
void p15(void) {
    int n, i;
    float x, sum = 0, mean;
    printf("Enter how many values: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("Enter value %d: ", i);
        scanf("%f", &x);
        sum = sum + x;
    }
    mean = sum / n;
    printf("Sum  = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);
}

/* 16. Largest and smallest out of 100 nos. */
void p16(void) {
    int i;
    float x, large, small;
    printf("Enter number 1: ");
    scanf("%f", &x);
    large = x;
    small = x;
    for (i = 2; i <= 100; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &x);
        if (x > large)
            large = x;
        if (x < small)
            small = x;
    }
    printf("Largest  = %.2f\n", large);
    printf("Smallest = %.2f\n", small);
}

/* 17. Count +ve, -ve and zeroes in 200 values */
void p17(void) {
    int i, pos = 0, neg = 0, zero = 0;
    float x;
    for (i = 1; i <= 200; i++) {
        printf("Enter value %d: ", i);
        scanf("%f", &x);
        if (x > 0)
            pos++;
        else if (x < 0)
            neg++;
        else
            zero++;
    }
    printf("Positive = %d\n", pos);
    printf("Negative = %d\n", neg);
    printf("Zeroes   = %d\n", zero);
}

/* 18. Count boys and girls in a class of 50 students (sex code M/F) */
void p18(void) {
    int i, boys = 0, girls = 0;
    char code;
    for (i = 1; i <= 50; i++) {
        printf("Enter sex code of student %d (M/F): ", i);
        scanf(" %c", &code);
        if (code == 'M' || code == 'm')
            boys++;
        else if (code == 'F' || code == 'f')
            girls++;
        else {
            printf("Invalid code, enter again.\n");
            i--;
        }
    }
    printf("Boys  = %d\n", boys);
    printf("Girls = %d\n", girls);
}

/* 19. Print all integers from 1 to 100 divisible by 5 */
void p19(void) {
    int i;
    for (i = 1; i <= 100; i++) {
        if (i % 5 == 0)
            printf("%d ", i);
    }
    printf("\n");
}

/* 20. Sum of all integers from 1 to 100 divisible by 3 */
void p20(void) {
    int i, sum = 0;
    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0)
            sum = sum + i;
    }
    printf("Sum = %d\n", sum);
}

/* 21. Separate digits of a given no. */
void p21(void) {
    int n, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Digits: ");
    do {
        digit = n % 10;
        printf("%d ", digit);
        n = n / 10;
    } while (n > 0);
    printf("\n");
}

/* 22. Count digits in a given no. */
void p22(void) {
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    do {
        count++;
        n = n / 10;
    } while (n > 0);
    printf("Number of digits = %d\n", count);
}

/* 23. Summation of digits of a given no. */
void p23(void) {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("Sum of digits = %d\n", sum);
}

/* 24. Reverse digits of a given no. */
void p24(void) {
    int n, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    printf("Reversed number = %d\n", rev);
}

/* 25. Check palindrome no. */
void p25(void) {
    int n, temp, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    if (rev == n)
        printf("%d is a palindrome number.\n", n);
    else
        printf("%d is not a palindrome number.\n", n);
}

/* 26. Check armstrong no. (sum of cube of digits = no. itself) */
void p26(void) {
    int n, temp, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        sum = sum + digit * digit * digit;
        temp = temp / 10;
    }
    if (sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
}

/* 27. Factors of a given no. */
void p27(void) {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factors of %d: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            printf("%d ", i);
    }
    printf("\n");
}

/* 28. Check perfect no. */
void p28(void) {
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum = sum + i;
    }
    if (sum == n)
        printf("%d is a perfect number.\n", n);
    else
        printf("%d is not a perfect number.\n", n);
}

/* 29. Check prime no. */
void p29(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPrime(n))
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
}

/* 30. All prime nos. between 1 and 500 */
void p30(void) {
    int i;
    for (i = 1; i <= 500; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    printf("\n");
}

/* 31. Summation of prime nos. between 1 and 500 */
void p31(void) {
    int i, sum = 0;
    for (i = 1; i <= 500; i++) {
        if (isPrime(i))
            sum = sum + i;
    }
    printf("Sum of prime numbers = %d\n", sum);
}

/* 32. Count of prime nos. between 1 and 500 */
void p32(void) {
    int i, count = 0;
    for (i = 1; i <= 500; i++) {
        if (isPrime(i))
            count++;
    }
    printf("Number of prime numbers = %d\n", count);
}

/* 33. Check automorphic no. */
void p33(void) {
    long n, temp, square;
    int automorphic = 1;
    printf("Enter a number: ");
    scanf("%ld", &n);
    square = n * n;
    temp = n;
    while (temp > 0) {
        if (temp % 10 != square % 10) {
            automorphic = 0;
            break;
        }
        temp = temp / 10;
        square = square / 10;
    }
    if (automorphic)
        printf("%ld is an automorphic number.\n", n);
    else
        printf("%ld is not an automorphic number.\n", n);
}

/* 34. Fibonacci series upto n nos. */
void p34(void) {
    int n, i;
    long a = 1, b = 1, c;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%ld ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

/* 35 (A) */
void p35a(void) {
    int i, j;
    for (i = 1; i <= 2; i++) {
        for (j = 1; j <= 3; j++)
            printf("%d %d\n", i, j);
    }
}

/* 35 (B) */
void p35b(void) {
    int i, j;
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= i; j++)
            printf("%d %d\n", i, j);
    }
}

/* 35 (C) */
void p35c(void) {
    int i, j, k;
    for (i = 1; i <= 2; i++) {
        for (j = 1; j <= 2; j++) {
            for (k = 1; k <= 2; k++)
                printf("%d %d %d\n", i, j, k);
        }
    }
}

/* 35 (D) */
void p35d(void) {
    int i, j;
    for (i = 5; i >= 3; i--) {
        for (j = 1; j <= 2; j++)
            printf("%d %d\n", i, j);
    }
}

/* 36 (A) Parallel loop */
void p36a(void) {
    int i, j;
    for (i = 1, j = 5; i <= 5; i++, j--)
        printf("%d %d\n", i, j);
}

/* 36 (B) Parallel loop, each line printed twice */
void p36b(void) {
    int i, j;
    for (i = 1, j = 5; i <= 3; i++, j--) {
        printf("%d %d\n", i, j);
        printf("%d %d\n", i, j);
    }
}

int main(void) {
    int choice;
    char part;
    void (*programs[34])(void) = {
        p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12,
        p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24,
        p25, p26, p27, p28, p29, p30, p31, p32, p33, p34
    };

    printf("Enter program number (1-36): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 34) {
        programs[choice - 1]();
    } else if (choice == 35) {
        printf("Enter part (A-D): ");
        scanf(" %c", &part);
        switch (part) {
            case 'A': case 'a': p35a(); break;
            case 'B': case 'b': p35b(); break;
            case 'C': case 'c': p35c(); break;
            case 'D': case 'd': p35d(); break;
            default: printf("Invalid part.\n");
        }
    } else if (choice == 36) {
        printf("Enter part (A-B): ");
        scanf(" %c", &part);
        switch (part) {
            case 'A': case 'a': p36a(); break;
            case 'B': case 'b': p36b(); break;
            default: printf("Invalid part.\n");
        }
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
