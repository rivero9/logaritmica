# include <iostream>


// este código es bastante parecido al anterior a diferencia de lo siguiente: 

using namespace std;
class Gato {
public:
    Gato (int edadInicial);
    ~Gato();
    int ObtenerEdad();
    void AsignarEdad(int edad);
    void Maullar();

private:
    int suEdad;
};


Gato::Gato(int edadInicial) {
    cout << "Ingresando al constructor...\n";
    suEdad=edadInicial;
}

Gato::~Gato() {
    cout << "Ingresando al destructor...\n";
}

int Gato::ObtenerEdad() {
    return suEdad;
}

void Gato::AsignarEdad(int edad) {
    suEdad = edad;
}

void Gato::Maullar() {
    cout << "Miau!\n";
}

int main() {
    Gato Pelusa(5);  // cuando creamos el objetos le pasamos un numero, el cual va a hacer la edad inicial
    Pelusa.Maullar();
    cout << "Pelusa es un gato que tiene ";
    cout << Pelusa.ObtenerEdad() << " años de edad.\n";
    Pelusa.Maullar();
    Pelusa.AsignarEdad(7);   // y luego lo podemos reasignar la edad
    cout << " Ahora Pelusa tiene ";
    cout << Pelusa.ObtenerEdad() << " años de edad.\n";
    return 0;
}