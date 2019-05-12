#include "graph.h"

adrVertex createVertex(int nomor){
// Nama : Daffa Pratama  NIM : 1301184382
    adrVertex P;
    P = new elmtVertex;
    numVertex(P) = nomor;
    firstEdge(P) = NULL;
    nextVertex(P) = NULL;
    return P;
}
graph createGraph(){
// Nama : Daffa Pratama  NIM : 1301184382
    graph G;
    adrVertex P;

    //source
    P = createVertex(1);
    firstSource(G) = P;
    P = createVertex(10);
    nextVertex(firstSource(G)) = P;
    P = createVertex(17);
    nextVertex(nextVertex(firstSource(G))) = P;

    //destination
    P = createVertex(1);
    firstDest(G) = P;
    P = createVertex(10);
    nextVertex(firstDest(G)) = P;
    P = createVertex(17);
    nextVertex(nextVertex(firstDest(G))) = P;
    P = createVertex(21);
    nextVertex(nextVertex(nextVertex(firstDest(G)))) = P;

    return G;
}
adrEdge createEdge(int asal, int tujuan){
// Nama : Daffa Pratama  NIM : 1301184382
    adrEdge P = new elmtEdge;
    source(P) = asal;
    dest(P) = tujuan;
    sNextEdge(P) = NULL;
    dNextEdge(P) = NULL;
    return P;
}
adrVertex sourceVertex(int numVertex, graph G){
// Nama : Daffa Pratama  NIM : 1301184382
    adrVertex p = firstSource(G);
    while ((numVertex(p) != numVertex) && (p != NULL)) {
        p = nextVertex(p);
    }
    if (numVertex(p) == numVertex){
        return p;
    } else {
        return NULL;
    }
}
adrVertex destinationVertex(int numVertex, graph G){
// Nama : Daffa Pratama  NIM : 1301184382
    adrVertex p = firstDest(G);
    while ((numVertex(p) != numVertex) && (p != NULL)) {
        p = nextVertex(p);
    }
    if (numVertex(p) == numVertex){
        return p;
    } else {
        return NULL;
    }
}

void addEdge (graph &G,adrEdge p){
// Nama : Daffa Pratama  NIM : 1301184382
    adrVertex a = sourceVertex(source(p),G);
    adrVertex d = destinationVertex(dest(p),G);
    if ((a != NULL) && (d != NULL)){
        if (firstEdge(a) == NULL){
            firstEdge(a) = p;
            firstEdge(d) = p;
        } else {
            sNextEdge(p) = firstEdge(a);
            dNextEdge(p) = firstEdge(d);
            firstEdge(a) = p;
            firstEdge(a) = p;
        }
    } else {
        cout << "simpul asal atau simpul tujuan tidak ada" <<endl;
    }
}
