# Minitalk - 42 Project

![C](https://img.shields.io/badge/Language-C-red?style=for-the-badge&logo=c)
![IPC](https://img.shields.io/badge/Interprocess%20Communication-Signals-green?style=for-the-badge&logo=linux)
![Real-Time](https://img.shields.io/badge/Real--Time-Communication-blue?style=for-the-badge&logo=clockify)

## 🚀 Introduction

**Minitalk** est un projet de l'école **42** qui a pour objectif d'implémenter une communication entre **un client et un serveur** en utilisant les **signaux UNIX (`SIGUSR1` et `SIGUSR2`)**.

Ce projet permet de mieux comprendre le fonctionnement des **signaux en C**, ainsi que les **communications inter-processus (IPC)**.

## 📌 Objectifs du projet

🔹 Comprendre et utiliser les **signaux UNIX** (`SIGUSR1`, `SIGUSR2`).  
🔹 Mettre en place une communication entre **deux processus** (Client/Serveur).  
🔹 Gérer des transmissions **robustes** et optimisées.  
🔹 Implémenter une version **bonus** avec la gestion de **messages longs** et **d'accusé de réception**.  

## 🛠️ Technologies & Outils

- **Langage** : C  
- **Système** : Linux (gestion des signaux)  
- **Inter-processus** : Signaux UNIX  
- **Compilation** : `Makefile`

## 📂 Arborescence du projet

```
📦 minitalk
 ┣ 📜 README.md
 ┣ 📜 minitalk.h
 ┣ 📜 Makefile
 ┣ 📜 client.c
 ┣ 📜 server.c
 ┣ 📜 client_bonus.c
 ┣ 📜 server_bonus.c
 ┗ 📂 libftprintf
```

## ⚙️ Fonctionnalités Implémentées

✅ Envoi de messages depuis un **client** vers un **serveur**.  
✅ Réception et affichage correct du message côté **serveur**.  
✅ Gestion des **signaux UNIX** (`SIGUSR1`, `SIGUSR2`).  
✅ Transmission **caractère par caractère** avec gestion des bits.  
✅ Version **bonus** : gestion de **messages longs**, **accusé de réception**, et **multiprocessing**.

## 📌 Compilation & Utilisation

1️⃣ **Cloner le dépôt** :
```bash
git@github.com:nariIng/42_cursus_project.git
cd 42_cursus_project/cursus/minitalk
```

2️⃣ **Compiler le projet** :
```bash
make
```

3️⃣ **Lancer le serveur** :
```bash
./server
```

4️⃣ **Lancer le client et envoyer un message** :
```bash
./client <PID_DU_SERVEUR> "Hello, 42!"
```

5️⃣ **Version Bonus (gestion avancée des messages)** :
```bash
./server_bonus
./client_bonus <PID_DU_SERVEUR> "Hello, version bonus!"
```

## 🏆 Conclusion

Le projet **Minitalk** est une excellente introduction aux **communications inter-processus en C**. Il permet d'explorer les **signaux UNIX**, les **bits manipulation**, et l'optimisation de la transmission des **messages**.

📚 **Prêt à envoyer des signaux ?** 🚀

---

🔗 **Contact** : [LinkedIn](www.linkedin.com/in/emmanuela-narindranjanahary-7194272a7) | [GitHub](https://github.com/nariIng/)

