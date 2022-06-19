import random as rd

message1 = "Welcome to Guess The Number"
message2 = "You will have to guess a random number with 5 guesses."
lines1 = "---------------------------"
message_numberRange = "Input your range of numbers."

def guess():
    guessMax = 5
    guessCount = 0
    while guessCount < guessMax:
        guessInWord = "Guess " + str(guessCount)
        print("You guessed " + str(guessCount) + " time/s.")
        guess = int(input("What is your guess? "))

        if guess == randomNumber:
            _quit = input(name + ", you won! Type QUIT to quit. ")
            if _quit == "QUIT":
                quit()
        else:
            if guess < randomNumber:
                guessLargerSmaller = "larger"
                guessCount += 1
            elif guess > randomNumber:
                guessLargerSmaller = "smaller"
                guessCount += 1
            print("Wrong number! The generated number is " + guessLargerSmaller + " than your number.")
            print(lines1)

        if guessCount == guessMax:
            _quit = input(name + ", you lost! Type QUIT to quit. ")
            if _quit == "QUIT":
                quit()

def numberGen():
    first = int(input("Where to start? "))
    last = int(input("Where to end? "))             # error
    if first > last:
        print("Your first number cannot be larger than your last number.")
        numberGen()
    elif first == last:
        print("Your first number cannot be the same as your last number.")
        numberGen()
    global randomNumber
    randomNumber = rd.randint(first, last)
    guess()

def beginGame():
    print(message1)
    print(lines1)
    print(message2)
    global name
    name = input("What is your name? ")
    print(message_numberRange)
    numberGen()

beginGame()
