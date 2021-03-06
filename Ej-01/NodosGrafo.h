#ifndef NODOSGRAFO_H
#define NODOSRGRAFO_H

template<class T>
class NodoGrafo {

private:
    NodoGrafo<T>* next;
    ArgoGrafo<T>* lazos;
    T dato;
    int id;
public:
    NodoGrafo(T d,int i);

    void setNext(NodoGrafo<T>* n) {next = n;}
    NodoGrafo<T>* getNext() {return next;}
    void setLazos(ArcoGrafo<T>* a) {lazo = a;}
    ArcoGrafo<T>* getLazos() {return lazos;}
    void setDato(T d) {dato = d;}
    T getDato() {return dato;}
    void setId(int d) {id = d;}
    int getId() {return id;}
}

template<class T>
class ArcoGrafo {
    
private:
    ArcoGrafo<T>* next;
    NodoGrafo<T>* lazo;
    int peso;
public:
    ArcoGrafo(int p);

    void setNext(ArcoGrafo<T>* n) {next = n;}
    ArcoGrafo<T>* getNext() {return next;}
    void setLazos(NodoGrafo<T>* a) {lazo = a;}
    NodoGrafo<T>* getLazos() {return lazos;}
    void setPeso(int p) {peso = p;}
    int getPeso() {return peso;}

}

NodoGrafo<T>::NodoGrafo(T d,int i) {
    next  = NULL;
    lazos = NULL;
    dato  = d;
    id    = i;
}

ArcoGrafo<T>::ArcoGrafo(int p) {
    next = NULL;
    lazo = NULL;
    peso = p;
}

#endif
