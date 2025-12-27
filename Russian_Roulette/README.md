# 🎯 Russian Roulette Game              [ON HOLD]

A simple simulation of the classic Russian Roulette, built in C for fun and practice.  
This project experiments with **arrays**, **randomness**, and **game logic simulation**.

---

## ⚙️ Current Features
- 🎲 Uses `rand()` to generate random chamber positions  
- 🔫 Simulates a revolver cylinder using arrays  
- 🚪 Allows quitting after all rounds are complete  

---

## 🚧 Planned Features

### 🔥 Under Fire Logic
- [ ] Player’s choices (shoot / skip)
- [ ] CPU’s turn logic
- [ ] Random cylinder spin before each shot

### 🖥️ Under Display
- [ ] ASCII art for revolver firing  
- [ ] Clear terminal between rounds for smooth animation  

### 🗂️ Other Additions
- [ ] File logging for round outcomes  
- [ ] Modularize code into multiple `.c` and `.h` files  

---

## 🗓️ Progress Report
| Date | Update |
|------|---------|
| 12-10 | First commit — base version created |

---

## 💡 Notes
> This is a hobby project made to explore game simulation logic in C.  
> Future updates may include turn-based logic, score tracking, and file storage.

---

## 🧰 Build & Run
```bash
gcc russian_roulette.c -o russian_roulette
./russian_roulette
