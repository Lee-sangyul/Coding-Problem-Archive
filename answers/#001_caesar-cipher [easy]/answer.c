
#include <stdio.h>

char answer[100001];

char* sol(int n, int m, char* s) {
    m %= 26;

    for (int i = 0; i < n; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            answer[i] = (s[i] - 'A' + m) % 26 + 'A';
        }
        else if (s[i] >= 'a' && s[i] <= 'z') {
            answer[i] = (s[i] - 'a' + m) % 26 + 'a';
        }
        else {
            answer[i] = s[i];
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
