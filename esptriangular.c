#include <stdio.h>
#include <math.h>

// retorna a raiz quadrada, caso n seja um quadrado perfeito,
// ou a raiz quadrada do menor quadrado perfeito maior que n
int whole_square_root(int n){
  int i = 0;
  while(i*i < n) i++;
  return i;
}

int main(){
  int point = 0;
  int x = 0;
  int y = 0;

  scanf("%d", &point);

  int root = whole_square_root(point);

  if(root*root == point){ //quadrado perfeito
    if(root%2 == 0){ //quadrado perfeito par
      x = -root;
      y = -root/2;
    }else{ //quadrado perfeito impar
      x = root;
      y = -root/2;
    }
  }else{ //não é quadrado perfeito
    root--; //raiz quadrada do maior quadrado perfeito menor que n
    int dig = root*root; //maior quadrado perfeito menor que n
    int aux = point - dig; //o quanto point é maior que dig

    if(dig%2 == 0){ //dig é par
      x = -root + aux;
      y = -root/2;
    }else{ //dig é impar
      x = root;
      y = -root/2;
      if(aux >= root){
        x -= aux;
        y += root;
        aux -= root;
        y -= aux;
      }else{
        x -= aux;
        y += aux;
      }
    }
  }

  printf("(%d,%d)\n", x, y);

  return 0;
}