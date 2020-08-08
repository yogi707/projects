from tkinter import *
root=Tk();
root.title('Games')


rootlabel=Label(root,text='welcome to our game',font='40',fg='red')
rootlabel.grid(row=0, column=0);
label1=Label(root,text='enter your name');
label1.grid(row=1)
e=Entry(root)
e.grid(row=2, column=1)
btn1=Button(root,text='jkjkh',height=5,width=5)
btn1.grid(row=3, column=0)

btn2=Button(root,text='jkjkh',height=5,width=5)
btn2.grid(row=3, column=1)

btn3=Button(root,text='jkjkh',height=5,width=5)
btn3.grid(row=3, column=2)










root.mainloop();
