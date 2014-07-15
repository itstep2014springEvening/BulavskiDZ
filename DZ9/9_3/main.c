#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vybor;
    printf("Vy Il'ya Muromec, vam nadoelo lejat' na pechi i vy otpravilis' za podvigami\n\n\n");
    system("Pause");
    system("cls");
    printf("Pod'ehali vy k kamnyu u razvilki i prochli: Nalevo poedew' sebya poteryaew', napravo poedew' konya poteryaew', pryamo poedew' nezjivoj budew'.\n");
    printf("1.Nalevo\n");
    printf("2.Napravo\n");
    printf("3.Pryamo\n");
    printf("Vaw' vybor?\n");
    scanf("%d", &vybor);
    switch(vybor)
    {
    case 1:
        system("cls");
        printf("Vy ehali v nevedamye dali, gde net lyudej, zjivotnyh, ptic, rastenij... Kak nazad vernut'sya - neizvestno! Nadolgo li vas hvatit?))%c\n", 1);
        break;
    case 2:
        system("cls");
        printf("Proehali vy pyaterik wagov da ugodili v volch'yu yamu. A vas ved' preduprezjdali%c\n", 1);
        break;
    case 3:
        system("cls");
        printf("Proehali vy nemnogo i pribyli na kladbische. Kon' uvidel chelovecheskie kosti i siganul ot straha vpered, a vperedi obryv. Vot vy i ruhnuli s obryva v uschel'e.Posle takogo vryadli kto-to vyzjival %c\n", 1);
        break;
    }

    return 0;
}
