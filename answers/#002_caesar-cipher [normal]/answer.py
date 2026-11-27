
def sol(n, m, s):
    answer = ""
    upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    lower = "abcdefghijklmnopqrstuvwxyz"

    m %= 26

    for i in range(n):
        if s[i] in upper:
            answer += upper[(upper.index(s[i]) + m) % 26]
        elif s[i] in lower:
            answer += lower[(lower.index(s[i]) + m) % 26]
        else:
            answer += s[i]

    return answer


n, m = map(int, input().split())
s = input()

print(sol(n, m, s))
