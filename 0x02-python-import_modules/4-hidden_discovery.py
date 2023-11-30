#!/usr/bin/python3

if __name__ == "__main__":
    """Prints the Names defined by hidden_4 module."""
    import hidden_4

    Names = dir(hidden_4)
    for name in Names:
        if name[:2] != "__":
            print(name)
