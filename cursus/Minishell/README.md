# Minishell - 42 Project

![Shell](https://img.shields.io/badge/Shell-Bash-blue?style=for-the-badge&logo=gnu-bash)
![C](https://img.shields.io/badge/Language-C-red?style=for-the-badge&logo=c)
![System](https://img.shields.io/badge/System-Unix-green?style=for-the-badge&logo=linux)

## 🚀 Introduction

**Minishell** est un projet proposé par **l'école 42** visant à implémenter un shell minimaliste en langage **C**. Ce projet permet de comprendre le fonctionnement interne d'un interpréteur de commandes Unix et d'explorer les concepts avancés de gestion des processus et des entrées/sorties.

## 📌 Objectifs du projet

🔹 Implémenter un shell capable d'exécuter des commandes simples et enchaînées.  
🔹 Gérer les processus et leur contrôle via `fork()`, `execve()`, `waitpid()`, `signal()`, etc.  
🔹 Reproduire certaines fonctionnalités de Bash, comme les redirections et les pipes.  
🔹 Implémenter une gestion efficace des erreurs et des signaux.  
🔹 Travailler la rigueur du code et la gestion de la mémoire avec `malloc()` et `free()`.

## 🛠️ Technologies & Outils

- **Langage** : C  
- **Système** : Unix/Linux  
- **Gestion des processus** : `fork()`, `execve()`, `pipe()`, `dup2()`  
- **Gestion mémoire** : `malloc()`, `free()`, `valgrind`  
- **Gestion des signaux** : `signal()`, `sigaction()`  

## 📂 Arborescence du projet

```
📦 minishell
 ┣ 📜 README.md
 ┣ 📜 get_next_line/
 ┣ 📜 srcs/
 ┣ 📜 includes/
 ┣ 📜 libft/
 ┗ 📜 Makefile
```

## ⚙️ Fonctionnalités Implémentées

✅ Exécution des commandes Unix de base  
✅ Gestion des pipes et redirections (`|`, `<`, `>`, `>>`)  
✅ Implémentation de quelques builtins (`echo`, `cd`, `pwd`, `export`, `unset`, `env`, `exit`)  
✅ Gestion des variables d'environnement  
✅ Gestion des signaux (`CTRL+C`, `CTRL+D`, `CTRL+\`)  
✅ Parsing robuste avec une gestion des erreurs avancée  

## 📌 Compilation & Exécution

1️⃣ **Cloner le dépôt** :
```bash
git@github.com:nariIng/42_cursus_project.git
cd cursus/Minishell
```

2️⃣ **Compiler le projet** :
```bash
make
```

3️⃣ **Lancer Minishell** :
```bash
./minishell
```

## 🏆 Conclusion

Le projet **Minishell** m'a permis de plonger dans le fonctionnement interne des shells Unix et de perfectionner mes compétences en **programmation système** et **gestion de processus**. C'est une étape essentielle pour approfondir l'univers des systèmes d'exploitation et de la programmation bas niveau.

🐚 **Prêt à exécuter vos propres commandes ?** 🔥

---

🔗 **Contact** : [LinkedIn](www.linkedin.com/in/emmanuela-narindranjanahary-7194272a7) | [GitHub](https://github.com/nariIng/)

