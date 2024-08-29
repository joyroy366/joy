import calendar
print("\t\t\t\tWellcome to my PYTHON Calender")
print("\t\t\t  **********************************")
yy=int(input("** Enter the Year:"))
print(calendar.calendar(yy))
mm=int(input("** Enter the monthe:"))
print(calendar.month(yy,mm))