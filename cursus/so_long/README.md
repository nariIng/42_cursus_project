# So_Long - 42 Project

![C](https://img.shields.io/badge/Language-C-red?style=for-the-badge&logo=c)
![Game Development](https://img.shields.io/badge/Category-Game%20Development-blue?style=for-the-badge&logo=game)
![Graphic Library](https://img.shields.io/badge/Library-MLX-orange?style=for-the-badge)

## 🎮 Introduction

**So_Long** est un projet de l'\u00e9cole **42** qui consiste \u00e0 d\u00e9velopper un petit jeu en **2D** en utilisant la biblioth\u00e8que graphique **MiniLibX**.

L'objectif est de cr\u00e9er un jeu simple o\u00f9 le joueur doit traverser une carte en r\u00e9cup\u00e9rant des objets et en atteignant la sortie tout en \u00e9vitant des obstacles.

📷 *Exemple du jeu :*  
*(Ajoute ici une capture d'\u00e9cran du jeu)*  

## 📌 Objectifs du projet

🔹 Cr\u00e9er une carte et g\u00e9rer son affichage avec **MiniLibX**.  
🔹 Impl\u00e9menter un syst\u00e8me de mouvement pour le personnage.  
🔹 G\u00e9rer les interactions avec les objets et la sortie.  
🔹 Optimiser l'affichage pour garantir de bonnes performances.  

## 🛠️ Technologies & Outils

- **Langage** : C  
- **Biblioth\u00e8que graphique** : MiniLibX  
- **Gestion de la m\u00e9moire** : `malloc`, `free`  
- **Gestion d'\u00e9v\u00e9nements** : touches clavier et mise \u00e0 jour de la fen\u00eatre

## ⚙️ Configuration et D\u00e9pendances

### Linux
Avant de compiler le projet sur Linux, assure-toi d'installer les d\u00e9pendances suivantes :
```bash
sudo apt-get install libxext-dev libx11-dev libmlx-dev
```

### macOS
Pour macOS, installe **Homebrew** et la biblioth\u00e8que MiniLibX :
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
 ┃ ┣ 🖼️ 0_floor.xpm
 ┃ ┣ 🖼️ 1_wall.xpm
 ┃ ┣ 🖼️ C_item.xpm
 ┃ ┣ 🖼️ E_exit_closed.xpm
 ┃ ┣ 🖼️ E_exit_open.xpm
 ┃ ┣ 🖼️ enemy.xpm
 ┃ ┣ 🖼️ game_finish.xpm
 ┃ ┣ 🖼️ game_over.xpm
 ┃ ┣ 🖼️ p_d[0].xpm
 ┃ ┣ 🖼️ p_d[1].xpm
 ┃ ┣ 🖼️ p_d[2].xpm
 ┃ ┣ 🖼️ p_l[0].xpm
 ┃ ┣ 🖼️ p_l[1].xpm
 ┃ ┣ 🖼️ p_l[2].xpm
 ┃ ┣ 🖼️ p_r[0].xpm
 ┃ ┣ 🖼️ p_r[1].xpm
 ┃ ┣ 🖼️ p_r[2].xpm
 ┃ ┣ 🖼️ p_u[0].xpm
 ┃ ┣ 🖼️ p_u[1].xpm
 ┃ ┗ 🖼️ p_u[2].xpm
 ┣ 📜 map.ber
 ┗ 📜 map2.ber
```

📷 *Aper\u00e7u d'une carte de jeu :*  
*(Ajoute ici une image d'une carte du jeu)*  

## 🔄 Fonctionnalit\u00e9s Impl\u00e9ment\u00e9es

✅ Chargement et affichage de la carte.  
✅ Mouvements du joueur (haut, bas, gauche, droite).  
✅ R\u00e9cup\u00e9ration des objets.  
✅ Gestion de la sortie du niveau.  
✅ Affichage graphique avec MiniLibX.  

📷 *Illustration du mouvement du joueur :*  
*(Ajoute ici une animation ou une capture d\u2019\u00e9cran montrant un d\u00e9placement du joueur)*  

## 🎮 Commandes du jeu

| Touche  | Action |
|---------|--------|
| W / ↑ | Avancer |
| S / ↓ | Reculer |
| A / ← | Aller \u00e0 gauche |
| D / → | Aller \u00e0 droite |
| ESC | Quitter le jeu |

## 📌 Compilation & Ex\u00e9cution

1️⃣ **Cloner le d\u00e9p\u00f4t** :
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
./so_long maps/map.ber
```

## 🏆 Conclusion

Le projet **So_Long** est une introduction passionnante \u00e0 la **programmation de jeux en C** et \u00e0 la **gestion d'affichage graphique**. Il permet de d\u00e9couvrir la manipulation d'images, la gestion des entr\u00e9es utilisateur et l'affichage r\u00e9actif dans une fen\u00eatre graphique.

📊 **Pr\u00eat \u00e0 jouer et coder ton propre jeu ?** 🚀

---

🔗 **Contact** : [LinkedIn](www.linkedin.com/in/emmanuela-narindranjanahary-7194272a7) | [GitHub](https://github.com/nariIng/)

