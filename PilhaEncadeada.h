#ifndef pilhaEncadeada
#define pilhaEncadeada
#include "Pilha.h"

class PilhaEncadeada : public Pilha {
	public:
		PilhaEncadeada();
		virtual ~PilhaEncadeada();

		void Empilha(int item);
		int Desempilha();
		void Limpa();
		void Print();

	private:
		TipoCelula* topo;
};

#endif