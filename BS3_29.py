#Given Time in Minutes Convert it to hh:mm
t_mins = int(input().strip())
if t_mins<60:
    print(0,t_mins)
elif t_mins>=60:
    ans1 = t_mins//60
    ans2 = t_mins%60
    print(ans1,ans2)
