def numberSpiral(x: int, y: int) -> int:
    maximum = max(x, y)
    minimum = min(x, y)

    base = (maximum - 1) ** 2

    answer = 0
    if maximum % 2:
        answer = base + y + maximum - x
    else:
        answer = base + x + maximum - y

    return answer


if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        x, y = map(int, input().strip().split(" "))
        print(numberSpiral(x, y))
