![The Forgotten Trial Banner](titleart.png)

# **The Forgotten Trial**  
*A Tactical RPG Fantasy Mystery by PhoenixGold Game Studios*

---

## 🧩 Overview

**The Forgotten Trial** is a single-player, 3D top-down tactical RPG fantasy mystery set deep within a cursed, long-abandoned fortress fantasy dungeon.
Your party awakens with no memory. No clues—except the voice of an unpredictable Narrative that whispers fragments of truth.

Guide your team through **puzzles**, **exploration**, and a **dynamic narrative** where every playthrough is a different tale of memory, betrayal, and escape.

---

## ⚔️ Features

* 🎯 **Top-Dowm Tactical Combat**
  Top-down based battles inspired by genre classics like *Fire Emblem* and *Paths of Exile*.

* 🧠 **Dynamic Narrative System**
  A cryptic narrative generates memory fragments, and ghostly dialogues that shift with each playthrough.

* 👥 **Party Management**
  Control a diverse team of 1–4 characters. Each has their own mysterious past, evolving personalities, and trust-based reactions to your decisions.

* 🕵️ **Mystery-Driven Exploration**
  Discover lost knowledge, unlock scattered memories, and determine who you can trust. Not everyone may be what they seem.

* 🎮 **Keyboard/Mouse + Controller Support**
  Designed with accessible controls and smooth UX for all players.

* ✨ **Stylized Presentation & Immersive Audio**
  Featuring polished UI/UX, low-poly fantasy visuals, and ambient dungeon audio.

---

## 🛠️ Getting Started

1. Clone or download the repository.
2. Open `TheForgottenTrial.uproject` using **Unreal Engine 5.5.4**
3. Press **Play** from the Main Menu to begin your journey.
4. Explore, fight, remember… and escape.

---

**Built With**
Unreal Engine 5.5.4

---

## 🌐 About the Project

**The Forgotten Trial** is a passion-driven indie game inspired by beloved tactical RPGs and mystery storytelling.
The project’s core goal is to deliver a **unique and replayable experience**, shaped by choice, consequence, and cryptic AI narration.

Each decision brings you closer to the truth… or further from it..the choice is yours!

---
## Design Pattern: Strategy Pattern

We are using the Strategy pattern to give each party member a unique attack behavior.

For example:
- Solari uses `BP_Strategy_MeleeAttack`
- Wisp uses `BP_Strategy_MagicAttack`

This allows us to easily expand combat behavior without rewriting core logic in the character class. It improves modularity and makes future balancing or ability upgrades cleaner and more manageable.

---
