#include <stdio.h>

int main()
{
    int x=0;
    do
    {
        printf("                                              Arbol Genealogico\n");
        printf("Solo elige una opcion: \n");
        printf("1.- Tatarabuelos paternos \n");
        printf("2.- Tatarabuelos maternos \n");
        printf("3.- Abuelos Paternos \n");
        printf("4.- Abuelos maternos \n");
        printf("5.- Tios paternos \n");
        printf("6.- Padre\n");
        printf("7.- Tios maternos \n");
        printf("8.- Madre \n");
        printf("9.- yo \n");
        printf("10.- Sobrinitos \n");
        printf("11.- Salir \n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
                printf("\n\n");
                printf("Agapito Aleman y Martha Arellano");
                printf("Agapito Cazares y Petra Gil");
                printf("\n\n");
                break;
            case 2:
                printf("\n\n");
                printf(" Procuro Ruiz y Rosa Aguilar");
                printf(" Rosendo vera y Teresa Nova");
                printf("\n\n");
                break;
            case 3:
                printf("\n\n");
                printf("Roberto Aleman Arellano y Petra Cazares Gil");
                printf("\n\n");
                break;
            case 4:
                printf("\n\n");
                printf("Teodulo Ruiz Aguilar y Juana Vera Nova");
                printf("\n\n");
                break;
            case 5:
                printf("\n\n");
                printf("Maximino Aleman Cazares");
                printf("\n\n");
                break;
            case 6:
                printf("\n\n");
                printf("Martin Aleman Cazares");
                printf("\n\n");
                break;
            case 7:
                printf("\n\n");
                printf("Alfredo Ruiz Vera");
                printf("\n\n");
                break;
            case 8:
                printf("\n\n");
                printf("Cecilia Ruiz Vera");
                printf("\n\n");
                break;
            case 9:
                printf("\n\n");
                printf("Luis Daniel Aleman Ruiz");
                printf("\n\n");
                break;
            case 10:
                printf("\n\n");
                printf("Madeleine Naomi Frias Aleman");
                printf("\n\n");
                break;
             case 11:
            printf("Salir \n");
            break;   
                default:
                printf("Error \n");
                printf("\n\n");
        }
        
    }while(x<=6&&x>0);
    return 0;
}
