# Resolução do exercício 1 - Uso de herança e polimorfismo

Nesta solução refatoramos a classe Button de modo a torna-la mais genérica. Tanto os arquivos Button.h, quanto o Button.cpp contém agora somente a lógica para um botão funcionar, tornando-se portanto, uma classe mais *coesa*.

A implementação da parte específica de _negócio_ são feitas nas classes filhas CircleButton e SquareButton. Portanto, poderíamos imaginar que, num projeto maior, um programador (ou time) seria responsável pela construção da classe Button (e talvez demais classes de interface gráfica), enquanto outro, trabalhando num projeto específico, implementaria suas classes filhas.

Os arquivos encontram-se comentados, estude os comentários para entender os detalhes dessa implementação.

Para o caso do Botão, essa ainda não é a melhor implementação possível. Uma das regras de ouro de projeto de software é "prefira composição à herança". Uma alternativa melhor é demonstrada na próxima aula.
