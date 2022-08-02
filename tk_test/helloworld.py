from tkinter import *

root = Tk()

e = Entry(root)
e.pack()

def myClick():
    hello = "Hello "+e.get()
    myLabel = Label(root,text=hello)
    myLabel.pack()

myLabel = Label(root, text="Hello World!")

myButton = Button(root,text="Click me!",command=myClick)
myButton.pack()

myLabel.pack()

root.mainloop()

