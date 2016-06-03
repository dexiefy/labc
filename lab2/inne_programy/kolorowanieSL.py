#!/usr/bin/env python

colors = ['1', '2', '3', '4', '5','6', '7', '8', '9', '10'] #dostepne kolory

vertices = ['A', 'B', 'C', 'D', 'E', 'F','G','H'] #wierzcholki

neighbors = {} #slownik sasiadujacych wierzcholkow
neighbors['A'] = ['D', 'E']
neighbors['B'] = ['E']
neighbors['C'] = ['D', 'F']
neighbors['D'] = ['A', 'E', 'C', 'F', 'G', 'H']
neighbors['E'] = ['A', 'B', 'D', 'H']
neighbors['F'] = ['C', 'D','G']
neighbors['G'] = ['F', 'D', 'H']
neighbors['H'] = ['G', 'D', 'E']

v = sorted(neighbors, key=lambda k: len(neighbors[k]), reverse=True)
vertices = v# funkcja sortujaca wierzcholki
print "Kolejnosc kolorowania"
print vertices

colors_of_vertices = {} #inicjalizacja slownika kolorow

def promising(vert, color): #funkcja dobierajaca kolor
    for neighbor in neighbors.get(vert):
        # print neighbor
        color_of_neighbor = colors_of_vertices.get(neighbor)
        if color_of_neighbor == color:
            return False

    return True #zwraca prawde gdy trzeba nadac wierzcholkowi kolejny kolor

def get_color_for_vert(vert): #funkcja przypisuje kolejne kolory do wierzcholkow
    for color in colors:
        if promising(vert, color):
            return color

def main(): #Funkcja wypisujaca wynik kolorowania
    for vert in vertices:
        colors_of_vertices[vert] = get_color_for_vert(vert)

    print "Pokolorowanie metoda SL"
    print colors_of_vertices


main()
