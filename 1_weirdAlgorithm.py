def weirdAlgorithm(n: int) -> None:
    while n != 1:
        print(n, end=" ")
        if n % 2:
            n = 3 * n + 1
        else:
            n = n // 2
    print(n, end=" ")


if __name__ == "__main__":
    n = int(input())
    weirdAlgorithm(n)
