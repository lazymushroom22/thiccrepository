#include<stdio.h>

void main(){

// PUNCTUL 1
    // Declarari.
    float A[100][100], S;
    int n, i, j, k, lin;
    int aux;

    // Citirea marimii matricii.
    printf("Marimea matricii=");
    scanf("%d", &n);

    // Citirea matricii.
    for(i=1; i<=n; i++)
        for(j=1; j<=n+1; j++){
            printf("A[%d][%d]=", i, j);
            scanf("%f", &A[i][j]);
    }

// PUNCTUL 2
    //Se aplica formula dreptungiului pana cand A este superior triunghiulara.
    for(k=1; k<=n-1; k++){
        if(A[k][k]!=0){

            for(i=k+1; i<=n; i++){
                A[i][k]=A[i][k]/A[k][k];
                for(j=k+1; j<=n+1; j++){
                    A[i][j]=A[i][j]-A[i][k]*A[k][j];
                }
            }
    //Daca A[k][k]=0 atunci se schimba 2 linii a.i. A[k][k]!=0.
        }else{
            lin=k;
            do{
                lin=lin+1;
            }while(A[lin][k]!=0 || lin>n);
    //Daca nu s-a mai gasit nici un element diferit de 0, programul se opreste.
            if(lin>n){
                printf("The system does not have unique solution.\n");
                return 0;
            }
    //Se schimba prima linie gasita cu linia lui A[k][k]=0.
            for(j=k; j<=n+1; j++){
                aux=A[k][j];
                A[k][j]=A[lin][j];
                A[lin][j]=aux;
            }
        }
    }

//PUNCTUL 3
    //Daca A[n][n]=0, atunci sistemul este ori incompatibil, ori nedeterminat.
    if(A[n][n]==0){
        printf("The system does not have unique solution.\n");
        return 0;
    }

//PUNCTUL 4
    //Se calculeaza Xn (ultimul X).
    A[n][n+1]=A[n][n+1]/A[n][n];

//PUNCTUL 5
    //In functie de ultimul X, se calculeaza ceilalti X in ordine inversa.
    for(i=n-1; i>=1; i--){
        S=0;
        for(j=i+1; j<=n; j++)
            S=S + A[i][j]*A[j][n+1];
        A[i][n+1]=(A[i][n+1]-S)/A[i][i];
    }
    //Se afisaza solutia gasita - X1,.., Xn, care sunt acum pe coloana n+1.
    for(i=1; i<=n; i++)
        // Se afisaza doar cu 2 zecimale, pt mai multe se modifica in %0.2f.
        printf("\nx%d=%0.2f", i, A[i][n+1]);
}

