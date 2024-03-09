def compare_if_else(a, b):
    # Write your code here
    if a > b:
        return "greater"
    elif a < b:
        return "smaller"
    else:
        return "equal"

def main():
    a, b = map(int, input().split())
    ans = compare_if_else(a, b)
    print(ans)

if __name__ == "__main__":
    main()