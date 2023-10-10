#include <iostream>


using namespace std;

int main()
{
    
    float produto;
    float desconto;
    float valor_f;
    float juros;
    int forma_pag;
    
    // Perguntas para o usuário.
    
    cout << "Indique o preço do produto: " << endl;
    cin >> produto;
    cout << "Indique a forma de pagamento: " << endl;       
    while(1){
    cout << "Dinheiro ou cheque(1), Cartão de crédito(2), Em duas vezes com juros(3), Em duas vezes sem juros(4)" << endl;
    cin >> forma_pag;
    
    //Caso o usuário digitar 1, cálculo para 10% de desconto.
    //Caso o usuário digitar 2, cálculo para 15% de desconto.
    //Caso o  usuário digitar 3, cálculo para juros de 10% em duas vezes.
    //Caso o usuário digitar 4, cálculo para parcela de duas vezes.
    
    if(forma_pag == 1){
        desconto = (10 * produto) / 100;
        valor_f = produto - desconto;
        cout << "O desconto foi de: " << desconto << " R$ (10%)" << endl;  
        cout << "Novo valor do produto: " << valor_f << " R$" << endl;
        break;
    }else if(forma_pag == 2){
        desconto = (15 * produto) / 100;
        valor_f = produto - desconto;
        cout << "O desconto foi de: " << desconto << " R$ (15%)" << endl; 
        cout << "Novo valor do produto: " << valor_f << " R$" << endl;
        break;
    }else if (forma_pag == 3){
        desconto = (10 * produto) / 100;
        valor_f = produto + desconto;
        juros = valor_f / 2;
        cout << desconto << " R$ de juros (10%)" << endl;
        cout << "Valor do produto com juros: " << valor_f << " R$" << endl; 
        cout << "Ficou duas vezes de: " << juros << " R$" << endl;
        break;
        }else if (forma_pag == 4){
        valor_f = produto;
        valor_f = valor_f / 2;
        cout << "Ficou duas vezes de: " << valor_f << " R$" << endl;  
        break;
    }else{
        cout << "--------------------------------------------------" << endl;
        cout << "Opção inválida! Favor inserir uma opção correta: " << endl; 
        cout << "--------------------------------------------------" << endl;
    }
}
    return 0;
}
