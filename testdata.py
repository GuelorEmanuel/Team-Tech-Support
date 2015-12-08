import sqlite3
from random import randint

RANGES = [
	[0, 12],
	[1, 5],
	[1, 5],
	[0, 12],
	[0, 12],
	[0, 12],
	[1, 5],
	[1, 5],
	[1, 5],
	[1, 5],
	[1, 5],
	[1, 5],
	[1, 5],
	[1, 5],
	[1, 5],
	[1, 5],
	[1, 5],
	[1, 5],
	[1, 5],
	[1, 5],
	[1, 5],
	[1, 5],
	[1, 5],
	[1, 5],
	[1, 5],
	[1, 5],
	[1, 5],
	[1, 5]
]

complement = range(10, 19) + [28]

db = sqlite3.connect("D:\\data.sqlite")
c = db.cursor()

c.execute("SELECT * FROM user WHERE student_id IS NOT NULL")
users = c.fetchall()

for user in users:
	id = user[0]
	values = "(" + str(id) + ", " + str(id) + ", "
	for i in range(1, 29):
		qrange = RANGES[i-1]
		minvalue = randint(qrange[0], qrange[1])
		maxvalue = randint(qrange[0], qrange[1])
		value = randint(qrange[0], qrange[1])
		chance = randint(1, 8)
		while maxvalue <= minvalue:
			maxvalue = randint(qrange[0], qrange[1])
			if minvalue == qrange[1] and maxvalue <= minvalue:
				minvalue = randint(qrange[0], qrange[1])
		if (not (i in complement)) or (chance == 6):
			while (chance != 6) and ((value > maxvalue) or (value < minvalue)):
				value = randint(qrange[0], qrange[1])
		else:
			while value in range(minvalue, maxvalue+1):
				value = randint(qrange[0], qrange[1])
				if maxvalue == qrange[1] and minvalue == qrange[0]:
					break
		values += str(value) + ", " + str(minvalue) + ", " + str(maxvalue)
		if i != 28:
			values += ", "
	values += ")"
	values = ("INSERT INTO profile VALUES " + values)
	c.execute(values)

db.commit()
db.close()