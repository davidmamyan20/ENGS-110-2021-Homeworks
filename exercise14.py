print("think a number in range 1-100")
min = 1
max = 100
while(True):
    computerguess = (max-min)//2+min
    userAnswer = input("Is this your number ?" +str(computerguess) + "\n please type Y if I guessed right, H if the number is too high, L if the number is too low")
    if (userAnswer == "Y"):
        print("User you're the loser")
        break
    elif(userAnswer == "H"):
        max=computerguess

        print(min,max)
    elif(userAnswer == "L"):
        min=computerguess
        print(min,max)
    else:
        print("Please input a valid answer mentioned in the instruction")
print("Bye!")        
