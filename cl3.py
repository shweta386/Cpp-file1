class Demo():
	a=10
	def read(self):
		self.a=int(input("Enter value for a : "))
	def disp(self):
		print("In disp()...")
		print(self.a)
	def setValue(self,b):
		self.a=b


d1=Demo()
d1.read()
d1.disp()
print("After commit")
d1.setValue(200)
d1.disp()
