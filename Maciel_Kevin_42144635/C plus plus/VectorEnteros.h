#ifndef VECTORENTEROS_H_INCLUDED
#define VECTORENTEROS_H_INCLUDED
//Maciel_Kevin_42144635
class VectorEnteros
{
private:
    int *vec;
public:
    VectorEnteros(int* vec, int tam);
    VectorEnteros agregar(int* vec, int tam);
    VectorEnteros operator +(VectorEnteros &d1, VectorEnteros &d2);
    VectorEnteros operator =(VectorEnteros &d);
    friend ostream& operator <<(ostream &o, VectorEnteros &v);
    ~VectorEnteros();
};

#endif // VECTORENTEROS_H_INCLUDED
