#!/usr/bin/python3

if __name__ == "__main__":
    """Prints the number and list of the arguments."""
    import sys

    cnt = len(sys.argv) - 1
    if cnt == 0:
        print("0 arguments.")
    elif cnt == 1:
        print("1 argument:")
    else:
        print("{} arguments:".format(cnt))
    for i in range(cnt):
        print("{}: {}".format(i + 1, sys.argv[i + 1]))
