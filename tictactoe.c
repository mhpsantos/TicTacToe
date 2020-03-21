#include <stdio.h>


int m[3][3];

int termino=0,jg=0,jogada=0;
void zerar() {
	int x,y;
	for( x=0; x<3; x++)
		for( y=0; y<3; y++)
			m[x][y]=' ';
}
void PJogada() {//Primeira jogada.
	if((m[0][0]==' ')&&(m[0][2]==' ')&&(m[2][0]==' ')&&(m[2][2]==' ')) {
		if(m[1][1]==' ') {
			m[0][0]='O';
		} else {
			m[1][0]='O';
		}
	} else {
		m[1][1]='O';
	}
}
void scan() {//Ler o movimento do jogador
	int l,c;
	scanf("%d %d",&l,&c);
	if((l>0)&&(l<=3)&&(c>0)&&(c<=3)&&(m[l-1][c-1]!='O')) {
		m[l-1][c-1]='X';
	} else {
		printf("Posicao Invalida\n");
		l=0;
		c=0;
		getch();
		scan();
	}


}
void mostrar() {//Mostra o jogo.
	system("cls");
	printf("\t\t%c | %c | %c\n",m[0][0],m[0][1],m[0][2]);
	printf("\t\t--|---|--\n");
	printf("\t\t%c | %c | %c\n",m[1][0],m[1][1],m[1][2]);
	printf("\t\t--|---|--\n");
	printf("\t\t%c | %c | %c\n",m[2][0],m[2][1],m[2][2]);
}
void IA () {//Inteligencia artificial
	int x,y;
	int cond=0;
	if((m[0][0]=='O')&&(m[0][2]=='O')&&(m[0][1]==' ')) {
		m[0][1]='O';
		cond=1;
	} else if((m[0][0]=='O')&&(m[0][1]=='O')&&(m[0][2]==' ')) {
		m[0][2]='O';
		cond=1;
	} else if((m[0][2]=='O')&&(m[0][1]=='O')&&(m[0][0]==' ')) {
		m[0][0]='O';
		cond=1;
	} else if((m[0][0]=='O')&&(m[2][0]=='O')&&(m[1][0]==' ')) {
		m[1][0]='O';
		cond=1;
	} else if((m[0][0]=='O')&&(m[1][0]=='O')&&(m[2][0]==' ')) {
		m[2][0]='O';
		cond=1;
	} else if((m[1][0]=='O')&&(m[2][0]=='O')&&(m[0][0]==' ')) {
		m[0][0]='O';
		cond=1;
	} else if((m[2][0]=='O')&&(m[2][2]=='O')&&(m[2][1]==' ')) {
		m[2][1]='O';
		cond=1;
	} else if((m[2][0]=='O')&&(m[2][1]=='O')&&(m[2][2]==' ')) {
		m[2][2]='O';
		cond=1;
	} else if((m[2][1]=='O')&&(m[2][2]=='O')&&(m[2][0]==' ')) {
		m[2][0]='O';
		cond=1;
	} else if((m[2][2]=='O')&&(m[0][2]=='O')&&(m[1][2]==' ')) {
		m[1][2]='O';
		cond=1;
	} else if((m[2][2]=='O')&&(m[1][2]=='O')&&(m[0][2]==' ')) {
		m[0][2]='O';
		cond=1;
	} else if((m[1][2]=='O')&&(m[0][2]=='O')&&(m[2][2]==' ')) {
		m[2][2]='O';
		cond=1;
	} else if((m[0][1]=='O')&&(m[2][1]=='O')&&(m[1][1]==' ')) {
		m[1][1]='O';
		cond=1;
	} else if((m[0][1]=='O')&&(m[1][1]=='O')&&(m[2][1]==' ')) {
		m[2][1]='O';
		cond=1;
	} else if((m[1][1]=='O')&&(m[2][1]=='O')&&(m[0][1]==' ')) {
		m[0][1]='O';
		cond=1;
	} else if((m[0][0]=='X')&&(m[2][2]=='X')&&(m[1][1]==' ')) {
		m[1][1]='O';
		cond=1;
	} else if((m[0][0]=='O')&&(m[1][1]=='O')&&(m[2][2]==' ')) {
		m[2][2]='O';
		cond=1;
	} else if((m[1][1]=='O')&&(m[2][2]=='O')&&(m[0][0]==' ')) {
		m[0][0]='O';
		cond=1;
	} else if((m[0][2]=='O')&&(m[2][0]=='O')&&(m[1][1]==' ')) {
		m[1][1]='O';
		cond=1;
	} else if((m[0][2]=='O')&&(m[1][1]=='O')&&(m[2][0]==' ')) {
		m[2][0]='O';
		cond=1;
	} else if((m[2][0]=='O')&&(m[1][1]=='O')&&(m[0][2]==' ')) {
		m[0][2]='O';
		cond=1;
	} else
		//para atrapalhar o oponente a ganhar
		if((m[0][0]=='X')&&(m[0][2]=='X')&&(m[0][1]==' ')) {
			m[0][1]='O';
			cond=1;
		} else if((m[0][2]=='X')&&(m[1][1]=='X')&&(m[2][0]==' ')) {
			m[2][0]='O';
			cond=1;
		} else if((m[0][0]=='X')&&(m[0][1]=='X')&&(m[0][2]==' ')) {
			m[0][2]='O';
			cond=1;
		} else if((m[0][2]=='X')&&(m[1][1]=='X')&&(m[1][2]==' ')) {
			m[1][2]='O';
			cond=1;
		} else if((m[0][0]=='X')&&(m[2][0]=='X')&&(m[1][0]==' ')) {
			m[1][0]='O';
			cond=1;
		} else if((m[0][0]=='X')&&(m[1][0]=='X')&&(m[2][0]==' ')) {
			m[2][0]='O';
			cond=1;
		} else if((m[1][0]=='X')&&(m[2][0]=='X')&&(m[0][0]==' ')) {
			m[0][0]='O';
			cond=1;
		} else if((m[2][0]=='X')&&(m[2][2]=='X')&&(m[2][1]==' ')) {
			m[2][1]='O';
			cond=1;
		} else if((m[2][0]=='X')&&(m[2][1]=='X')&&(m[2][2]==' ')) {
			m[2][2]='O';
			cond=1;
		} else if((m[2][1]=='X')&&(m[2][2]=='X')&&(m[2][0]==' ')) {
			m[2][0]='O';
			cond=1;
		} else if((m[2][2]=='X')&&(m[0][2]=='X')&&(m[1][2]==' ')) {
			m[1][2]='O';
			cond=1;
		} else if((m[2][2]=='X')&&(m[1][2]=='X')&&(m[0][2]==' ')) {
			m[0][2]='O';
			cond=1;
		} else if((m[1][2]=='X')&&(m[0][2]=='X')&&(m[2][2]==' ')) {
			m[2][2]='O';
			cond=1;
		} else if((m[0][1]=='X')&&(m[2][1]=='X')&&(m[1][1]==' ')) {
			m[1][1]='O';
			cond=1;
		} else if((m[0][1]=='X')&&(m[1][1]=='X')&&(m[2][1]==' ')) {
			m[2][1]='O';
			cond=1;
		} else if((m[1][1]=='X')&&(m[2][1]=='X')&&(m[0][1]==' ')) {
			m[0][1]='O';
			cond=1;
		} else


			if((m[0][0]=='X')&&(m[2][2]=='X')&&(m[1][1]==' ')) {
				m[1][1]='O';
				cond=1;
			} else if((m[0][0]=='X')&&(m[1][1]=='X')&&(m[2][2]==' ')) {
				m[2][2]='O';
				cond=1;
			} else if((m[1][1]=='X')&&(m[2][2]=='X')&&(m[0][0]==' ')) {
				m[0][0]='O';
				cond=1;
			} else if((m[0][2]=='X')&&(m[2][0]=='X')&&(m[1][1]==' ')) {
				m[1][1]='O';
				cond=1;
			} else if((m[0][2]=='X')&&(m[1][1]=='X')&&(m[2][0]==' ')) {
				m[2][0]='O';
				cond=1;
			} else if((m[2][0]=='X')&&(m[1][1]=='X')&&(m[0][2]==' ')) {
				m[0][2]='O';
				cond=1;
			}

			else {
				for (x=0; x<3; x++)
					for (y=0; y<3; y++) {
						if((cond==0)&&(m[x][y]==' ')) {

							m[x][y]='O';
							cond=1;
						}

					}
			}
}
void final() {
	printf("O jogador %c ganhou.",jg);
}


