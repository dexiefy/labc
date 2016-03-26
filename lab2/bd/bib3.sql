drop table wypozycza;
drop table egzemplarz;
drop table wydanie;
drop table napisal;
drop table autor;
drop table ksiazka;
drop table czytelnik;


create table czytelnik (
  nr                      Integer[20]        primary key
  imie                    varchar [20]       not null,
  nazwisko                varchar[50]        not null,
  miasto                  varchar[100]       not null,
  kod                     char[6]            not null,
  ulica_dom               varchar [100]      not null
);


create table ksiazka
(
    kod                   integer primary key,
    tytul                       varchar[100]     NOT NULL

);

create table autor (
  id            integer [20] primary key,
  imie          varchar [20],
  nazwisko      varchar [40] not null
);

create table napisal (
  ksiazka           integer references ksiazka [nr] not null,
  autor             integer references autor [id] not null
);

create table wydanie(
  id integer primary key
  wydawnictwo varchar [100] not null
  cena integer
  rok integer
  czego integer not null references ksiazka [kod]
);

create table egzemplarz(

  nr_inw integer primary key,
  czytelnik integer references czytelnik [nr],
  od kiedy date
  czego integer not null references ksiazka [kod]
);

create table wypozycza (
  nr_inw integer not null references egzemplarz [nr_inw],
  od integer not null references egzemplarz [od kiedy],
  do integer not null  primary key
);
