
#include <stdio.h>

char answer[100001];

char* sol(int n, int m, char* s) {
    char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lower[] = "abcdefghijklmnopqrstuvwxyz";

    m = ((m % 26) + 26) % 26;

    for (int i = 0; i < n; i++) {
        answer[i] = s[i];

        for (int j = 0; j < 26; j++) {
            if (s[i] == upper[j]) {
                answer[i] = upper[(j + m) % 26];
                break;
            }
            else if (s[i] == lower[j]) {
                answer[i] = lower[(j + m) % 26];
                break;
            }
        }
    }

    answer[n] = '\0';

    return answer;
}

int main(void) {
    int n, m;
    char s[100001];

    scanf("%d %d", &n, &m);
    scanf(" %[^\n]", s);

    printf("%s\n", sol(n, m, s));

    return 0;
}
