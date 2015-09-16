while 1:
	a, b, c, d = map(int, raw_input().split())
	if a == 0 and b == 0 and c == 0 and d == 0:
		break
	ans = 0
	if a == c and b == d:
		print 0
		continue

	if a == c or b == d:
		print 1
		continue 
	
	if abs(a - c) == abs(b - d):
		print 1
		continue

	print 2
