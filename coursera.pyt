import re
fname = open('regex_sum_1464393.txt')
summ = 0

count = 0

for line in fname:

    f = re.findall('[0-9]+', line)

    for num in f:

        if num >= [0]:

            count = count + 1
            summ = summ + int(num)

print('There are', count, 'values with a sum =', summ)
