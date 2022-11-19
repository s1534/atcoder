days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
youbi = ['Sunday', 'Monday', 'Tuesday','Wednesday', 'Thursday', 'Friday', 'Saturday']

now = "20100102"
int_day = int(now)
int_year = int(int_day/10000)
int_month = int(int_day/100 % 100)
int_day %=100
daycount = 0
ans = 0

while 1:
    int_day += 1
    if(int_month ==1 or int_month == 3 or int_month == 5 or int_month ==7 or int_month == 8 or int_month == 10 or int_month ==12):
        daycount+=1
        if int_day == 31 :
            int_day = 1
            int_month+=1
            if(int_month == 12):
                int_month =1
                int_year +=1
    if(int_month == 4 or int_month == 6 or int_month==9 or int_month == 11):
        if(int_day == 30):
            int_day = 1
            int_month +=1
            daycount +=1
    ifint


    if(int_day == 13 and youbi[(daycount)%7] == 'Friday'):
        ans+=1

    if ans == 666:
        print(now):
