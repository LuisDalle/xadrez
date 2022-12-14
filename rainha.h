	// Pe?a Rainha - Projeto Final
	// Aluno: Lu?s Eduardo Dalle Molle
	// RA: 22104765

void possivelMovimentoRainha(Peca *peca, Posicao posicaoDestino) {

	inicializarMatrizMovimentosPossiveis(peca);

	Posicao p;
	// INICIO TORRE
	
	// movimenta cima - Norte
	p.linha = peca->posicao.linha - 1;
	p.coluna = peca->posicao.coluna;
	while(posicaoExiste(p) && !existePeca(p)) {
		peca->matrizMovimentosPossiveis[p.linha][p.coluna] = VERDADEIRO;
		p.linha = p.linha - 1;
	}
	if(posicaoExiste(p) && ehPecaOponente(*peca, p)) {
		peca->matrizMovimentosPossiveis[p.linha][p.coluna] = VERDADEIRO;
	}			

	// movimenta para baixo - SUL
	p.linha = peca->posicao.linha + 1;
	p.coluna = peca->posicao.coluna;
	while(posicaoExiste(p) && !existePeca(p)) {
		peca->matrizMovimentosPossiveis[p.linha][p.coluna] = VERDADEIRO;
		p.linha = p.linha + 1;
	}
	if(posicaoExiste(p) && ehPecaOponente(*peca, p)) {
		peca->matrizMovimentosPossiveis[p.linha][p.coluna] = VERDADEIRO;
	}		

	// movimenta para esquerda OESTE
	p.linha = peca->posicao.linha;
	p.coluna = peca->posicao.coluna - 1;
	while(posicaoExiste(p) && !existePeca(p)) {
		peca->matrizMovimentosPossiveis[p.linha][p.coluna] = VERDADEIRO;
		p.coluna = p.coluna - 1;
	}
	if(posicaoExiste(p) && ehPecaOponente(*peca, p)) {
		peca->matrizMovimentosPossiveis[p.linha][p.coluna] = VERDADEIRO;
	}		

	// movimenta para direita - LESTE
	p.linha = peca->posicao.linha;
	p.coluna = peca->posicao.coluna + 1;
	while(posicaoExiste(p) && !existePeca(p)) {
		peca->matrizMovimentosPossiveis[p.linha][p.coluna] = VERDADEIRO;
		p.coluna = p.coluna + 1;
	}
	if(posicaoExiste(p) && ehPecaOponente(*peca, p)) {
		peca->matrizMovimentosPossiveis[p.linha][p.coluna] = VERDADEIRO;
	}
	
	// FIM TORRE
	
	// INICIO BISPO 
	
	// movimenta diagonal para cima e direita - Nordeste
	p.linha = peca->posicao.linha - 1;
	p.coluna = peca->posicao.coluna + 1;
	while(posicaoExiste(p) && !existePeca(p)) {
		peca->matrizMovimentosPossiveis[p.linha][p.coluna] = VERDADEIRO;
		p.linha = p.linha - 1;
		p.coluna = p.coluna + 1;
	}
	if(posicaoExiste(p) && ehPecaOponente(*peca, p)) {
		peca->matrizMovimentosPossiveis[p.linha][p.coluna] = VERDADEIRO;
	}			

	// movimenta diagonal para cima e esquerda - Noroeste
	p.linha = peca->posicao.linha - 1;
	p.coluna = peca->posicao.coluna - 1;
	while(posicaoExiste(p) && !existePeca(p)) {
		peca->matrizMovimentosPossiveis[p.linha][p.coluna] = VERDADEIRO;
		p.linha = p.linha - 1;
		p.coluna = p.coluna - 1;
	}
	if(posicaoExiste(p) && ehPecaOponente(*peca, p)) {
		peca->matrizMovimentosPossiveis[p.linha][p.coluna] = VERDADEIRO;
	}		

	// movimenta diagonal para baixo e esquerda - Sudoeste
	p.linha = peca->posicao.linha + 1;
	p.coluna = peca->posicao.coluna - 1;
	while(posicaoExiste(p) && !existePeca(p)) {
		peca->matrizMovimentosPossiveis[p.linha][p.coluna] = VERDADEIRO;
		p.linha = p.linha + 1;
		p.coluna = p.coluna - 1;
	}
	if(posicaoExiste(p) && ehPecaOponente(*peca, p)) {
		peca->matrizMovimentosPossiveis[p.linha][p.coluna] = VERDADEIRO;
	}		

	// movimenta diagonal para baixo e direita - Sudeste
	p.linha = peca->posicao.linha + 1;
	p.coluna = peca->posicao.coluna + 1;
	while(posicaoExiste(p) && !existePeca(p)) {
		peca->matrizMovimentosPossiveis[p.linha][p.coluna] = VERDADEIRO;
		p.linha = p.linha + 1;
		p.coluna = p.coluna + 1;
	}
	if(posicaoExiste(p) && ehPecaOponente(*peca, p)) {
		peca->matrizMovimentosPossiveis[p.linha][p.coluna] = VERDADEIRO;
	}
	
	// FIM BISPO
	
}

