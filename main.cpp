
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
using namespace std;

int infinito = 9999;

//Dado: un grafo con 5 nodos implementado en una tabla (arreglo bidimensional)
//Dado: las columnas de la tabla representan el inicio y las filas el destino
//Dado: las columnas y las filas se representan en el arreglo de la siguiente manera: [columnas][filas]
//Dado: las aristas tienen un valor de 0 si apuntan a ellas, infinito si no esta conectada y de lo contrario significa que sí hay una conexion entre los nodos

//Devuelve la distancia (o peso) de una arista dado sus dos nodos (inicio y destino)
//Nota: se sugiere NO usar recursion
//EXPLICACION: Retormamos el grafo en la celda tomando como referencia el dato de inicio y el de destino.
int obtenerDistanciaAristaDirecta(int grafo[5][5], int inicio, int destino)
{
    return grafo[inicio][destino];
}

//Dado un grafo y un nodo inicial. Devuelve un vector ordenado que contenga todos los nodos adjacentes al nodo inicial.
//Ejemplo:
//Dado el siguiente grafo y el nodo inicial 2
//http://visualgo.net/dfsbfs.html
//Devuelve el siguiente vector: {0,1,3}
vector<int> obtenerListaDeAristas(int grafo[5][5], int inicio)
{
    vector<int> respuesta;
    /*int contador=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(grafo[i][j]!=infinito)
            {
               cout<<grafo[i][j]<<endl;
               respuesta[contador]=grafo[i][j];
               contador++;
            }
        }
    }*/
    return respuesta;
}

//Devuelve verdadero si existe al menos un camino para llegar desde el nodo inicio hasta el nodo destino dada una profundidad maxima de recorrido
//Nota: se sugiere usar recursion
//EXPLICACION: Hacemos una comparacion que el inicio sea igual con el destino si el numero es igual retornar verdadero,
//luego iniciamos un ciclo "for" en el cual verificamos los datos del grafo
//si el dato es distinto a nulo entonses realizamos una nueva comparacion haciendo una llamada recursiva sobre si existe camino
//si existe camino retorna verdadero, sino se sale del ciclo y retorna falso
bool existeCamino(int grafo[5][5], int inicio, int destino,int profundidad)
{
    if(inicio==destino)
    {
        return true;
    }
    if(profundidad<0)
    {
        return false;
    }

    for(int i=0;i<5;i++)
    {
        if(grafo[inicio][i]!=infinito)
        {
            if(existeCamino(grafo,i,destino,profundidad-1))
            {
                return true;
            }
        }
    }
    return false;
}

int main ()
{
    evaluar();

    return 1;
}
