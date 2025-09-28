# 42 Berlin Piscine — Shell00 · C00 · C01 · Rush00

This repository collects my work during the **42 Berlin Piscine** — an intense month of learning, coding, and problem-solving.  
Inside you’ll find my progress through **Shell00**, **C00**, **C01**, and the collaborative project **Rush00**.

---

## 🚀 What I Learned

### 🐚 Linux & Shell
- Gained confidence using **Linux** and the command line as my main tool.
- Learned essential commands for **navigation, file manipulation, permissions, and redirections**.
- Understood the structure of the file system and how processes interact with it.
- Discovered the value of precision — one missing space or wrong symbol can change everything.

### 💻 C Programming
- How to compile with `gcc` and strict flags (`-Wall -Wextra -Werror`).
- Core concepts of C:
  - **Functions**: declaring, defining, and reusing them.
  - **Variables and types**: integers, chars, and pointers.
  - **Control flow**: `if`, `while`, `for` loops.
  - **Pointers**: understanding memory addresses vs. values.
- Why even a simple `ft_putchar` matters: it’s the gateway to understanding how programs talk to the system.

### 🤝 Teamwork — Rush00
- First taste of **teamwork under time pressure** at 42.
- Learned how to split responsibilities: loop design, decision logic, testing.
- Experienced the joy of turning a rough idea into a working ASCII-art rectangle printer.

---

## 🧩 Rush00 — Rectangle Printer

The **Rush00** project was one of the highlights of the Piscine. The goal was to **print rectangles using ASCII characters**, given a width (`x`) and height (`y`).  
We not only completed the required version but also implemented all variants for bonus practice.

### 🔧 Quick Start
```sh
gcc -Wall -Wextra -Werror *.c -o rush
./rush   # main.c calls rush(5, 5) by default
