#Given two times in hr:min format, subtract (abs value) and print in the same format
time1 = list(map(int,input().split(" ")))
time2 = list(map(int,input().split(" ")))

if(time1[0]>time2[0] and time1[1]>time2[1]):
    ans1 = time1[0] - time2[0]
    ans2 = time1[1] - time2[1]
elif(time1[0]<time2[0] and time1[1]<time2[1]):
    ans1 = time2[0] - time1[0]
    ans2 = time2[1] - time1[1]
elif(time1[0]>time2[0] and time1[1]<time2[1]):
    ans1 = time1[0]-1-time2[0]
    ans2 = time1[1]+60-time2[1]
elif(time1[0]<time2[0] and time1[1]>time2[1]):
    ans1 = time2[0]-1-time1[0]
    ans2 = time2[1]+60-time1[1]
print(ans1,ans2)
