#include <stdio.h>
int main ()
{
    for (int l = 0; l < 10; l++) {
    if (l % 2 == 0) continue;
    printf("%d\n", l);
}
    return 0;
}