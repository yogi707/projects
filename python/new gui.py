from tkinter import *
from pygame import mixer


root=Tk();
mixer.init()

root.title('game');
root.geometry('300x300')


text=Label(root,text='hello how re you');
text.pack();

photo=PhotoImage(file="12.png")
photolabel=Label(root,image=photo)
photolabel.pack();
mixer.music.load("jk.mp3");
mixer.music.play();



btn=Button(root,image=photo,height='150',width='150')
btn.pack();

root.mainloop();
