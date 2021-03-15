def nthFibonacci(number):
    if(number >= 0):
        a1 = 0
        a2 = 1
        Sum = 0
        while (a2 <= number):
            Sum = a2 + Sum
            temp = a1 + a2
            a1 = a2
            a2 = temp
        print(Sum)
        return Sum
    else:
        print("Please enter a valid number")
        return 1
def ifPrime(num):
    if (num == 2):
        print("it is a prime number")
    elif(num<=1):
        print("it is not a prime number")
    else:
        if(num > 1):
            for b in range (2,num):
                if (num % b == 0):
                    print("it is not a prime number")
                    return False
                print("it is a prime number")
                return True

def binary(number):
    binary = [0,0,0,0,0,0,0,0]
    b = 7
    while(number > 0):
        binary[b] = number%2
        b = b -1
        number = int(number/2)
    print(binary)

def main():
    while (True):
        N = int(input("Enter your number please: "))
        if(nthFibonacci(N) !=1):
            ifPrime(N)
            binary(N)
            break
main()
        
