def permutations(n: int) -> None:
    if n == 1:
        print(1, end=" ")
    elif n < 4:
        print("NO SOLUTION", end=" ")
    else:
        even = [i for i in range(1, n + 1) if i % 2 == 0]
        odd = [i for i in range(1, n + 1) if i % 2 == 1]
        final = even + odd
        for i in final:
            print(i, end=" ")


if __name__ == "__main__":
    n = int(input())
    permutations(n)
