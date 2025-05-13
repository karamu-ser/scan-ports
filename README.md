# Scanner de Ports en C++

Ce projet est un scanner de ports simple en C++, conçu pour tester la connectivité d'une machine cible à travers une plage de ports spécifiée. L'application utilise des sockets pour tenter de se connecter à chaque port et affiche si chaque port est **ouvert** ou **fermé**.

## Fonctionnalités
- **Scan de ports** : Permet de scanner une plage de ports sur une adresse IP cible.
- **Vérification de la connectivité** : Utilise les sockets pour tester la connectivité réseau pour chaque port spécifié.
- **Affichage des résultats** : Pour chaque port, le programme affiche s'il est ouvert ou fermé.

## Prérequis
- C++11 ou version supérieure
- Système basé sur Unix (Linux, macOS) pour les appels système (`unistd.h`, `sys/socket.h`)

## Compilation et Exécution

### Étape 1 : Cloner le dépôt
Clonez ce dépôt sur votre machine locale avec la commande suivante :

```bash
git clone https://github.com/karamu-ser/scan-ports.git
cd scan-ports
```
### Étape 2 : Compiler le code
```bash
g++ main.cpp
```
### Étape 3 : Exécuter le programme
```bash
./a.out
```

### socket !?
![socket](socket.png)
