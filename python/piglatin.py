import fileinput

vowels = {'a','e','i','o','u','y'}

for line in fileinput.input():
    line = line.split()

    ans = ""
    for word in line:
        begin = ""
        while word[0] not in vowels:
            begin += word[0]
            word = word[1:]

        if begin == "":
            ans += word + "yay "
        else:
            ans += word + begin + "ay "

    print(ans)
