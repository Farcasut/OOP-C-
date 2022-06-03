#include <iostream>
#include <stdio.h>
int mywonatoi(char a[]) {
    int i = 0;
    int val = 0;
    while (a[i] != '\0' && a[i] != ' ' && a[i] != '\n') {
        
        val = val * 10;
        switch (a[i])
        {
             case '0':
            val += 0;
            break;
           case '1':
               val+=1;
               break;
           case '2':
               val += 2;
               break;
           case '3':
               val += 3;
               break;
           case '4':
               val += 4;
               break;
           case '5':
               val += 5;
               break;
           case '6':
               val += 6;
               break;
           case '7':
               val += 7;
               break;
               
           case '8':
               val += 8;
               break;
           case '9':
               val += 9;
               break;
          


        default:
            val = -1;
            break;



        }
        i++;
       
    }
   
    return val;

}


int main()
{
 
    char buffer1[128]="";
    FILE* pFile;
    pFile = fopen("myfile.txt", "r");
    if (pFile == NULL)
    {
        std::cout << "Pointer invalid";
        return 0;
    }
    int sum = 0;
   while(fgets(buffer1, 10, pFile)!=NULL)
    sum=sum+mywonatoi(buffer1);
    
   std::cout << sum;
   fclose(pFile);
   return 0;
}

