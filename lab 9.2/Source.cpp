#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS

#define SQR(x) ((x)*(x)) 
#define MAX(y, z) ((y) > (z) ? (y) : (z)) 
#define MIN(y, z) ((y) < (z) ? (y) : (z))

#define PRINTI(w) puts("control output"); \
 printf(#w"=%d\n", w)
#define PRINTR(w) puts("result:"); \
 printf(#w"=%f\n", (float)w)

void main() {
    puts("Task: Compute w based on given conditions.");
    int x, y, z;
    int max_val, min_val;
    float w;
    char ch; 

    do {
        puts("Input integers x, y, and z:");
        scanf("%d", &x);
        PRINTI(x);
        scanf("%d", &y);
        PRINTI(y);
        scanf("%d", &z);
        PRINTI(z);

        if (1 <= z && z < 10) {
           
            max_val = MAX(x + y, x + z);
            w = SQR(max_val);
            PRINTR(w);
        }
        else if (z < 1 || z >= 10) {
           
            int abs_diff = abs(y - z); // absolute value
            min_val = MIN(SQR(x), 5 * abs_diff);
            w = min_val;
            PRINTR(w);
        }

        puts("Repeat? y / n");
        ch = _getch();
    } while (ch == 'y');
}
