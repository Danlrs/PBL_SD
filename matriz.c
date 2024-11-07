#include <stdio.h>
#include <stdlib.h>

extern void mapm();
extern void draw_box(int posicao, int cor);
extern void draw_text(int posicao, int cor);
extern void limpar_tela();
extern int button_pressed();

// Desenhar uma linha vertical
void draw_vertical(int pos, int color, int tamanho) {
    for (int i = 0; i < tamanho; i++){
        draw_box(pos + i*160, color);
    }
}

// Desenhar uma linha horizontal
void draw_horizontal(int pos, int color, int tamanho) {
    for (int i = 0; i < tamanho; i++){
        draw_box(pos + i*2, color);
    }
}

// Desenhar uma linha vertical
void draw_vertical_text(int pos, int color, int tamanho) {
    for (int i = 0; i < tamanho; i++){
        draw_text(pos + i*80, color);
    }
}

void draw_horizontal_text(int pos, int color, int tamanho) {
    for (int i = 0; i < tamanho; i++){
        draw_text(pos + i, color);
    }
}

void main(){
    mapm();
    limpar_tela();
    
    /*int matriz[20][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
        {0, 1, 1, 1, 0, 0, 1, 1, 0, 0},
        {0, 1, 0, 1, 1, 0, 1, 0, 0, 1},
        {0, 1, 0, 1, 0, 0, 1, 1, 0, 1},
        {0, 1, 1, 1, 1, 0, 1, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1}
    };
    
    for (int i = 0; i < 20; i++){
        for (int j = 0; j < 10; j++){
            if (matriz[i][j] == 1){
                draw_box(2*j+(i*160), 0b111111111);
            }
        }
    }*/ // Desenhar a letra T
    //     draw_horizontal(565, 0b110110110, 5);
    //     draw_vertical(729, 0b110110110, 4);

    //     // Desenhar a letra E (Verde)
    //     draw_vertical(577, 0b001101010, 5);
    //     draw_horizontal(579, 0b001101010, 4);
    //     draw_horizontal(899, 0b001101010, 3);
    //     draw_horizontal(1219, 0b001101010, 4);

    //     // Desenhar a letra T (segunda vez - Azul)
    //     draw_horizontal(589, 0b101011001, 5);
    //     draw_vertical(753, 0b101011001, 4);

    //     // Desenhar a letra R (Amarelo)
    //     draw_vertical(601, 0b001110111, 5);
    //     draw_horizontal(603, 0b001110111, 2);
    //     draw_box(767, 0b001110111);
    //     draw_horizontal(923, 0b001110111, 2);
    //     draw_box(1087, 0b001110111);
    //     draw_box(1247, 0b001110111);

    //     // Desenha a letra I
    //     draw_horizontal(611, 0b101101001, 5);
    //     draw_vertical(695, 0b101101001, 4);
    //     draw_horizontal(1251, 0b101101001, 5);

    //     // Desenha a letra S
    //     draw_horizontal(623, 0b001010111, 5);
    //     draw_vertical(783, 0b001010111, 2);
    //     draw_horizontal(943, 0b001010111, 5);
    //     draw_vertical(1111, 0b001010111, 2);
    //     draw_horizontal(1263, 0b001010111, 5);

    //     // Desenhar a palavra Jogar
    //     draw_horizontal_text(2502, 0b111111111, 1); // Seletor

    //     // Desenha a letra J
    //    /* draw_vertical_text(2584, 0b111111111, 2);
    //     draw_horizontal_text(2665, 0b111111111, 2);
    //     draw_vertical_text(2346, 0b111111111, 4);

    //     // Desenha a letra O
    //     draw_horizontal_text(2348, 0b111111111, 3);
    //     draw_vertical_text(2428, 0b111111111, 3);
    //     draw_vertical_text(2430, 0b111111111, 3);
    //     draw_horizontal_text(2668, 0b111111111, 3);

    //     // Desenha a letra G
    //     draw_horizontal_text(2352, 0b111111111, 3);
    //     draw_vertical_text(2432, 0b111111111, 3);
    //     draw_horizontal_text(2672, 0b111111111, 3);
    //     draw_vertical_text(2594, 0b111111111, 1);

    //     // Desenha a letra A
    //     draw_horizontal_text(2356, 0b111111111, 3);
    //     draw_vertical_text(2356, 0b111111111, 4);
    //     draw_vertical_text(2438, 0b111111111, 4);
    //     draw_vertical_text(2517, 0b111111111, 1);

    //     // Desenha a letra R
    //     draw_horizontal_text(2360, 0b111111111, 2);
    //     draw_vertical_text(2440, 0b111111111, 4);
    //     draw_vertical_text(2442, 0b111111111, 1);
    //     draw_vertical_text(2521, 0b111111111, 1);
    //     draw_vertical_text(2602, 0b111111111, 2);

    //     // Desenhar a palavra Sair
    //     // Desenha a letra S
    //     draw_horizontal_text(2904, 0b111111111, 3);
    //     draw_horizontal_text(2984, 0b111111111, 1);
    //     draw_horizontal_text(3064, 0b111111111, 3);
    //     draw_horizontal_text(3146, 0b111111111, 1);
    //     draw_horizontal_text(3224, 0b111111111, 3);

    //     // Desenha a letra A
    //     draw_horizontal_text(2908, 0b111111111, 3);
    //     draw_vertical_text(2988, 0b111111111, 4);
    //     draw_vertical_text(2990, 0b111111111, 4);
    //     draw_vertical_text(3069, 0b111111111, 1);

    //     // Desenha a letra I
    //     draw_horizontal_text(2912, 0b111111111, 3);
    //     draw_vertical_text(2993, 0b111111111, 3);
    //     draw_horizontal_text(3232, 0b111111111, 3);

    //     // Desenha a letra R
    //     draw_horizontal_text(2916, 0b111111111, 2);
    //     draw_vertical_text(2996, 0b111111111, 4);
    //     draw_vertical_text(2998, 0b111111111, 1);
    //     draw_vertical_text(3077, 0b111111111, 1);
    //     draw_vertical_text(3158, 0b111111111, 2);*/

    //     //desenhar a letra H
    //     draw_vertical_text(728, 0b111111111, 5);
    //     draw_text(889, 0b111111111);
    //     draw_vertical_text(730, 0b111111111, 5);
    //     // Desenha a letra S
    //     draw_horizontal_text(732, 0b111111111, 3);
    //     draw_horizontal_text(812, 0b111111111, 1);
    //     draw_horizontal_text(892, 0b111111111, 3);
    //     draw_horizontal_text(974, 0b111111111, 1);
    //     draw_horizontal_text(1052, 0b111111111, 3);

    //     // Desenha o ponto
    //     draw_text(1056, 0b111111111);

        //limpar_tela();
        /*while(1){
        if (button_pressed() == 7){
            draw_box(2359, 0b111111111);
        }
        if (button_pressed() == 11){
            draw_box(2359, 0b000111111);
        }
        if (button_pressed() == 13){
            draw_box(2359, 0b111000111);
        }
        if (button_pressed() == 14){
            draw_box(2359, 0b111111000);
        }
    }*/
    

    //Desenha o 0 (ajustar posição)
    //draw_text(2349, 0b111111111);
    //draw_vertical_text(2428, 0b111111111, 3);
    //draw_vertical_text(2430, 0b111111111, 3);
    //draw_text(2669, 0b111111111);

    //Desenha o 1 (ajustar posição)
    //draw_vertical_text(1283, 0b111111111, 5);
    //draw_text(1362  , 0b111111111);

    //Desenha o 2 (ajustar posição)
    // draw_text(1842, 0b111111111);
    // draw_text(1763, 0b111111111);
    // draw_text(1844, 0b111111111);
    // draw_text(1923, 0b111111111);
    // draw_text(2002, 0b111111111);
    // draw_horizontal_text(2082, 0b111111111, 3);

    //Deseha o 3 (ajustar posição)
    // draw_text(2242, 0b111111111);
    // draw_text(2243, 0b111111111);
    // draw_text(2324, 0b111111111);
    // draw_text(2403, 0b111111111);
    // draw_text(2562, 0b111111111);
    // draw_text(2563, 0b111111111);
    // draw_text(2484, 0b111111111);

    //Desenha o 4 (ajustar posição)
    // draw_vertical_text(2348, 0b111111111, 3);
    // draw_text(2509, 0b111111111);
    // draw_vertical_text(2350, 0b111111111, 5);

    //Desenha o 5 (ajustar posição)
    //draw_horizontal_text(2904, 0b111111111, 3);
    //draw_horizontal_text(2984, 0b111111111, 1);
    //draw_horizontal_text(3064, 0b111111111, 3);
    //draw_horizontal_text(3146, 0b111111111, 1);
    //draw_horizontal_text(3224, 0b111111111, 3);

    //Desenha o 6 (ajustar posição)
    // draw_horizontal_text(2349, 0b111111111, 2);
    // draw_vertical_text(2348, 0b111111111, 5);
    // draw_horizontal_text(2669, 0b111111111, 2);
    // draw_vertical_text(2510, 0b111111111, 2);
    // draw_text(2509, 0b111111111);
    
    //Desenha o 7 inclinado 
    //draw_horizontal_text(2348, 0b111111111, 3);
    //draw_vertical_text(2430, 0b111111111, 4);

    //Desenha o 8
    // draw_horizontal_text(2348, 0b111111111, 3);
    // draw_vertical_text(2428, 0b111111111, 3);
    // draw_text(2509, 0b111111111);
    // draw_vertical_text(2430, 0b111111111, 3);
    // draw_horizontal_text(2668, 0b111111111, 3);
    
    //Desenha o 9
    //draw_horizontal_text(2348, 0b111111111, 3);
    //draw_text(2428, 0b111111111);
    //draw_horizontal_text(2508, 0b111111111, 2);
    //draw_vertical_text(2350, 0b111111111, 5);
}