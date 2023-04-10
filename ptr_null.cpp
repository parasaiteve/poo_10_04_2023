//incluir biblioteca
#include <iostream>
//biblioteca chamada para usar
using namespace std;

//inicio do programa
int main()
{
    //declaracao da variavel
    int *ptr = new int;
    //ponteiro pVar
    *ptr = 7;
    //atribuir o valor a ele
    
    //envia o valor do ponteiro
    cout<< *ptr<<endl;
    //imprime o endereco
    cout<< ptr<<endl;
    
    //deleta o ponteiro
    delete ptr;
    //limpa a memoria suja
    ptr = nullptr;
    
    //envia o valor do ponteiro
    cout<< *ptr<<endl;
    //imprime o endereco
    cout<< ptr<<endl;
    
}
