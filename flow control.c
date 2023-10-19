#include <stdio.h>

int main()
{
    int cnt = 0;
    int n = 'a';
    for (int i = 0; i < n; i++) {
        if (i % 2) {
            for (int j = 0; j < 1; j++) {
                cnt++;
            }
        } else {
            while (cnt == 1) {
                cnt++;
            }
        }
    }
    printf("%d\n", cnt);

    return 0;
}