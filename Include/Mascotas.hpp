class Mascotas
{
private:
    //Implementacion oculta
    int Energia;
    int felicidad;

public:
    Mascotas(){}
    this->Energia=0;
    this->Felicidad=0;
    ~Mascotas(){}
    //Interfaz
void Comer(Alimento alimento){
Energia+=1;
}
void Jugar(){
    Energia -=1;
    Felicidad += 1;
}

}