#include <stdio.h>
#include <stdlib.h>

int main()
{

    char cinsiyet;
    int diger;

    //kulanicidan cinsiyet bilgisi alıyoruz.
    printf("Cinsiyetiniz (kadin ise \"k\" erkek  ise \"e\" harfi girin.): ");
    scanf("%c", &cinsiyet);

    /*
    Cinsiyet bilgisine gore degerlendiriyoruz.
    */
    if( cinsiyet == 'e' || cinsiyet == 'E' )
    {
        printf("\nCinsiyetinizi ERKEK olarak belirttiniz.\n\n");
        printf("Askerlik Durumunuz(yapildi ise 1, yapilmadi ise 0 giriniz):");
        scanf("%d", &diger);

        //erkek kullanici askerlik yapmis ise ise alıyoruz.
        if(diger == 1)
        {
            printf("\nTebrikler..! ise alindiniz.\n");
        }
        else
        {
            printf("\nise alinmadiniz\n");
        }
    }
    else
    {
        printf("\nCinsiyetinizi KADIN olarak belirttiniz.\n\n");
        printf("Evlilik Durumunuz(evli ise 1, evli degil ise 0 giriniz):");
        scanf("%d", &diger);

        //kadin kullanici evli degil ise ise alıyoruz.
        if(diger == 0)
        {
            printf("\nTebrikler..! ise alindiniz.\n");
        }
        else
        {
            printf("\nise alinmadiniz\n");
        }

    }

    return 0;
}
