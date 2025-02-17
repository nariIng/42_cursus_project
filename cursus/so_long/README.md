# So_Long - 42 Project

![C](https://img.shields.io/badge/Language-C-red?style=for-the-badge&logo=c)
![Game Development](https://img.shields.io/badge/Category-Game%20Development-blue?style=for-the-badge&logo=game)
![Graphic Library](https://img.shields.io/badge/Library-MLX-orange?style=for-the-badge)

## 🎮 Introduction

**So_Long** est un projet de l'école **42** qui consiste à développer un petit jeu en **2D** en utilisant la bibliothèque graphique **MiniLibX**.

L'objectif est de créer un jeu simple où le joueur doit traverser une carte en récupérant des objets et en atteignant la sortie tout en évitant des obstacles.

📷 *Exemple du jeu :*  
*(Ajoute ici une capture d'écran du jeu)*  

## 📌 Objectifs du projet

🔹 Créer une carte et gérer son affichage avec **MiniLibX**.  
🔹 Implémenter un système de mouvement pour le personnage.  
🔹 Gérer les interactions avec les objets et la sortie.  
🔹 Optimiser l'affichage pour garantir de bonnes performances.  

## 🛠️ Technologies & Outils

- **Langage** : C  
- **Bibliothèque graphique** : MiniLibX  
- **Gestion de la mémoire** : `malloc`, `free`  
- **Gestion d'événements** : touches clavier et mise à jour de la fenêtre

## ⚙️ Configuration et Dépendances

### Linux
Avant de compiler le projet sur Linux, assure-toi d'installer les dépendances suivantes :
```bash
sudo apt-get install libxext-dev libx11-dev libmlx-dev
```

### macOS
Pour macOS, installe **Homebrew** et la bibliothèque MiniLibX :
```bash
brew install minilibx
```

## 📂 Arborescence du projet

```
📦 so_long
 ┣ 📜 README.md
 ┣ 📜 so_long.h
 ┣ 📜 Makefile
 ┣ 📜 draw.c
 ┣ 📜 enemy.c
 ┣ 📜 ennemi_moov.c
 ┣ 📜 error.c
 ┣ 📜 exit.c
 ┣ 📜 ft_key.c
 ┣ 📜 init.c
 ┣ 📜 key.h
 ┣ 📜 load.c
 ┣ 📜 main.c
 ┣ 📜 map.c
 ┣ 📜 map_utiles.c
 ┣ 📜 negativ_moov.c
 ┣ 📜 position.c
 ┣ 📜 positiv_moov.c
 ┣ 📜 set_get_map.c
 ┣ 📜 so_long_utiles.c
 ┣ 📜 wall_error.c
 ┣ 📂 assets
 ┃ ┣ 🖼️ player.png
 ┃ ┣ 🖼️ wall.png
 ┃ ┣ 🖼️ collectable.png
 ┃ ┣ 🖼️ exit.png
 ┃ ┗ 🖼️ background.png
 ┣ 📜 map.ber
 ┗ 📜 map2.ber
```

📷 *Aperçu d'une carte de jeu :*  
*(Ajoute ici une image d'une carte du jeu)*  

## 🔄 Fonctionnalités Implémentées

✅ Chargement et affichage de la carte.  
✅ Mouvements du joueur (haut, bas, gauche, droite).  
✅ Récupération des objets.  
✅ Gestion de la sortie du niveau.  
✅ Affichage graphique avec MiniLibX.  

📷 *Illustration du mouvement du joueur :*  
*(Ajoute ici une animation ou une capture d’écran montrant un déplacement du joueur)*  

## 🎮 Commandes du jeu

| Touche  | Action |
|---------|--------|
| W / ↑ | Avancer |
| S / ↓ | Reculer |
| A / ← | Aller à gauche |
| D / → | Aller à droite |
| ESC | Quitter le jeu |

## 📌 Compilation & Exécution

1️⃣ **Cloner le dépôt** :
```bash
git@github.com:nariIng/42_cursus_project.git
cd 42_cursus_project/cursus/so_long
```

2️⃣ **Compiler le projet** :
```bash
make
```

3️⃣ **Lancer le jeu** :
```bash
./so_long map.ber
```

📷 *Capture d’écran du jeu en cours d’exécution :*  
*(Ajoute ici une capture d’écran du jeu lancé)*  

## 🏆 Conclusion

Le projet **So_Long** est une introduction passionnante à la **programmation de jeux en C** et à la **gestion d'affichage graphique**. Il permet de découvrir la manipulation d'images, la gestion des entrées utilisateur et l'affichage réactif dans une fenêtre graphique.

📊 **Prêt à jouer et coder ton propre jeu ?** 🚀

---

🔗 **Contact** : [LinkedIn](www.linkedin.com/in/emmanuela-narindranjanahary-7194272a7) | [GitHub](https://github.com/nariIng/)

