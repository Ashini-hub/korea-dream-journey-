import tkinter as tk
import random
import math

root = tk.Tk()
root.title("That Night, Our Decaf - V")
root.geometry("420×750")
root.configure(bg="#0a0a12")

# Canvas for background 
canvas = tk.Canvas(root,bg="#0a0a12", highlightthickness=0)
canvas.pack(fill="both",expand=True)

# Twinkling stars
stars = []
for_in range(60):
x = random.randint(0,420)
y = random.randint(0,750)
s = canvas.create_oval(x,y,x+2,y+2,fill="#ffe9a8",outline="")
stars.append((s,random.random()))

# Coffe beans falling 
beans = []
for_in range(15):
x = random.randint(0,400)
y = random.randict(-200,0)
bean = canvas.create_oval(x,y,x+6,y+10,fill="#3a2a1e",outline="#5a3a2a")
beans.append([bean,x,y,random.uniform(1,3)])

def animate():
  # stars twinkle 
  for s, phase in stars:
    alpha = 0.3 + 0.7* abc(math.sin(phase + animate.t*0.05))
    

  
