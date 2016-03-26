drop table egzemplarz;
drop table napisal;
drop table autor;
drop table ksiazka;
drop table czytelnik;


create table czytelnik (
  nr                      integer [20]        primary key,
  imie                    varchar [20]        not null,
  nazwisko                varchar [50]        not null,
  miasto                  varchar [100]       not null,
  kod                     char [6]            not null,
  ulica_dom               varchar [100]       not null
);


create table ksiazka (
  kod         		  integer [15]        primary key,
  tytul                   varchar [100]       not null,
  wydawnictwo             varchar [100]               ,
  cena                    integer [7]                 ,
  rok                     integer [4]

);


create table autor (
  id                      integer [20]       primary key,
  imie                    varchar [20]                  ,
  nazwisko                varchar [40]       not null
);


create table napisal (
  ksiazka                integer references ksiazka[kod], 
  autor                  integer references autor[id]
);


create table egzemplarz (
  nr_inw                  integer [15]     primary key,
  czytelnik               integer references czytelnik[nr],
  data                    date,
  ksiazka                 integer references ksiazka[kod]
);
