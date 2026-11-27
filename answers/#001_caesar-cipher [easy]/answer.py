
def sol(n, m, s):
    answer = ""
    m %= 26

    for i in range(n):
        if 'A' <= s[i] <= 'Z':
            answer += chr((ord(s[i]) - ord('A') + m) % 26 + ord('A'))
        elif 'a' <= s[i] <= 'z':
            answer += chr((ord(s[i]) - ord('a') + m) % 26 + ord('a'))
        else:
            answer += s[i]

    return answer


n, m = map(int, input().split())
s = input()

print(sol(n, m, s))
