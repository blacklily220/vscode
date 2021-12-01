#include <stdio.h>
#include <conio.h>
int main()
{
      system("cls");
      struct book
      {
            char name[15];
            int price;
            int pages;
      };
      struct book b[3];
      for (int i = 0; i <= 2; i++)
      {
            printf("Enter name,price,& no. of pages of book %d: ", i + 1);
            fflush(stdin);                               //important when taking multiple inputs;
            scanf("%s%d%d", &b[i].name, &b[i].price, &b[i].pages);
      }
      printf("\nthe details you entered are:");
      printf("\nname price pages");
      for (int j = 0; j <= 2; j++)
      {
            printf("\n %s %d %d", b[j].name, b[j].price, b[j].pages);
      }
      return 0;
}