# Push Swap - 42 Project

![C](https://img.shields.io/badge/Language-C-red?style=for-the-badge&logo=c)
![Sorting Algorithm](https://img.shields.io/badge/Algorithm-Turk-yellow?style=for-the-badge&logo=thealgorithms)
![Performance](https://img.shields.io/badge/Performance-Optimization-green?style=for-the-badge)

## 🚀 Introduction

**Push Swap** est un projet de l'école **42** qui consiste à trier une pile de nombres en un minimum de mouvements, en utilisant uniquement un ensemble restreint d'opérations sur deux piles.

L'objectif est d'implémenter un algorithme de tri performant, et dans ce projet, j'ai utilisé l'**algorithme de Dijkstra (Turk)** pour optimiser le tri.
trier semble etre facile mais la plus difficile est de minimiser les oppérations possibles lors du tri.

![Push Swap Illustration](https://upload.wikimedia.org/wikipedia/commons/9/93/Tower_of_Hanoi_4.gif)

## 📌 Objectifs du projet

🔹 Manipuler et trier efficacement une pile en C.  
🔹 Utiliser des **listes circulaires** pour la gestion des piles.  
🔹 Optimiser le nombre de mouvements avec un **algorithme performant**.  
🔹 Gérer les erreurs et les entrées invalides.  

## 🛠️ Technologies & Outils

- **Langage** : C  
- **Gestion de la mémoire** : `malloc`, `free`  
- **Structures de données** : listes circulaires  
- **Compilation** : `Makefile`

## 📂 Arborescence du projet

```
📦 push_swap
 ┣ 📜 README.md
 ┣ 📜 push_swap.h
 ┣ 📜 Makefile
 ┣ 📜 checking.c
 ┣ 📜 circulaire_list.c
 ┣ 📜 coast.c
 ┣ 📜 coast_reverse.c
 ┣ 📜 exit_error.c
 ┣ 📜 find.c
 ┣ 📜 find_ext.c
 ┣ 📜 moov_in.c
 ┣ 📜 moovs.c
 ┣ 📜 moovs_ext.c
 ┣ 📜 moovs_ext_ext.c
 ┣ 📜 push_swap.c
 ┣ 📜 push_swap_error.c
 ┣ 📜 push_swap_utils.c
 ┣ 📜 shorting_a.c
 ┣ 📜 shorting_a_ext.c
 ┣ 📜 shorting_b.c
 ┣ 📂 gnl
 ┣ 📂 libftprintf
```

## 🔄 Mouvements disponibles

- `ra` : Rotation de la pile **A** vers le haut (décale tous les éléments vers le haut, le premier devient le dernier).  
- `rb` : Rotation de la pile **B** vers le haut.  
- `rra` : Rotation inverse de la pile **A** vers le bas (décale tous les éléments vers le bas, le dernier devient le premier).  
- `rrb` : Rotation inverse de la pile **B** vers le bas.  
- `pa` : Prend le premier élément de **B** et le place sur **A**.  
- `pb` : Prend le premier élément de **A** et le place sur **B**.  
- `rr` : Effectue `ra` et `rb` simultanément.  
- `rrr` : Effectue `rra` et `rrb` simultanément.  

## ⚙️ Fonctionnalités Implémentées

✅ Tri d'une pile avec un nombre minimal de mouvements.  
✅ Utilisation de **listes circulaires** pour optimiser les échanges.  
✅ Algorithme de **Dijkstra (Turk)** pour une meilleure performance.  
✅ Gestion des erreurs et validation des entrées.  

## 📌 Compilation & Utilisation

1️⃣ **Cloner le dépôt** :
```bash
git@github.com:nariIng/42_cursus_project.git
cd 42_cursus_project/cursus/push_swap
```

2️⃣ **Compiler le projet** :
```bash
make
```

3️⃣ **Exécuter le programme** :
```bash
./push_swap <liste_de_nombres>
```

Exemple :
```bash
./push_swap 4 67 3 87 23
```

## 📊 Illustrations

### Exemple d'Exécution
Avant :
```
Stack A: [4, 67, 3, 87, 23]
Stack B: []
```
Après exécution de `push_swap` :
```
Stack A: [3, 4, 23, 67, 87]
Stack B: []
```

## 🏆 Conclusion

Le projet **Push Swap** est un excellent défi d'optimisation algorithmique et de gestion de **listes chaînées**. Il permet de perfectionner les compétences en **tri avancé**, en **gestion de mémoire**, et en **performance du code**.
Il permet de trier 100 nombres aléatoires avec une moyenne de 600 mouvements et 500 nombres aléatoires avec une moyenne 6000 mouvements.

📊 **Prêt à optimiser ton tri ?** 🚀

---

🔗 **Contact** : [LinkedIn](www.linkedin.com/in/emmanuela-narindranjanahary-7194272a7) | [GitHub](https://github.com/nariIng/)

