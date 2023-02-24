def increasingArray(n: int, arr: list) -> None:
    total = 0
    for i in range(n - 1):
        if arr[i] > arr[i + 1]:
            total += arr[i] - arr[i + 1]
            arr[i + 1] = arr[i]
        else:
            continue

    print(total, end="")


if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().strip().split(" ")))
    increasingArray(n, a)
