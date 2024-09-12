#include <iostream>
using namespace std;

// Classe base Pessoa
class Pessoa {
protected:
    string nome;
    int idade;

public:
    // Construtor da classe Pessoa
    Pessoa(string nome, int idade) {
        this->nome = nome;
        this->idade = idade;
    }

    // M�todo para imprimir o nome
    void imprimirNome() const {
        cout << "O nome �: " << nome << endl;
    }

    // M�todo virtual para imprimir a idade
    virtual void imprimirIdade() const {
        cout << "Idade: " << idade << " anos" << endl;
    }
};

// Classe derivada Aluno
class Aluno : public Pessoa {
private:
    string matricula;

public:
    // Construtor da classe Aluno
    Aluno(string nome, int idade, string matricula) : Pessoa(nome, idade) {
        this->matricula = matricula;
    }

    // M�todo para imprimir a matr�cula
    void imprimirMatricula() const {
        cout << "Matr�cula: " << matricula << endl;
    }

    // Sobrescrevendo o m�todo para imprimir a idade com uma string espec�fica
    void imprimirIdade() const override {
        cout << "A idade do aluno �: " << idade << " anos" << endl;
    }
};

// Classe derivada Professor
class Professor : public Pessoa {
public:
    // Construtor da classe Professor
    Professor(string nome, int idade) : Pessoa(nome, idade) {}

    // Sobrescrevendo o m�todo para imprimir a idade com uma string espec�fica
    void imprimirIdade() const override {
        cout << "A idade do professor �: " << idade << " anos" << endl;
    }
};

int main() {
    // Criando objetos das classes Aluno, Professor e Pessoa
    Aluno aluno("Ana", 20, "20240001");
    Professor professor("Carlos", 45);
    Pessoa pessoa("Jo�o", 30);

    // Imprimindo os atributos e m�todos de cada classe
    aluno.imprimirNome();
    aluno.imprimirIdade();
    aluno.imprimirMatricula();
    
    professor.imprimirNome();
    professor.imprimirIdade();
    
    pessoa.imprimirNome();
    pessoa.imprimirIdade();

    return 0;
}
