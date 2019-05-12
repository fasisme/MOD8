#include "graph.cpp"


int main()
{
// Nama : Daffa Pratama  NIM : 1301184382
    graph G;
    G = createGraph();
    //-- your code --
    adrVertex p,q;
    p = firstSource(G);
    cout << "simpul asal: ";
    while (p != NULL){
        cout << numVertex(p) << ",";
        p = nextVertex(p);
    }
    cout<<endl;
    cout << "simpul tujuan: ";
    q = firstDest(G);
    while (q != NULL){
        cout << numVertex(q) << ",";
        q = nextVertex(q);
    }
    cout<<endl;

    int asal,tujuan;
    int i = 1;
    adrEdge t;
    while (i <= 6){
        cout << "Masukkan simpul asal: "; cin >> asal;
        cout << "Masukkan simpul tujuan: "; cin >> tujuan;
        t = createEdge(asal,tujuan);
        addEdge(G,t);
        i++;
    }

    adrVertex j = firstSource(G);
    while (j != NULL){
        adrEdge e = firstEdge(j);
        while (e != NULL){
            cout << source(e) << " ke " << dest(e) ;
            cout << endl;
            e = sNextEdge(e);
        }
        j = nextVertex(j);
    }
	//-- your code --

    return 0;
}
