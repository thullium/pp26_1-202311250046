#include "ImplementadoresConcretos.h"
#include "PublicacoesRefinadas.h"

int main() {
    // 1. Criando os Implementadores (Motores)
    Implementador* bancoDados = new PublicacaoImplBD();
    Implementador* arquivoXML = new PublicacaoImplXML();

    // 2. Criando as Abstrações (Objetos de Negócio) e conectando a ponte
    Livro* meuLivro = new Livro(bancoDados);
    Revista* minhaRevista = new Revista(arquivoXML);

    // 3. Execução
    std::cout << "--- Executando Livro com BD ---" << std::endl;
    meuLivro->getTitulo();
    meuLivro->obterDados("C++ Design Patterns");
    meuLivro->getISBN();

    std::cout << "\n--- Executando Revista com XML ---" << std::endl;
    minhaRevista->getAutor(77);
    minhaRevista->obterDados("Tech Weekly");
    minhaRevista->getArtigo();

    // Limpeza
    delete meuLivro;
    delete minhaRevista;
    delete bancoDados;
    delete arquivoXML;

    return 0;
}