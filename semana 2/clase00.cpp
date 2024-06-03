// clase00.cpp
# include <iostream>
using namespace std;

class Gato { // Inicializamos la clase "Gato"                
public:   // Declaramos que las siguientes serán en modo "public"
    int ObtenerEdad();    // le pasamos la funcion ObtenerEdad a la clase
    void AsignarEdad(int edad);   // le pasamos la funcion AsignarEdad a la clase
    void Maullar();  // le pasamos la funcion Maullar a la clase
private:    // declaramos que la siguientes variables serán privadas, es decir que no se puede editar por otro programador
    int suEdad;    // declaramos la variable edad
};

int Gato::ObtenerEdad() {    // creamos una función para la clase Gato, la cual devuelve la edad
    return suEdad;
}

void Gato::AsignarEdad(int edad) {      // creamos una función para la clase Gato,  que recibe un parámetro para darle una edad a Gato
    suEdad = edad;

}
void Gato::Maullar() {    // creamos una función para la clase Gato, que muestra un mensaje simulando un maullido
    cout << "Miau!\n";
}

int main() {
    Gato Pelusa;    // creamos un objeto llamado Pelusa, usando la clase Gato
    Pelusa.AsignarEdad(5);   // le asignamos una edad al objeto
    Pelusa.Maullar();   // ejecutamos la funcion Maullar del objeto para mostrar un mensaje en la pantalla
    cout << "Pelusa es un gato que tiene ";    // por último mostramos en pantalla cuantos años de edad tiene el objeto, obteniendo la edad con la funcion ObtenerEdad()
    cout << Pelusa.ObtenerEdad() << " años de edad.\n";
    Pelusa.Maullar();    // mostramos el mensaje del maullido nuevamente 
    return 0;
}
