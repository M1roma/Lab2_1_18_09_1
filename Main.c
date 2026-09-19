#include <stdio.h>
#include <math.h>

int main() {
double x, y;

//введення значення x
printf("Enter value x: \n");
scanf("%lf", &x);

// обчислення значення y залежно від x
if (x >= 0 && x < 5) {
 y = (x - 1) / (x + 1);
}
else if (x >= 5 && x < 25) {
 y = 5*x + 10;
}
else if (x >= 100 && x <125){
 y = (x/ sqrt(x+x*x)-(4*x*x*x));
}
// для інших значень x
else {
    y = (x / 10) + 4;
}
//виведення значення y
printf("value y: %lf\n", y);

    return 0;
}
