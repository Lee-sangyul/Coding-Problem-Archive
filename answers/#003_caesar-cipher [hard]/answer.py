
def sol(m, s):
    answer = {
        "upper": "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
        "lower": "abcdefghijklmnopqrstuvwxyz",
        "result": ""
    }

    m %= 26

    for c in s:
        if c in answer["upper"]:
            answer["result"] += answer["upper"][
                (answer["upper"].index(c) + m) % 26
            ]
        elif c in answer["lower"]:
            answer["result"] += answer["lower"][
                (answer["lower"].index(c) + m) % 26
            ]
        else:
            answer["result"] += c

    return answer


m = int(input())
s = input()

print(sol(m, s).get("result", ""))
