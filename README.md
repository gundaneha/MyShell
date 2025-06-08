# 🐚 MyShell - A Simple Unix Shell Clone in C

Welcome to **MyShell** – a lightweight and minimalist Unix Shell written in C! 🧠💻  
It mimics the basic functionality of a real shell like `bash` or `zsh`, allowing you to execute commands, navigate directories, and more. Ideal for learning how shells work under the hood.

---

## 🚀 Features

✅ Run external commands (like `ls`, `pwd`, `gcc`, etc.)  
✅ Built-in `cd` command to change directories  
✅ Built-in `exit` command to quit the shell  
✅ Fork-exec mechanism for running programs  
✅ Simple command parsing with arguments  

---

## 📂 File Structure

.
├── myshell.c      # Source code of the shell  
├── README.txt     # You're here! 📝

---

## 🛠️ How to Compile & Run

🔧 Compile the shell:
gcc myshell.c -o myshell


▶️ Run the shell:

## 🧪 Example Commands
mysh> ls
mysh> cd ..
mysh> pwd
mysh> echo Hello Shell!
mysh> exit


---

## 📌 Notes

This shell currently supports:
- External command execution
- Built-in `cd`
- Built-in `exit`

Coming soon:
- Pipes (`|`)
- Redirection (`>`, `<`)
- Background processes (`&`)

---

## 💡 Learning Objectives

By building this shell, you will:
- Understand how process creation works using `fork()` and `execvp()`
- Learn to parse and tokenize input strings
- Grasp basic Unix system programming concepts

---

## 👨‍💻 Author

Made with ❤️ by **Neha Gunda**  
🔧 C Programming | 🐧 Unix System Programming | 💡 Curious Learner

---

## 📢 Coming Soon

- [ ] I/O Redirection (`>`, `<`)  
- [ ] Piping support (`|`)  
- [ ] Background process execution (`&`)  
- [ ] Command history  
- [ ] Autocompletion  

---

## 🌟 Share It

If you find this project useful or inspiring, feel free to share it with your friends and fellow learners!
