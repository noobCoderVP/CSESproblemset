def trailingZeros(n: int):
    total = 0
    while n > 0:
        n //= 5
        total += n
    return total


if __name__ == "__main__":
    n = int(input())
    print(trailingZeros(n))
