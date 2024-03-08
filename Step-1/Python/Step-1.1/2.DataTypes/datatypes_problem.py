def datatypes(type):
    if type == "int":
        return 4
    elif type == "Long":
        return 8
    elif type == "Float":
        return 4
    elif type == "Double":
        return 8
    elif type == "Character":
        return 1
    else:
        return -1

def main():
    type = input()
    ans = datatypes(type)
    print(ans)

if __name__ == "__main__":
    main()