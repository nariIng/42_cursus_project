# Philosopher - 42 Project

![C](https://img.shields.io/badge/Language-C-red?style=for-the-badge&logo=c)
![Concurrency](https://img.shields.io/badge/Concurrency-Threads-blue?style=for-the-badge&logo=pthreads)
![Dining Philosophers](https://img.shields.io/badge/Algorithm-Turk-yellow?style=for-the-badge&logo=thealgorithms)

## 🚀 Introduction

**Philosopher** est un projet de l'école **42** qui explore les concepts de **concurrence** et de **synchronisation** en implémentant le problème classique des **philosophes mangeurs**.

Le but est d'utiliser des **threads** et des **mutex** pour gérer la synchronisation des ressources (fourchettes), tout en respectant les règles de l'algorithme.

## 📌 Objectifs du projet

🔹 Comprendre et implémenter le problème des **philosophes mangeurs**.  
🔹 Utiliser **les threads en C** avec **pthread**.  
🔹 Gérer la synchronisation via **mutex** et **sémaphores**.  
🔹 Implémenter un **système de surveillance** pour éviter la famine.  
🔹 Respecter les contraintes de performance et d'optimisation.  

## 🛠️ Technologies & Outils

- **Langage** : C  
- **Multithreading** : `pthread`  
- **Synchronisation** : `mutex` et `sémaphores`  
- **Gestion du temps** : `gettimeofday()`  
- **Compilation** : `Makefile`

## 📂 Arborescence du projet

```
📦 philosopher/philo
 ┣ 📜 README.md
 ┣ 📜 philosopher.h
 ┣ 📜 Makefile
 ┣ 📜 action.c
 ┣ 📜 check.c
 ┣ 📜 check_if.c
 ┣ 📜 error.c
 ┣ 📜 exit.c
 ┣ 📜 fork.c
 ┣ 📜 init.c
 ┣ 📜 monitor.c
 ┣ 📜 philo_utiles.c
 ┣ 📜 philosopher.c
 ┣ 📜 time.c
```

## ⚙️ Fonctionnalités Implémentées

✅ Initialisation des philosophes et des ressources (fourchettes).  
✅ Synchronisation des threads avec **mutex**.  
✅ Gestion du cycle de vie des philosophes : manger, penser, dormir.  
✅ Implémentation de l'algorithme de **Dijkstra (Turk)** pour éviter la famine.  
✅ Surveillance des philosophes et gestion des **conditions de mort**.  

## 📌 Compilation & Utilisation

1️⃣ **Cloner le dépôt** :
```bash
git@github.com:nariIng/42_cursus_project.git
cd 42_cursus_project/cursus/philosopher/philo
```

2️⃣ **Compiler le projet** :
```bash
make
```

3️⃣ **Exécuter le programme** :
```bash
./philosopher <nb_philosophes> <temps_manger> <temps_dormir> <temps_mort> [nombre_repas]
```

Exemple :
```bash
./philosopher 5 200 100 400 10
```

## 🏆 Conclusion

Le projet **Philosopher** est une excellente introduction à la **programmation concurrente** et à la **gestion des threads en C**. Il permet d'approfondir les concepts de **synchronisation**, de **mutex**, et d'optimisation des **algorithmes de gestion des ressources partagées**.

🧠 **Prêt à synchroniser tes philosophes ?** 🍽️🚀

---

🔗 **Contact** : [LinkedIn](www.linkedin.com/in/emmanuela-narindranjanahary-7194272a7) | [GitHub](https://github.com/nariIng/)


