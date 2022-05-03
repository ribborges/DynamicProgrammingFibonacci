#include <stdio.h>
#include <stdlib.h>

int fib(int n){
    int Memo[47];
    int f;

    for (int i = 0; i <= 47; i++)
    {
        Memo[i] = -1;
    }

    Memo[0] = 0;
    Memo[1] = 1;

    for(int i = 0; i <= n; i++){
        if(Memo[i] == -1){
            f = Memo[i-1] + Memo[i-2];

            Memo[i] = f;
        }
    }

    return f;
}

int main(){
    int n;

    printf("Digite um numero (0 ate 46): ");
    scanf("%d", &n);

    if(n >= 47){
        printf("Numero maior que 46 nao e permitido");
        return 1;
    }

    else{
        printf("\nResultado: %d", fib(n));
        return 0;
    }
}