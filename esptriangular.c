#include <stdio.h>
#include <math.h>

int main(){
  int point, x, y;

  scanf("%d", &point);

  int root = (int)sqrt((double)point);

  if(root*root == point){ //quadrado perfeito
    if(root%2 == 0){ //quadrado perfeito par
      x = -root;
      y = -root/2;
    }else{ //quadrado perfeito impar
      x = root;
      y = -root/2;
    }
  }else{ //não é quadrado perfeito
    int dig = root*root; //maior quadrado perfeito menor que n
    int aux = point - dig; //quanto point é maior que dig

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