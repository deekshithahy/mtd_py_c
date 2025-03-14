#include<stdio.h>
int main()
{
    
    int foodtype = 0, itemnumber = 0;
    puts("welcome to our restaurant The Taste");
    do
    {
    puts("What you wish to have Veg:1,Nonveg:2.You choice please");
    scanf("%d",&foodtype);
   
    
    switch(foodtype)
    {
        case 1:puts("1:Dosa 2:cc-Bath 3:Idly 4:BB-Bath.your choice please:");
        scanf("%d",&itemnumber);
        switch(itemnumber)
        {
            case 1 : puts("Get Davanagere Benne Dosa mam");
            break;
            case 2 : puts("Get cc bath mam");
            break;
            case 3 : puts("Get idly mam");
            break;
            case 4 : puts("Get bb bath mam");
            break;
            default: puts("sorry we dont serve your choice of food");
            
        }break;
        case 2:puts("1:fishfry 2:chicken biryani 3:hanumanthu palav 4:egg masala.your choice please:");
        scanf("%d",&itemnumber);
        switch(itemnumber)
        {

            case 1 : puts("Get fish fry mam");
            break;
            case 2 : puts("Get chicken biryani mam");
            break;
            case 3 : puts("Gethanumanthu pulav mam");
            break;
            case 4 : puts("Get egg masala mam");
            break;
            default: puts("sorry we dont serve your choice of food");
           
        } break;
        default:puts("This is restaurant,not garden.please order an item");
       
    } 
    puts("Do you wish to have more? yes:1,No:any number");
    scanf("%d",&itemnumber);
}
  while(itemnumber == 1);
    puts("Namaste visit again");
}