def bitStrings(n: int):
    answer = 1
    for i in range(n):
        answer = (answer % (1e9 + 7)) * 2

    return answer % (1e9 + 7)


if __name__ == "__main__":
    n = int(input())
    print(int(bitStrings(n)))
