import random
import time 

def intro_message():
	print('You are in a land that is Dominated by Dragons .')
	print('You See two Caves before you . In one Cave the Dragon is Friendly ')
	print('and will Share the treasure with you . the other Dragon ')
	print('is greedy and hingary , and will eat you on sight ')

def cavechoice() :
	n=int(input("Please Tell the cave number you want to Enter : "))
	return n


def runGame(choosencave) :	
	j=random.randint(1,2)
	if choosencave==j :
		print('\n Congratulations you are alive and have the treasure ')
	else :
		print('\n Sorry you are Dead ')

playagain='yes'

wh ile playagain=='yes'orplayagain=='y' :
	intro_message()

	cavenumber=cavechoice()

	runGame(cavenumber)

	playagain=input('Do you Want to Continue ')
