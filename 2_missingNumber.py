# def missingNumber(n: int, arr: list) -> None:
#     a = [i for i in range(1, n + 1) if i not in arr]
#     print(a[0], end=" ")

# = the above approach will give TLE


# below approach is XOR approach
def missingNumber(n: int, arr: list) -> None:
    xorOfN = 0
    for i in range(1, n + 1):
        xorOfN ^= i

    xorOfArray = 0
    for i in arr:
        xorOfArray ^= i

    print(xorOfN ^ xorOfArray)


if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().strip().split()))
    missingNumber(n, arr)
