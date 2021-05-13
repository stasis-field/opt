# Math operations on time.
import sys


#Add two sets of time together (3:14 + 5:24)

#ask user for two separate times
termOne = 0
termOneStr = 0
termOneStrMin = 0
termOneStrHour = 0

termOneIntMin = 0
termOneIntHour = 0

termTwoStr = 0
termTwoStrMin = 0
termTwoStrHour = 0

termTwoIntMin = 0
termTwoIntHour = 0

result = 0
resultMin = 0
resultMinStr = 0
resultMinRemain = 0
resultHour = 0
resultHourStr =0
result = 0

if len(sys.argv) == 2:
		#termOne
	termOne = str(sys.argv[1])
		#termTwo
	termTwo = str(sys.argv[2])

			#add the two times

			#parse first term
			#convert to str termOneStr
	termOneStr = str(termOne)
				#separate hours from minutes
					#if string termOneStr contains : 
	if ":" in termOneStr:
						#split termOneStr by : and store in termOneStrHour and termOneStrMin
		termOneStrHour = termOneStr.split(":")[0]
		termOneStrHour = termOneStr.split(":")[1]
					#else:
	else:
						#separate last 2 chars from preceding chars and store in var termOneStrMin
		termOneStrMin = termOneStr[-2] + termOneStr[-1]
						#subtract last 2 chars from termOneStr and store in var termOneStrHour
		termOneStrHour = termOneStr[0:-2]
				#convert back into int
					#var termOneIntHour = int(termOneStrHour)
	termOneIntHour = int(termOneStrHour)
					#var termOneIntMin = int(termOneStrMin)
	termOneIntMin = int(termOneStrMin)

			#store second time in var termTwo
			
				#convert to str termTwoStr
	termTwoStr = str(termTwo)
				#separate hours from minutes
					#if string termTwoStr contains :
	if ":" in termTwoStr:
						#split termTwoStr by : and store in termTwoStrHour and termOneStrMin
		termTwoStrHour = termTwoStr.split(":")[0]
		termTwoStrMin = termTwoStr.split(":")[1]
					#else:
	else:
						#separate last 2 chars from preceding chars and store in var termTwoStrMin
		termTwoStrMin = termTwoStr[-2] + termTwoStr[-1]
						#subtract last 2 chars from termTwoStr and store in var termTwoStrHour
		termTwoStrHour = termTwoStr[0:-2]
				#convert back to int
					#var termTwoIntHour = int(termTwoStrHour)
	termTwoIntHour = int(termTwoStrHour)
					#var termTwoIntMin = int(termTwoStrMin)
	termTwoIntMin = int(termTwoStrMin)
			
			#add minutes
				#resultMinRemain = 0
	resultMinRemain = 0
				#resultMin = termOneIntMin + termTwoIntMin
	resultMin = termOneIntMin + termTwoIntMin
				#if resultMin == 60
	if resultMin == 60:
					#resultMin = 0
		resultMin = 0
					#resultMinRemain = 1
		resultMinRemain = 1
				#if resultMin > 60
	if resultMin > 60:
					#resultMin = resultMin % 60
		resultMin = resultMin % 60
					#resultMinRemain = 1
		resultMinRemain = 1

			#add hours
				#resultHour = termOneIntHour + termTwoIntHour + resultMinRemain
	resultHour = termOneIntHour + termTwoIntHour + resultMinRemain

		#print resulting time
			#format resultMin
				#resultMinStr = str(resultMin)
	resultMinStr = str(resultMin)
				#if resultMinStr length == 1
	if len(resultMinStr) == 1:
					#resultMinStr = "0" + resultMinStr
		resultMinStr = "0" + resultMinStr
				#resultHourStr = str(resultHour)
	resultHourStr = str(resultHour)
			#result = resultHourStr + ":" + resultMinStr
	result = resultHourStr + ":" + resultMinStr
			#print(result)
	print(result)

else:
	print("Please input two times to add as arguments in this form: timecalc.py time1 time2")
