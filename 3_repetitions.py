def repetitions(string: str):
    currentMax = 1
    maximum = 1

    for i in range(1, len(string)):
        if string[i] == string[i - 1]:
            currentMax += 1
            maximum = max(currentMax, maximum)
        else:
            currentMax = 1

    print(maximum, end="")


if __name__ == "__main__":
    string = input().strip()
    repetitions(string)
