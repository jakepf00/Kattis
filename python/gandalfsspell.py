import fileinput

def main():
    a = fileinput.input()
    code = a[0].strip()
    sentence = a[1].split()

    if (len(code) != len(sentence)):
        print("False")
        return

    d = {}
    e = {}
    for i in range(0, len(code)):
        if sentence[i] in d.keys() and d[sentence[i]] != code[i]:
            print("False")
            return
        if code[i] in e.keys() and e[code[i]] != sentence[i]:
            print("False")
            return
        d[sentence[i]] = code[i]
        e[code[i]] = sentence[i]

    print("True")

main()