void testes() {

	//Horizontal
	if((m[0][0]==m[0][1])&&(m[0][1]==m[0][2])&&(m[0][0]!=' ')) {
		termino=1;
		jg=m[0][0];
		final();
	}
	if((m[1][0]==m[1][1])&&(m[1][1]==m[1][2])&&(m[1][0]!=' ')) {
		termino=1;
		jg=m[1][0];
		final();
	}
	if((m[2][0]==m[2][1])&&(m[2][1]==m[2][2])&&(m[2][0]!=' ')) {
		termino=1;
		jg=m[2][0];
		final();
	}

	//Vertical

	if((m[0][0]==m[1][0])&&(m[1][0]==m[2][0])&&(m[0][0]!=' ')) {
		termino=1;
		jg=m[0][0];
		final();
	}
	if((m[0][1]==m[1][1])&&(m[1][1]==m[2][1])&&(m[0][1]!=' ')) {
		termino=1;
		jg=m[0][1];
		final();
	}
	if((m[0][2]==m[1][2])&&(m[1][2]==m[2][2])&&(m[0][2]!=' ')) {
		termino=1;
		jg=m[0][2];
		final();
	}

	//Diagonal

	if((m[0][0]==m[1][1])&&(m[1][1]==m[2][2])&&(m[0][0]!=' ')) {
		termino=1;
		jg=m[0][0];
		final();
	}
	if((m[0][2]==m[1][1])&&(m[1][1]==m[2][0])&&(m[0][2]!=' ')) {
		termino=1;
		jg=m[0][2];
		final();
	}
	// Velha
	if ((jogada==4)&&(jg==' ')) {
		system("cls");
		printf("Deu velha.\n");


	}
	final();
}

void jogarnv() {
	printf("Deseja jogar novamente?(s/n)");
	char jgnv;
	scanf("%c",&jgnv);
	if (jgnv=='s')
		jogo();
	else
		printf("Saindo do jogo");
}

int main() {//Rodar o jogo
	char jgnv;
	do {
		int fim=0;
		zerar();

		mostrar();
		scan();
		PJogada();
		while(jogada<4) {
			if(termino!=1) {
				mostrar();
				scan();
				IA();
				jogada++;
				testes();
			}
		}
		scanf("%c",jgnv);
	}while(jgnv=='s');
}

	


