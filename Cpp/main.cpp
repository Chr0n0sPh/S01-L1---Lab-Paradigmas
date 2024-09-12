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

    // Método para imprimir o nome
    void imprimirNome() const {
        cout << "O nome é: " << nome << endl;
    }

    // Método virtual para imprimir a idade
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

    // Método para imprimir a matrícula
    void imprimirMatricula() const {
        cout << "Matrícula: " << matricula << endl;
    }

    // Sobrescrevendo o método para imprimir a idade com uma string específica
    void imprimirIdade() const override {
        cout << "A idade do aluno é: " << idade << " anos" << endl;
    }
};

// Classe derivada Professor
class Professor : public Pessoa {
public:
    // Construtor da classe Professor
    Professor(string nome, int idade) : Pessoa(nome, idade) {}

    // Sobrescrevendo o método para imprimir a idade com uma string específica
    void imprimirIdade() const override {
        cout << "A idade do professor é: " << idade << " anos" << endl;
    }
};

int main() {
    // Criando objetos das classes Aluno, Professor e Pessoa
    Aluno aluno("Ana", 20, "20240001");
    Professor professor("Carlos", 45);
    Pessoa pessoa("João", 30);

    // Imprimindo os atributos e métodos de cada classe
    aluno.imprimirNome();
    aluno.imprimirIdade();
    aluno.imprimirMatricula();

    professor.imprimirNome();
    professor.imprimirIdade();

    pessoa.imprimirNome();
    pessoa.imprimirIdade();

    return 0;
}
