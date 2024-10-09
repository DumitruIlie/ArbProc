# ArbProc

Proiectul acesta este menit pentru cei ce se confrunta cu dificultati in ceea ce priveste desenarea arborescentelor de procese.
Ideea originala mi-a venit in anul 2 de licenta, cand multi colegi se chinuiau sa inteleaga fork-ul. Sper ca acest tool sa
ajute cat mai multi.

## Necesar

* gcc
* rulare din linux

## Utilizare

Descarca fisierele `fork.c`, `remap.c` si `run.sh` **IN ACELASI DIRECTOR**.

Modificati fisierul `fork.c` pentru a adauga codul pe care doriti sa il evaluati. Puneti-l intre cele doua comentarii din `main`.

Este nevoie sa dati permisiune de executare
fisierului `run.sh`. Faceti asta manual sau ruland urmatoarea comanda in terminal in directorul in care ati descarcat fisierele.

```
chmod +x ./run.sh
```

Dupa ce fisierul `run.sh` are permisiune de executare rulati urmatoarea comanda:

```
./run.sh
```

Se vor genera cateva fisiere, `fork`, `remap` si `output.txt`. Fisierul `output.txt` contine lista muchiilor (indexata de la 0).
Puteti copia acest fisier in diverse vizualizatoare online de grafuri, eu recomand cel de pe
[CSAcademy](https://csacademy.com/app/graph_editor). Pentru a avea o viziune mai apropiata de adevar sugerez bifarea setarii
`Directed` din coltul stanga sus. Astfel nodul din care doar pleaca arce, dar nu vin reprezinta radacina arborescentei.

## Probleme

Programul nu are suport pentru threaduri, o sa il adaug in curand si voi face sa poti selecta daca vrei copiere a threadurilor sau
nu in fork.

### Exemple

Puteti gasi exemple de program pe
[FMI-Materials](https://github.com/FMI-Materials/FMI-Materials/tree/main/Year%20II/Semester%20I/Sisteme%20De%20Operare/Modele%20Examen)
