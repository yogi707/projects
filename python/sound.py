from tkinter import *

window=Tk();
window.title("canvas")

canvas=Canvas(window,height='100',width='200',bg="red");
canvas.pack();


canvas.create_rectangle(10,10,190,90,tags="rect");
canvas.create_text(95,50,text="Hello",font="Times 20 underline",tags="string")
frame=Frame(window)
frame.pack();

label=Label(frame,text="hello world",bg="yellow",fg="green");
label.pack();
canvas1=Canvas(frame,height='100',width='200',bg="red");
canvas1.pack();

canvas1.create_oval(10,10,190,90,fill="blue",tags="oval")
canvas1.create_text(95,50,text="Hello",font="Times 20 underline",tags="string")

window.mainloop()