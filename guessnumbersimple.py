import random

SavedNumber = random.randint(1, 100)
NumberOfSteps = 0

while(True):
    UserGuess = int(input("Please guess a number in range from 1 to 100: "))
     
    if(SavedNumber == UserGuess):
        print("You are the winner! After", NumberOfSteps, "steps")
        break
    elif(SavedNumber > UserGuess):
        print("The number is too small")
        NumberOfSteps = NumberOfSteps + 1
    else:
        print("The number is too big")
        NumberOfSteps = NumberOfSteps + 1

print("Goodbye")
