#include <stdio.h>

#define MAX 20

/* Helper: reads the size and the elements of an array, returns the size (0 if invalid) */
int readArray(int a[]) {
    int n, i;
    printf("Enter number of elements (max %d): ", MAX);
    scanf("%d", &n);
    if (n < 1 || n > MAX) {
        printf("Invalid size.\n");
        return 0;
    }
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    return n;
}

/* Helper: prints the elements of an array */
void printArray(int a[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

/* Helper: returns 1 if x must come after y for the chosen order (1 = ascending, 2 = descending) */
int swapNeeded(int x, int y, int order) {
    if (order == 1)
        return x > y;
    return x < y;
}

/* 1. Accept 5 values and print them later on */
void p1(void) {
    int a[5], i;
    for (i = 0; i < 5; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("The values are: ");
    printArray(a, 5);
}

/* 2. Accept 10 values and print 4th, 7th and 9th value */
void p2(void) {
    int a[10], i;
    for (i = 0; i < 10; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("4th value = %d\n", a[3]);
    printf("7th value = %d\n", a[6]);
    printf("9th value = %d\n", a[8]);
}

/* 3. Accept 5 values and sort in ascending or descending order
      (techniques: 1 = Bubble sort, 2 = Selection sort, 3 = Insertion sort) */
void p3(void) {
    int a[5], i, j, idx, temp, key, order, tech;
    for (i = 0; i < 5; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Sort order (1 = Ascending, 2 = Descending): ");
    scanf("%d", &order);
    printf("Technique (1 = Bubble, 2 = Selection, 3 = Insertion): ");
    scanf("%d", &tech);

    if (tech == 1) {
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4 - i; j++) {
                if (swapNeeded(a[j], a[j + 1], order)) {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    } else if (tech == 2) {
        for (i = 0; i < 4; i++) {
            idx = i;
            for (j = i + 1; j < 5; j++) {
                if (swapNeeded(a[idx], a[j], order))
                    idx = j;
            }
            temp = a[i];
            a[i] = a[idx];
            a[idx] = temp;
        }
    } else if (tech == 3) {
        for (i = 1; i < 5; i++) {
            key = a[i];
            j = i - 1;
            while (j >= 0 && swapNeeded(a[j], key, order)) {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = key;
        }
    } else {
        printf("Invalid technique.\n");
        return;
    }

    printf("Sorted array: ");
    printArray(a, 5);
}

/* 4. Minimum no. of notes required */
void p4(void) {
    int notes[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int amount, i, count, total = 0;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    for (i = 0; i < 9; i++) {
        count = amount / notes[i];
        if (count > 0) {
            printf("%d note(s) of Rs. %d\n", count, notes[i]);
            total = total + count;
        }
        amount = amount % notes[i];
    }
    printf("Total notes = %d\n", total);
}

/* 5. Add two 2D arrays of same size and store the result in the 3rd one */
void p5(void) {
    int a[10][10], b[10][10], c[10][10];
    int r, col, i, j;
    printf("Enter rows and columns (max 10): ");
    scanf("%d %d", &r, &col);
    if (r < 1 || r > 10 || col < 1 || col > 10) {
        printf("Invalid size.\n");
        return;
    }
    printf("Enter elements of first array:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &a[i][j]);
    printf("Enter elements of second array:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < col; j++)
            c[i][j] = a[i][j] + b[i][j];

    printf("Result of addition:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < col; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
}

/* 6. Multiply two 2D arrays and store the result in the 3rd 2D array */
void p6(void) {
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2, i, j, k;
    printf("Enter rows and columns of first array (max 10): ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second array (max 10): ");
    scanf("%d %d", &r2, &c2);
    if (r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10 || r2 < 1 || r2 > 10 || c2 < 1 || c2 > 10) {
        printf("Invalid size.\n");
        return;
    }
    if (c1 != r2) {
        printf("Multiplication not possible (columns of first must equal rows of second).\n");
        return;
    }
    printf("Enter elements of first array:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    printf("Enter elements of second array:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            c[i][j] = 0;
            for (k = 0; k < c1; k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
        }
    }

    printf("Result of multiplication:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
}

/* 7. Transpose of a 4x4 matrix */
void p7(void) {
    int a[4][4], t[4][4], i, j;
    printf("Enter elements of the 4x4 matrix:\n");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            t[j][i] = a[i][j];

    printf("Transpose of the matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++)
            printf("%d\t", t[i][j]);
        printf("\n");
    }
}

/* 8. Copy an array of 5 elements to an array of 10 elements skipping one element */
void p8(void) {
    int a[5], b[10] = {0}, i;
    for (i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
        b[2 * i] = a[i];
    printf("New array: ");
    printArray(b, 10);
}

/* 9. Reverse the array of maximum 5 elements */
void p9(void) {
    int a[5], n, i, temp;
    printf("Enter number of elements (max 5): ");
    scanf("%d", &n);
    if (n < 1 || n > 5) {
        printf("Invalid size.\n");
        return;
    }
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    printf("Reversed array: ");
    printArray(a, n);
}

/* 10. Frequency of each number in an array of 10 elements */
void p10(void) {
    int a[10], visited[10] = {0}, i, j, count;
    for (i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++) {
        if (visited[i])
            continue;
        count = 1;
        for (j = i + 1; j < 10; j++) {
            if (a[j] == a[i]) {
                count++;
                visited[j] = 1;
            }
        }
        printf("%d occurs %d time(s)\n", a[i], count);
    }
}

/* 11. Shift all nos. by n positions (left or right) in an array of 10, pad with 0 */
void p11(void) {
    int a[10], b[10], i, n;
    char dir;
    for (i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter number of positions to shift: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Invalid shift.\n");
        return;
    }
    printf("Enter direction (L = left, R = right): ");
    scanf(" %c", &dir);

    if (dir == 'L' || dir == 'l') {
        for (i = 0; i < 10; i++) {
            if (i + n < 10)
                b[i] = a[i + n];
            else
                b[i] = 0;
        }
    } else if (dir == 'R' || dir == 'r') {
        for (i = 0; i < 10; i++) {
            if (i - n >= 0)
                b[i] = a[i - n];
            else
                b[i] = 0;
        }
    } else {
        printf("Invalid direction.\n");
        return;
    }
    printf("Array after shifting: ");
    printArray(b, 10);
}

/* 12. Insert a new number at the beginning of the array */
void p12(void) {
    int a[MAX], n, i, value;
    n = readArray(a);
    if (n == 0)
        return;
    if (n == MAX) {
        printf("Array is full.\n");
        return;
    }
    printf("Enter the number to insert: ");
    scanf("%d", &value);
    for (i = n; i > 0; i--)
        a[i] = a[i - 1];
    a[0] = value;
    n++;
    printf("Array after insertion: ");
    printArray(a, n);
}

/* 13. Insert a new number at a particular position within an array */
void p13(void) {
    int a[MAX], n, i, value, pos;
    n = readArray(a);
    if (n == 0)
        return;
    if (n == MAX) {
        printf("Array is full.\n");
        return;
    }
    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &pos);
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position.\n");
        return;
    }
    printf("Enter the number to insert: ");
    scanf("%d", &value);
    for (i = n; i >= pos; i--)
        a[i] = a[i - 1];
    a[pos - 1] = value;
    n++;
    printf("Array after insertion: ");
    printArray(a, n);
}

/* 14. Insert a new number at the last position of an array */
void p14(void) {
    int a[MAX], n, value;
    n = readArray(a);
    if (n == 0)
        return;
    if (n == MAX) {
        printf("Array is full.\n");
        return;
    }
    printf("Enter the number to insert: ");
    scanf("%d", &value);
    a[n] = value;
    n++;
    printf("Array after insertion: ");
    printArray(a, n);
}

/* 15. Delete a value from the first position of the array */
void p15(void) {
    int a[MAX], n, i;
    n = readArray(a);
    if (n == 0)
        return;
    for (i = 0; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
    printf("Array after deletion: ");
    printArray(a, n);
}

/* 16. Delete a value from a particular position within an array */
void p16(void) {
    int a[MAX], n, i, pos;
    n = readArray(a);
    if (n == 0)
        return;
    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);
    if (pos < 1 || pos > n) {
        printf("Invalid position.\n");
        return;
    }
    for (i = pos - 1; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
    printf("Array after deletion: ");
    printArray(a, n);
}

/* 17. Delete a value from the last position */
void p17(void) {
    int a[MAX], n;
    n = readArray(a);
    if (n == 0)
        return;
    n--;
    printf("Array after deletion: ");
    printArray(a, n);
}

/* 18. Delete a given value from the array (all its occurrences) */
void p18(void) {
    int a[MAX], n, i, k = 0, value, found = 0;
    n = readArray(a);
    if (n == 0)
        return;
    printf("Enter the value to delete: ");
    scanf("%d", &value);
    for (i = 0; i < n; i++) {
        if (a[i] == value)
            found = 1;
        else
            a[k++] = a[i];
    }
    if (!found) {
        printf("%d not found in the array.\n", value);
        return;
    }
    n = k;
    printf("Array after deletion: ");
    printArray(a, n);
}

/* 19. Search a value within an array */
void p19(void) {
    int a[MAX], n, i, value, found = 0;
    n = readArray(a);
    if (n == 0)
        return;
    printf("Enter the value to search: ");
    scanf("%d", &value);
    for (i = 0; i < n; i++) {
        if (a[i] == value) {
            printf("%d found at position %d\n", value, i + 1);
            found = 1;
        }
    }
    if (!found)
        printf("%d not found in the array.\n", value);
}

int main(void) {
    int choice;
    void (*programs[19])(void) = {
        p1, p2, p3, p4, p5, p6, p7, p8, p9, p10,
        p11, p12, p13, p14, p15, p16, p17, p18, p19
    };

    printf("Enter program number (1-19): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 19)
        programs[choice - 1]();
    else
        printf("Invalid choice.\n");

    return 0;
}
