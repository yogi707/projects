from tkinter import *
import tkinter.messagebox


window=Tk();
window.title("kids learning game");
window.config(bg='black');

canvas=Canvas(window,height='100',width='200',bg='black');
canvas.pack(padx=3,pady=5);


canvas.create_oval(10,10,190,90,fill="blue",tags="oval");
canvas.create_text(100,50,text="Kids learning Game",font="Times 15 underline",tags="string")

frame0=Frame(window);
frame0.pack(padx=3,pady=5);
frame0.config(bg='black');

img1 = PhotoImage(file="20.png");
img2 = PhotoImage(file="2.png");
img3 = PhotoImage(file="3.png");


score = 0;
i=0;
img4 = PhotoImage(file="4.png");
img5 = PhotoImage(file="5.png");
img6 = PhotoImage(file="6.png");
img7 = PhotoImage(file="7.png");
img8 = PhotoImage(file="8.png");
img9 = PhotoImage(file="9.png");
img10 = PhotoImage(file="10.png");
img11= PhotoImage(file="11.png");
img12 = PhotoImage(file="13.png");
def Newgame():
    frame0.destroy();
    frame = Frame(window);
    frame.pack(padx=3, pady=5);
    frame.config(bg='green')

    label = Label(frame, text="Enter your name", bg="yellow")
    label.pack(padx=3, pady=5);
    name = StringVar();
    e = Entry(frame, textvariable=name)
    e.pack(padx=3, pady=5)
    label1 = Label(frame, text="Enter the picture type", bg="yellow");
    label1.pack(padx=3, pady=5);
    category = StringVar();
    e1 = Entry(frame, textvariable=category)
    e1.pack(padx=3, pady=5);

    def fun1():
        if (category.get() == "animal"):
            print("animal", category);
            animal(0);
        elif (category.get() == "car"):
            print("cars");
            car();
        else:
            tkinter.messagebox.showerror('type not found', 'Sorry !! you have enter wromg option');
            print("Sorry!!");

    btn1 = Button(frame, text="submit", command=fun1)
    btn1.pack(padx=3, pady=5);

    def animal(c):
        print(c);
        if(c>1):
            global i;
            i=0;
            global score;
            score=0;



        frame.destroy();
        frame1 = Frame(window);
        frame1.pack(padx=3, pady=5);
        frame1.config(bg='yellow');

        btn1 = Button(frame1, image=img1, text='dog', height='200', width='300')
        btn1.pack(padx=3, pady=5, side='left');

        btn2 = Button(frame1, image=img2, text='tiger', height='200', width='300')
        btn2.pack(padx=3, pady=5, side='right');

        btn3 = Button(frame1, image=img3, text='panda', height='200', width='300')
        btn3.pack(padx=3, pady=5, side='right')

        frame5 = Frame(window);
        frame5.pack(padx=3, pady=5);
        frame5.config(bg='black');
        label2 = Label(frame5, text="Choose any 3 option ", bg='yellow')
        label2.pack(padx=3, pady=5);
        frame2 = Frame(window);
        frame2.pack(padx=3, pady=5);
        frame2.config(bg='yellow');

        def func1():
            global i;
            i = i + 1;
            if (i == 1 or i == 2 or i == 3):
                global score;
                score = score + 5;
                button1.config(state=DISABLED);
                print("button1");

        def func2():
            global i;
            i = i + 1;
            if (i == 1 or i == 2 or i == 3):
                global score;
                score = score + 5
                button2.config(state=DISABLED);
                print("button2");

        def func3():
            global i;
            i = i + 1;
            if (i == 1 or i == 2 or i == 3):
                button3.config(state=DISABLED);
                print("button3");

        def func4():
            global i;
            i = i + 1;
            if (i == 1 or i == 2 or i == 3):
                button4.config(state=DISABLED);
                print("button4")

        def func5():
            global i;
            i = i + 1;
            if (i == 1 or i == 2 or i == 3):
                button5.config(state=DISABLED);
                print("button5");

        def func6():
            global i;
            i = i + 1;
            if (i == 1 or i == 2 or i == 3):
                global score;
                score = score + 5;
                button6.config(state=DISABLED);
                print("button6")

        def func7():
            button8['text'] = score;
            print(score);

            retry=Button(frame7,text='Retry',command=func8,height=2,width=5);
            retry.pack(padx=3, pady=5,side=LEFT);
            e1= Button(frame7,text='Exit',command=Exit, height=2, width=5);
            e1.pack(padx=3, pady=5,side=RIGHT);

            if (score == 15):
                tkinter.messagebox.showinfo('Level Up', 'Congratulation !! You have cleared the first level');
                Level2();

        def func8():
            frame5.destroy();
            frame4.destroy();
            frame3.destroy();
            frame2.destroy();
            frame1.destroy();
            frame7.destroy();
            animal(i);

        def Level2():
            frame5.destroy();
            frame4.destroy();
            frame3.destroy();
            frame2.destroy();
            frame1.destroy();
            frame7.destroy();
            print("level 2");

            global i;
            i=0;
            global score;
            score=0;


            frame11 = Frame(window);
            frame11.pack(padx=3, pady=5);
            frame11.config(bg='yellow');
            frame17=Frame(window);
            frame17.pack(padx=3, pady=5)
            frame17.config(bg='yellow');

            btn4 = Button(frame11, image=img7, text='lion', height='130', width='250')
            btn4.pack(padx=3, pady=5, side='left');

            btn5 = Button(frame11, image=img8, text='cat', height='130', width='250')
            btn5.pack(padx=3, pady=5, side='right');

            btn6 = Button(frame11, image=img9,text='squeral', height='130', width='250')
            btn6.pack(padx=3, pady=5, side='right')

            btn7 = Button(frame17, image=img10, text='leopard', height='130', width='250')
            btn7.pack(padx=3, pady=5, side='right')

            btn8 = Button(frame17, image=img11, text='camel', height='130', width='250')
            btn8.pack(padx=3, pady=5, side='right')

            btn9 = Button(frame17, image=img12, text='horse', height='130', width='250')
            btn9.pack(padx=3, pady=5, side='right')

            frame12 = Frame(window);
            frame12.pack(padx=3, pady=5);
            frame12.config(bg='black');
            label20 = Label(frame12, text="Choose any 6 option ", bg='yellow')
            label20.pack(padx=3, pady=5)

            frame13 = Frame(window);
            frame13.pack(padx=3, pady=5);
            frame13.config(bg='yellow');


            def funct1():
                global i;
                i = i + 1;
                if (i == 1 or i == 2 or i == 3 or i==4 or i==5 or i==6):
                    global score;
                    score = score + 5;
                    button10.config(state=DISABLED);
                    print("button1");

            def funct2():
                global i;
                i = i + 1;
                if (i == 1 or i == 2 or i == 3 or i==4 or i==5 or i==6):
                    button20.config(state=DISABLED);
                    print("button2");

            def funct3():
                global i;
                i = i + 1;
                if (i == 1 or i == 2 or i == 3 or i==4 or i==5 or i==6):
                    global score;
                    score = score + 5;
                    button30.config(state=DISABLED);
                    print("button3");

            def funct4():
                global i;
                i = i + 1;
                if (i == 1 or i == 2 or i == 3 or i==4 or i==5 or i==6):
                    global score;
                    score = score + 5;
                    button40.config(state=DISABLED);
                    print("button4")

            def funct5():
                global i;
                i = i + 1;
                if (i == 1 or i == 2 or i == 3 or i==4 or i==5 or i==6):
                    button50.config(state=DISABLED);
                    print("button5");

            def funct6():
                global i;
                i = i + 1;
                if (i == 1 or i == 2 or i == 3 or i==4 or i==5 or i==6):
                    global score;
                    score = score + 5;
                    button60.config(state=DISABLED);
                    print("button6");

            def funct9():
                global i;
                i = i + 1;
                if (i == 1 or i == 2 or i == 3 or i==4 or i==5 or i==6):
                    button90.config(state=DISABLED);
                    print("button7");

            def funct10():
                global i;
                i = i + 1;
                if (i == 1 or i == 2 or i == 3 or i==4 or i==5 or i==6):
                    global score;
                    score = score + 5;
                    button100.config(state=DISABLED);
                    print("button8");

            def funct11():
                global i;
                i = i + 1;
                if (i == 1 or i == 2 or i == 3 or i==4 or i==5 or i==6):
                    button110.config(state=DISABLED);
                    print("button9")

            def funct12():
                global i;
                i = i + 1;
                if (i == 1 or i == 2 or i == 3 or i==4 or i==5 or i==6):
                    global score;
                    score = score + 5;
                    button120.config(state=DISABLED);
                    print("button10")

            def funct13():
                global i;
                i = i + 1;
                if (i == 1 or i == 2 or i == 3 or i==4 or i==5 or i==6):
                    button130.config(state=DISABLED);
                    print("button11")

            def funct14():
                global i;
                i = i + 1;
                if (i == 1 or i == 2 or i == 3 or i==4 or i==5 or i==6):
                    button140.config(state=DISABLED);
                    print("button12")



            def funct7():
                button80['text'] = score;
                print(score);

                retry1 = Button(frame16, text='Retry', command=funct8, height=2, width=5);
                retry1.pack(padx=3, pady=5, side=LEFT);
                e2 = Button(frame16, text='Exit', command=Exit, height=2, width=5);
                e2.pack(padx=3, pady=5, side=RIGHT);

                if (score == 30):
                    tkinter.messagebox.showinfo('Level Up', 'Congratulation !! You have cleared the first leve 2');
                    #Level2();

            def funct8():
                frame11.destroy();
                frame12.destroy();
                frame13.destroy();
                frame14.destroy();
                frame15.destroy();
                frame16.destroy();
                frame17.destroy();
                Level2();

            button10 = Button(frame13, text="Lion", command=funct1, height=2, width=7);
            button10.pack(padx=3, pady=5, side=LEFT);

            button20 = Button(frame13, text="Panda", command=funct2, height=2, width=7);
            button20.pack(padx=3, pady=5, side=LEFT);

            button30 = Button(frame13, text="cat", command=funct3, height=2, width=7);
            button30.pack(padx=3, pady=5, side=LEFT);

            button40 = Button(frame13, text="Leopard", command=funct4, height=2, width=7);
            button40.pack(padx=3, pady=5, side=LEFT);

            button50 = Button(frame13, text="Snake", command=funct5, height=2, width=7);
            button50.pack(padx=3, pady=5, side=LEFT)

            button60 = Button(frame13, text="Horse", command=funct6, height=2, width=7);
            button60.pack(padx=3, pady=5, side=LEFT);

            button90 = Button(frame13, text="Tiger", command=funct9, height=2, width=7);
            button90.pack(padx=3, pady=5, side=LEFT);

            button100 = Button(frame13, text="Squeral", command=funct10, height=2, width=7);
            button100.pack(padx=3, pady=5, side=LEFT);

            button110 = Button(frame13, text="Fox", command=funct11, height=2, width=7);
            button110.pack(padx=3, pady=5, side=LEFT);

            button120 = Button(frame13, text="Camel", command=funct12, height=2, width=7);
            button120.pack(padx=3, pady=5, side=LEFT);

            button130 = Button(frame13, text="Elephant", command=funct13, height=2, width=7);
            button130.pack(padx=3, pady=5, side=LEFT);

            button140 = Button(frame13, text="Wolf", command=funct14, height=2, width=7);
            button140.pack(padx=3, pady=5, side=LEFT);




            frame14 = Frame(window);
            frame14.pack(padx=3, pady=5);
            frame14.config(bg='yellow')

            button70 = Button(frame14, text='Enter', command=funct7, height=3, width=5)
            button70.pack(padx=3, pady=5, side=BOTTOM);

            frame15 = Frame(window)
            frame15.pack(padx=3, pady=5)

            label30 = Label(frame15, text='Your score is', anchor=E)
            label30.pack(padx=3, pady=5, side=LEFT);

            button80 = Button(frame15, text='0', anchor=E)
            button80.pack(padx=3, pady=5, side=RIGHT);

            frame16 = Frame(window)
            frame16.pack(padx=3, pady=5);
            frame16.config(bg='yellow');

























        button1 = Button(frame2, text="Dog", command=func1, height=2, width=5);
        button1.pack(padx=3, pady=5, side=LEFT);

        button2 = Button(frame2, text="tiger", command=func2, height=2, width=5);
        button2.pack(padx=3, pady=5, side=LEFT);

        button3 = Button(frame2, text="wolf", command=func3, height=2, width=5);
        button3.pack(padx=3, pady=5, side=LEFT);

        button4 = Button(frame2, text="leopard", command=func4, height=2, width=5);
        button4.pack(padx=3, pady=5, side=LEFT);

        button5 = Button(frame2, text="snake", command=func5, height=2, width=5);
        button5.pack(padx=3, pady=5, side=LEFT)

        button6 = Button(frame2, text="panda", command=func6, height=2, width=5);
        button6.pack(padx=3, pady=5, side=LEFT);

        frame3 = Frame(window);
        frame3.pack(padx=3, pady=5);
        frame3.config(bg='yellow')

        button7 = Button(frame3, text='Enter', command=func7, height=3, width=5)
        button7.pack(padx=3, pady=5, side=BOTTOM);

        frame4 = Frame(window)
        frame4.pack(padx=3, pady=5)

        label3 = Label(frame4, text='Your score is', anchor=E)
        label3.pack(padx=3, pady=5, side=LEFT);

        button8 = Button(frame4, text='0', anchor=E)
        button8.pack(padx=3, pady=5, side=RIGHT);

        frame7 = Frame(window)
        frame7.pack(padx=3, pady=5);
        frame7.config(bg='yellow');





    def car():
        frame2 = Frame(window);
        frame2.pack();

        btn3 = Button(frame2, image=img4, height='200', width='300')
        btn3.pack(side='left');

        btn4 = Button(frame2, image=img5, height='200', width='300')
        btn4.pack(side='right');

        btn5 = Button(frame2, image=img6, height='200', width='300')
        btn5.pack(side='right');

label14=Label(frame0,text='Main Menu',font='Times 15 underline',);
label14.pack(padx=1,pady=3);


newgame=Button(frame0,text='New Game',command=Newgame,height=2,width=10);
newgame.pack(padx=1,pady=3);

resumegame=Button(frame0,text='Resume Game',height=2,width=10);
newgame.pack(padx=2,pady=5);

Higestscore=Button(frame0,text='Higest Score',height=2,width=10);
Higestscore.pack(padx=1,pady=3);

help=Button(frame0,text='Help',height=2,width=10);
help.pack(padx=1,pady=3);


def Exit():
    window.destroy();

exit=Button(frame0,text='Exit',command=Exit,height=2,width=10);
exit.pack(padx=1,pady=3);



window.mainloop();
        
        

