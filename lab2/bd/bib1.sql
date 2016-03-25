drop table autor;
drop table ksiazka;
drop table czytelnik;


create table czytelnik (
  nr                      Integer(20)        primary key,
  imie                    varchar (20)       not null,
  nazwisko                varchar(50)        not null,
  miasto                  varchar(100)       not null,
  kod                     char(6)            not null,
  ulica_dom               varchar (100)      not null
);


create table ksiazka
(
  nr inw                 integer           primary key,
  tytul                  varchar(100)      not null,
  wydawnictwo            varchar(100)              ,
  cena                   integer                   ,
  rok                    integer

);

create table autor (
  Id            integer (20) primary key,
  imie          varchar (20),
  nazwisko      varchar (40) not null
);
