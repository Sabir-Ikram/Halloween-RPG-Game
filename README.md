# 🎃 Halloween RPG C++

A **2D Halloween-themed platformer game** built with **C++** and **SFML 3.0.2**. Navigate dangerous platforms, collect diamonds, use potions to survive, and escape enemies to reach the exit!

---

## 🖼️ Preview



---

## 🎮 Features

* ⚙️ **Advanced collision system** with platforms and walls
* 🧍 **Animated character sprites** for left/right movement
* 👾 **Mobile enemies** with patrol AI
* ❤️ **Health system** with 5 lives and visual indicator
* 💎 **Collectible items**: diamonds and health potions
* 🚪 **Multiple levels** with door navigation
* 🔥 **Obstacles**: lava and enemies that reduce health
* 🧭 **Complete interface**: main menu, game over, and victory screens

---

## 🕹️ Controls

| Key            | Action                     |
| -------------- | -------------------------- |
| ←              | Move left                  |
| →              | Move right                 |
| ↑              | Jump                       |
| ↓              | Move down                  |
| 🖱️ Left Click | Interact with menu buttons |

---

## 🛠️ Requirements

* 🧰 **Visual Studio 2022** (or later)
* 💻 **Windows 10/11 (x64)**
* 🎨 **SFML 3.0.2**

---

## 🚀 Installation

### 1. Clone the repository

```bash
git clone https://github.com/YOUR-USERNAME/halloween-game-sfml.git
cd halloween-game-sfml
```

### 2. Download SFML 3.0.2

* Download from [sfml-dev.org](https://www.sfml-dev.org/)
* Extract to: `C:\SFML-3.0.2\`

### 3. Configure Visual Studio

**C/C++ → General → Additional Include Directories:**

```
C:\SFML-3.0.2\include
```

**Linker → General → Additional Library Directories:**

```
C:\SFML-3.0.2\lib
```

**Linker → Input → Additional Dependencies:**

```
Debug: sfml-graphics-d.lib; sfml-window-d.lib; sfml-system-d.lib; sfml-audio-d.lib
Release: sfml-graphics.lib; sfml-window.lib; sfml-system.lib; sfml-audio.lib
```

### 4. Copy SFML DLLs

Copy from `C:\SFML-3.0.2\bin\` to your executable folder:

**Debug:**

```
sfml-graphics-d-3.dll
sfml-window-d-3.dll
sfml-system-d-3.dll
sfml-audio-d-3.dll
openal32.dll
```

**Release:** same files without `-d`

### 5. Add game resources

Place all `.png` and `.wav` files in the same folder as your executable.

### 6. Build and run

Select **x64 platform** and **Debug/Release** configuration, then press **F5**.

---

## 🎯 Objective

* 🔥 Avoid lava and enemies
* 💎 Collect all 5 diamonds
* 🧪 Use potions to restore health
* 🚪 Reach the exit door (bottom-left blue door) to win

---

## Developed by

**Ikram Sabir**
Engineering student at **Euromed University of Fez (EIDIA)**
