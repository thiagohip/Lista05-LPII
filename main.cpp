#include <iostream>

using namespace std;

class Operacional{
    public:
        int valores[10];
        int posicoes_ocupadas = 0;
        void adicionarValores(int n){
            valores[posicoes_ocupadas] = n;
            posicoes_ocupadas++;
        }
        void somaEProduto(int &soma, int &produto){
            for(int i=0; i<posicoes_ocupadas; i++){
                soma += valores[i];
                produto = produto*valores[i];
            }
        }
};

int main(){

    int qtdn;

    Operacional sys;

    cout << "Digite quantos números deseja passar(Máximo de 10): ";
    cin >> qtdn;

    for(int i=0; i<qtdn; i++){
        int n;
        cin >> n;
        sys.adicionarValores(n);
    }

    int soma = 0;
    int produto = 1;
    sys.somaEProduto(soma, produto);
    cout <<"\nA soma dos valores passados é " << soma;
    cout <<"\nO produto dos valores passados é " << produto;
    
    return 0;
}