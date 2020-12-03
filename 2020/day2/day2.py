#!/usr/bin/python3

def split(word):
    return [char for char in word]

def main():
    valid = 0
    valid2 = 0
    file = open("input.txt", "r")
    lines = file.readlines()
    for line in lines:
        aa = line.split()
        # print(line.split())
        low = int(aa[0].split("-")[0])
        high = int(aa[0].split("-")[1])
        cred = aa[1].strip(":")
        passs = aa[2]

        # print(high)
        # print(cred)
        print(passs)
        ###### Part 1
        local = 0
        for char in passs:
            if cred == char:
                local += 1

        
        if local >= int(low):
            if local <= int(high):
                valid += 1


        ###### Part 2
        simp = split(passs)
        trash = [simp[low - 1], simp[high - 1]]
        print(trash)
        print(cred)

        #temp
        temp = 0
        for ele in trash:
            if ele == cred:
                temp += 1
        if temp == 1:
            valid2 += 1

    # print("part 1 valid: " + str(valid))
    print("part 2 valid: " + str(valid2))


main()
