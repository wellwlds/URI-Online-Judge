int main()
{
   int inicio,i,primo,cont,j;
   scanf("%i",&inicio);
   for (i=1;i<=inicio;i++)
   {
      scanf("%i",&primo);
      cont = 0;
      for (j=1;j<=primo;j++)
      {
         if (primo%j==0)
         {
            cont = cont +1;
            if (cont>2)
            {
               break;
            }
         }
      }
      if (cont==2)
      {
         printf("Prime\n");
      }
      if (cont!=2)
      {
         printf("Not Prime\n");
      }
   }
}