#include "Matrice.cpp"
#include <time.h>

int main()
{
    Matrice M(1000, 1000);
    // cout << "\n********************Matrice C=M^2********************";
    clock_t start = clock();
    Matrice C = M.pow2(10);
    clock_t end = clock();
    cout << "\nTime :" << (double)(end - start) / CLOCKS_PER_SEC << " secs" << endl;
    // Matrice N(5, 5, 1);
    // cout << "\n*********************Matrice M*********************";
    // M.Afficher();
    // cout << "\n*********************Matrice N*********************";
    // N.Afficher();
    // cout << "\n********************Matrice N+M********************";
    // Matrice R = N + M;
    // R.Afficher();
    // cout << "\n********************Matrice N-M********************";
    // Matrice S = N - M;
    // S.Afficher();
    // cout << "\n********************Matrice 2*M********************";
    // Matrice A = M * 2;
    // A.Afficher();
    // cout << "\n********************Matrice B=M********************";
    // Matrice B = M;
    // B.Afficher();
    //****************************
    // C.Afficher();
    //  cout << "\n********************Matrice D=M********************";
    //  Matrice D = M;
    //  D.Afficher();
}