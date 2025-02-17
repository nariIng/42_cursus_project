# Born2beroot - 42 Project

![Linux](https://img.shields.io/badge/Linux-Debian-blue?style=for-the-badge&logo=linux)
![Security](https://img.shields.io/badge/Security-Essential-red?style=for-the-badge&logo=shield)
![SystemAdmin](https://img.shields.io/badge/System%20Admin-Expert-green?style=for-the-badge&logo=server)

## 🚀 Introduction

**Born2beroot** est un projet d'administration système proposé par **l'école 42**. Il vise à initier les étudiants aux bases de la gestion et de la sécurisation d'un serveur sous Linux. Ce projet met l'accent sur la configuration d'une machine virtuelle Debian en respectant des contraintes strictes en matière de cybersécurité et de gestion des accès.

## 📌 Objectifs du projet

🔹 Installer et configurer un serveur Debian minimaliste sur une machine virtuelle.  
🔹 Mettre en place un pare-feu et sécuriser les connexions SSH.  
🔹 Gérer les utilisateurs et les groupes avec des règles précises.  
🔹 Implémenter un script de monitoring affichant les informations essentielles du système.  
🔹 Suivre des bonnes pratiques en matière de cybersécurité et d'administration système.  

## 🛠️ Technologies & Outils

- **Système d'exploitation** : Debian  
- **Virtualisation** : VirtualBox / UFW  
- **Sécurité** : SSH, UFW, AppArmor  
- **Gestion des utilisateurs** : Sudo, groupes, permissions  
- **Automatisation & Monitoring** : Cron, Bash Scripts  

## 📂 Commpétance nécéssaire

```
Tous les commpétances nécéssaires pour ce projet est listées das le fichier instruction
```

## 🔒 Sécurisation et Bonnes Pratiques

✅ Configuration stricte de `sudo` pour les utilisateurs autorisés.  
✅ Implémentation d'un pare-feu (`ufw`) pour limiter les connexions entrantes et sortantes.  
✅ Désactivation de la connexion `root` via SSH.  
✅ Application des permissions minimales nécessaires sur les fichiers sensibles.  
✅ Script de monitoring automatisé via `cron`.

## 📜 Script de Monitoring

Le script `monitoring.sh` permet d'afficher des informations en temps réel sur le serveur :  
🔹 Utilisation CPU et RAM  
🔹 Espace disque disponible  
🔹 Nombre d'utilisateurs connectés  
🔹 Adresse IP et ports ouverts  
🔹 État des services système  

## 📌 Installation & Déploiement

1️⃣ **Cloner le dépôt** :
```bash
git clone https://github.com/nariIng/42_cursus_project.git
cd cursus/Born2beroot
```

2️⃣ **Configurer les fichiers de sécurité** :
- Modifier `sudoers.conf` pour restreindre les accès.
- Appliquer les règles de pare-feu avec `ufw.rules`.
- Configurer `ssh_config` pour renforcer la sécurité SSH.

3️⃣ **Lancer le script de monitoring** :
```bash
bash monitoring.sh
```

## 🏆 Conclusion

Ce projet m'a permis de renforcer mes compétences en **administration système**, **cybersécurité** et **gestion de serveurs Linux**. C'est une excellente base pour approfondir le domaine de l'infrastructure et du DevOps.

🚀 **Ready to root the system?** 🔥

---

🔗 **Contact** : [LinkedIn](www.linkedin.com/in/emmanuela-narindranjanahary-7194272a7) | [GitHub](https://github.com/nariIng/)

