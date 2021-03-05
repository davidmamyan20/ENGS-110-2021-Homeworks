def nthFibonacci(number):
    if(number <= 100 and number >= 2):
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
def ifPrime(n):
    if (n == 0 or n == 1):
        print ("The number is not prime")
    for b in range(3,int(n**0.5)+1):
        if n%b == 0:
            print("your number is not prime")
            return False
    print("your number is prime")
    return True

def binary(number):
    binary = [0,0,0,0,0,0,0,0]
    b = len(binary)-1
    while(number > 0):
        binary[b] = number%2
        b = b -1
        number = int(number/2)
    print( binary)

def main():
    while (True):
        N = int(input("Enter your number please: "))
        if(nthFibonacci(N) !=1):
            ifPrime(N)
            binary(N)
            break
main()
        
