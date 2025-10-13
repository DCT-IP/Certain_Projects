# ⚔️ Turn-Based RPG (Stack Experiment)

A console-based **turn-based RPG prototype** built in C++.  
This project started as an experiment to learn how **stacks** and **queues** can be applied in gameplay logic — like tracking player moves and simulating turns.

---

## ⚙️ Current Features
- 🧍 Player movement using **W/A/S/D** keys  
- 📜 Stack used to **record player movement history**  
- 🚪 Exit anytime with `'q'` command  
- 🎲 Basic random event placeholders (for future updates)  
- ↩️ Added Undo movement
---

## 🚧 Planned Features

### 🧭 Gameplay Logic
- [x] Undo movement using `stack.pop()`  
- [ ] Add map/grid system (2D array for player position)  
- [ ] Add random encounters or events after moves  
- [ ] Implement simple combat system (HP, damage, etc.)  

### 🧠 Data Structures
- [ ] Use **queue** to simulate turn-based combat  
- [ ] Store movement history or events in a separate stack  
- [ ] Introduce `struct` or `class` for Player and Enemy  

### 🖥️ Display / UI
- [ ] Add ASCII art for map & events  
- [ ] Clear console per turn for smoother animation  
- [ ] Display movement logs and current coordinates  

### 🗂️ Other Additions
- [ ] Save/load game progress using file I/O  
- [ ] Modularize code into multiple files (`game.cpp`, `map.cpp`, etc.)

---

## 🗓️ Progress Report
| Date | Update |
|------|---------|
| 12-10 | First commit — base version with movement and stack tracking |
| 14-10 | Second commit — added stack pop feature to perform one undo|

---

## 💡 Notes
> This project explores **how core data structures (stack/queue)** can drive game logic.  
> It’s more of a *sandbox experiment* for learning algorithmic design through gameplay.

---

## 🧰 Build & Run
```bash
g++ GameMain.cpp -o rpg_game
./rpg_game
