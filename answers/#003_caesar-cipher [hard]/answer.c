
#include <stdio.h>

typedef struct {
    char text[20001];
    char upper[27];
    char lower[27];
} Output;

Output answer = {
    "",
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
    "abcdefghijklmnopqrstuvwxyz"
};

char* sol(int m, char* s) {
    m = ((m % 26) + 26) % 26;

    int i;

    for (i = 0; s[i] != '\0'; i++) {
        answer.text[i] = s[i];

        for (int j = 0; j < 26; j++) {
            if (s[i] == answer.upper[j]) {
                answer.text[i] = answer.upper[(j + m) % 26];
                break;
            }
            else if (s[i] == answer.lower[j]) {
                answer.text[i] = answer.lower[(j + m) % 26];
                break;
            }
        }
    }

    answer.text[i] = '\0';

    return answer.text;
}

int main(void) {
    int m;
    char s[20001];

    scanf("%d", &m);
    scanf("%*c%[^\n]", s);

    printf("%s\n", sol(m, s));

    return 0;
}
