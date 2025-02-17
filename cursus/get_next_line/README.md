# Get Next Line - 42 Project

![C](https://img.shields.io/badge/Language-C-red?style=for-the-badge&logo=c)
![FileHandling](https://img.shields.io/badge/File%20Handling-Essential-blue?style=for-the-badge&logo=files)
![Memory](https://img.shields.io/badge/Memory%20Management-Advanced-green?style=for-the-badge&logo=cachet)

## 🚀 Introduction

**Get Next Line** est un projet proposé par **l'école 42**, dont l'objectif est d'implémenter une fonction capable de lire et retourner une ligne depuis un descripteur de fichier donné. Ce projet permet de maîtriser la gestion des **buffers**, la **mémoire dynamique** et les **appels système** liés à la manipulation des fichiers.

## 📌 Objectifs du projet

🔹 Lire une ligne depuis un fichier ou l'entrée standard de manière optimisée.  
🔹 Gérer efficacement la mémoire avec `malloc()`, `free()` et les buffers.  
🔹 Manipuler les appels système `read()` et `open()`.  
🔹 Assurer une gestion robuste des erreurs et des cas particuliers.  
🔹 Respecter une structure modulaire et des normes de codage strictes.

## 🛠️ Technologies & Outils

- **Langage** : C  
- **Manipulation de fichiers** : `read()`, `open()`, `close()`  
- **Gestion mémoire** : `malloc()`, `free()`, `Valgrind`  
- **Optimisation des performances** : gestion des buffers dynamiques  

## 📂 Arborescence du projet

```
📦 get_next_line
 ┣ 📜 README.md
 ┣ 📜 get_next_line.c
 ┣ 📜 get_next_line.h
 ┣ 📜 get_next_line_utils.c
 ┣ 📜 get_next_line_bonus.c
 ┣ 📜 get_next_line_bonus.h
 ┣ 📜 get_next_line_utils_bonus.c
 ┣ 📜 main.c
 ┣ 📜 Makefile
 ┗ 📜 test_files/
```
## ⚙️ Fonctionnalités Implémentées

✅ Lecture d'une ligne complète depuis un fichier  
✅ Gestion efficace de la mémoire pour minimiser les fuites  
✅ Prise en charge de plusieurs descripteurs de fichiers simultanément  
✅ Gestion des retours de `read()` et prise en compte de `EOF`  
✅ Modularité et respect des normes de codage de l'école 42  

## 📌 Compilation & Exécution

1️⃣ **Cloner le dépôt** :
```bash
git@github.com:nariIng/42_cursus_project.git
cd cursus/get_next_line
```

2️⃣ **Compiler le projet** :
```bash
make
```

3️⃣ **Compiler la partie bonus** :
✅ la partie bonus permet d'accedé a plusieur 'fd' en même temps
```bash
make bonus
```

## 🏆 Conclusion

Le projet **Get Next Line** m'a permis d'approfondir mes connaissances en **gestion de mémoire**, **manipulation de fichiers**, et **optimisation des performances**. C'est une étape clé pour renforcer ses compétences en **programmation bas niveau**.

📜 **Prêt à lire entre les lignes ?** 🔥

---

🔗 **Contact** : [LinkedIn](www.linkedin.com/in/emmanuela-narindranjanahary-7194272a7) | [GitHub](https://github.com/nariIng/)

