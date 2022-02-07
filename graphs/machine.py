x = int(input())
y = 4 * 60 

class autoclave():
    def init(self,quan,time):
        self.quan= quan
        self.time= time


auto1 = autoclave(65,55) 
auto2 = autoclave(35,30) 
ac1 = 0
ac2 = 0



def effcalc(x,y,ac1,ac2):
    a_cycle1 = ac1
    a_cycle2 = ac2
    cycles1 = x // auto1.quan
    print(cycles1)

    remainder1 = x % auto1.quan

    cycles2 = x // auto2.quan
    print(cycles2)
    
    remainder2 = x % auto2.quan
    print(remainder1+remainder2)
    if remainder1 + remainder2 <= auto2.quan :
        print("fucku" + str(a_cycle2) + str(a_cycle2))
        a_cycle2 = a_cycle2 +1
        x = x-auto2.quan
        effcalc(x,y,a_cycle1,a_cycle2)
    elif x <=  0 :
        print("end")

    else:
        print("fucku" + str(a_cycle1) + str(a_cycle2))

        a_cycle1 = a_cycle1 +1 
        x = x-auto1.quan
        effcalc(x,y,a_cycle1,a_cycle2)
        #effcalc(x,y)


effcalc(x,y,ac1,ac2)