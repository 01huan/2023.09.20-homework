#include <stdio.h>
#include <stdio.h>
int main () {
    int point, p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0, p6 = 0, e = 0;
    for (int i=0; i<10; i++) {
        scanf("%d", &point);
        switch (point) {
        case 1:
            p1++;
            break;
        case 2:
            p2++;
            break;
        case 3:
            p3++;
            break;
        case 4:
            p4++;
            break;
        case 5:
            p5++;
            break;
        case 6:
            p6++;
            break;
        default:
            e++;
            break;
        }
    }
    printf("number1: %d\n", p1);
    printf("number2: %d\n", p2);
    printf("number3: %d\n", p3);
    printf("number4: %d\n", p4);
    printf("number5: %d\n", p5);
    printf("number6: %d\n", p6);
    printf("error: %d\n", e);
}