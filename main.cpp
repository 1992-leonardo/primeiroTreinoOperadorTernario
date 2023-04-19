#include <iostream>

int main(){
    std::cout << "Digite um valor: " << std::endl;
    int i = 0;
    std::cin >> i;

    std::string texto = (i<=10) ? " menor que 10. " :
    " maior que 10. ";

    std::cout << "O valor digitado eh " << texto << std::endl;

    system("pause");
    return 0;
}