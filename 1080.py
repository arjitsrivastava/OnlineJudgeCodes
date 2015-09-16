l = []
for i in xrange(1,11):
	a = int(raw_input())
	l.append(a)
print max(l)
print l.index(max(l))+1
