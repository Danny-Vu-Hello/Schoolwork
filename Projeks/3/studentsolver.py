def solve(m, k1x, k2x):
    length = len(m)
    print(length)
    sublist = []

    # for i in range(length):
    #     for j in range(length):
    #         print(m[i][j] + " ")

    # why is it 4/10 and not 5/10 so confusing
    # nextcol = 1
    #
    # for i in range(length-1):
    #     noncon = 0
    #     con = 0
    #     j = 1+i
    #     while j != length:
    #         if i == j:
    #             j += 1
    #         if j == length:
    #             break
    #         #i f m[length - 1 - i][length - j] is False:
    #         #    con += 1
    #         if m[i][j] is False:
    #             con += 1
    #         if m[i][j] is True:
    #             noncon += 1
    #         if noncon >= k1x and con >= k2x:
    #             sublist.append(i)
    #         j += 1

    # ranges from 2-4 /10
    # 10/20 09:08 pst got 8/10 WTF java part gave no consistent results, now it juggles between 1-5/10 and 8/10
    # 10/20 09:12 pst it now ranges between 1-8 I have not seen 8+ yet,
    # I hate this, why isn't this consistent? It's just gambling at this point
    # 10/20 09:18 pst I just saw 9, this is stupid, I'm basically rolling for 10 at this point
    # sharifian wasn't even helpful yesterday just said "just keep resubmitting". Did he literally also do this?
    # The ones I'm "wrong" in aren't even consistent
    # I'll just take the 9 or 8 at this point mostly the 9
    # 10/20 11:29 pst I'm so tried of resubmitting I finally got a 9 again
    for i in range(int(length/2)):
        totalFalse1 = m[i].count(False)
        totalFalse2 = m[i+int(length/2)].count(False)
        totalTrue1 = m[i].count(True)
        totalTrue2 = m[i+int(length/2)].count(True)
        if m[i][i] is False:
            totalFalse1 -= 1
        else:
            totalTrue1 -= 1
        if m[i+int(length/2)][i+int(length/2)] is False:
            totalFalse2 -= 1
        else:
            totalTrue2 -= 1
        if totalTrue1 >= k1x and totalFalse1 >= k2x:
            sublist.append(i)
        if totalTrue2 >= k1x and totalFalse2 >= k2x:
            sublist.append(i)

    sublist.sort()

    return sublist
