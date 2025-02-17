# Libft - 42 Project

![C](https://img.shields.io/badge/Language-C-red?style=for-the-badge&logo=c)
![Library](https://img.shields.io/badge/Library-Standard%20C-blue?style=for-the-badge&logo=librarything)
![Memory](https://img.shields.io/badge/Memory%20Management-Optimized-green?style=for-the-badge&logo=cachet)

## 🚀 Introduction

**Libft** est un projet fondamental de **l'école 42** visant à recréer une bibliothèque standard en **C**. Ce projet permet de mieux comprendre les fonctions essentielles de la **libc**, d'optimiser leur utilisation et de poser des bases solides en **programmation système**.

## 📌 Objectifs du projet

🔹 Recréer certaines fonctions de la bibliothèque standard C.  
🔹 Maîtriser la gestion de la mémoire avec `malloc()`, `free()`.  
🔹 Manipuler les chaînes de caractères et la mémoire efficacement.  
🔹 Implémenter une gestion avancée des listes chaînées (Bonus).  
🔹 Travailler la modularité et la rigueur dans l'écriture du code.

## 🛠️ Technologies & Outils

- **Langage** : C  
- **Gestion mémoire** : `malloc()`, `free()`, `Valgrind`  
- **Manipulation des chaînes** : `strcpy()`, `strlen()`, `strjoin()`, etc.  
- **Structures de données** : Listes chaînées (Bonus)  
- **Compilation** : `Makefile`

## 📂 Arborescence du projet

```
📦 libft
 ┣ 📜 README.md
 ┣ 📜 libft.h
 ┣ 📜 Makefile
 ┣ 📜 ft_atoi.c
 ┣ 📜 ft_bzero.c
 ┣ 📜 ft_calloc.c
 ┣ 📜 ft_isalnum.c
 ┣ 📜 ft_isalpha.c
 ┣ 📜 ft_isascii.c
 ┣ 📜 ft_isdigit.c
 ┣ 📜 ft_isprint.c
 ┣ 📜 ft_itoa.c
 ┣ 📜 ft_memchr.c
 ┣ 📜 ft_memcmp.c
 ┣ 📜 ft_memcpy.c
 ┣ 📜 ft_memmove.c
 ┣ 📜 ft_memset.c
 ┣ 📜 ft_putchar_fd.c
 ┣ 📜 ft_putendl_fd.c
 ┣ 📜 ft_putnbr_fd.c
 ┣ 📜 ft_putstr_fd.c
 ┣ 📜 ft_split.c
 ┣ 📜 ft_strchr.c
 ┣ 📜 ft_strcmp.c
 ┣ 📜 ft_strdup.c
 ┣ 📜 ft_striteri.c
 ┣ 📜 ft_strjoin.c
 ┣ 📜 ft_strlcat.c
 ┣ 📜 ft_strlcpy.c
 ┣ 📜 ft_strlen.c
 ┣ 📜 ft_strmapi.c
 ┣ 📜 ft_strncmp.c
 ┣ 📜 ft_strnstr.c
 ┣ 📜 ft_strrchr.c
 ┣ 📜 ft_strtrim.c
 ┣ 📜 ft_substr.c
 ┣ 📜 ft_tolower.c
 ┗ 📜 ft_toupper.c
 ┣ 📂 bonus
 ┃ ┣ 📜 ft_lstadd_back_bonus.c
 ┃ ┣ 📜 ft_lstadd_front_bonus.c
 ┃ ┣ 📜 ft_lstclear_bonus.c
 ┃ ┣ 📜 ft_lstdelone_bonus.c
 ┃ ┣ 📜 ft_lstiter_bonus.c
 ┃ ┣ 📜 ft_lstlast_bonus.c
 ┃ ┣ 📜 ft_lstmap_bonus.c
 ┃ ┣ 📜 ft_lstnew_bonus.c
 ┃ ┗ 📜 ft_lstsize_bonus.c
```

## ⚙️ Fonctionnalités Implémentées

✅ Fonctions de manipulation de chaînes (`ft_strlen`, `ft_strjoin`, `ft_strtrim`...)  
✅ Fonctions de gestion mémoire (`ft_calloc`, `ft_memset`, `ft_memcpy`...)  
✅ Fonctions de conversion (`ft_atoi`, `ft_itoa`, `ft_tolower`, `ft_toupper`...)  
✅ Fonctions d'affichage (`ft_putchar_fd`, `ft_putstr_fd`, `ft_putnbr_fd`...)  
✅ Fonctions bonus pour la gestion des **listes chaînées** (`ft_lstnew`, `ft_lstadd_back`, `ft_lstmap`...)

## 📌 Compilation & Utilisation

1️⃣ **Cloner le dépôt** :
```bash
git@github.com:nariIng/42_cursus_project.git
cd 42_cursus_project/cursus/libft
```

2️⃣ **Compiler la bibliothèque** :
```bash
make
```

3️⃣ **Utiliser Libft dans un projet** :
```c
#include "libft.h"

int main()
{
    char *str = ft_strdup("Hello, 42!");
    printf("%s\n", str);
    free(str);
    return 0;
}
```

4️⃣ **Compiler avec votre programme** :
```bash
gcc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## 🏆 Conclusion

Le projet **Libft** est une excellente introduction à la **programmation système en C**, en permettant d'approfondir la **gestion de la mémoire**, la **manipulation des chaînes de caractères**, et les **structures de données** comme les **listes chaînées**. Il constitue une **base essentielle** pour tout projet avancé en C.

📚 **Prêt à construire vos propres bibliothèques ?** 🚀

---

🔗 **Contact** : [LinkedIn](www.linkedin.com/in/emmanuela-narindranjanahary-7194272a7) | [GitHub](https://github.com/nariIng/)

