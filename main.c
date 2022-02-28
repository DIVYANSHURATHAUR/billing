#include<stdio.h>
static float amt1,amt2,r,s;
static int list(int,int);
static void bill(int,int);
void main()
{
    int menu ,opt,qty,k=1,i,j;

printf("WELCOME TO RESTAURENT\n");
printf("\n*************************\n");
printf("press 1 for menu");
scanf("%d",&menu);
system("color E4");
if(menu==1)
{
    printf("\n________________________________________________________\n");
    printf("_________breakfast__________\n\n");
printf("item_code        items           price(Rs.)\n");
printf("1               dosa              55\n");
printf("2              burger            35\n");
printf("3              pasta             40\n");
printf("4              momos             20/plate\n");
printf("5              sandwich            30\n");
printf("_____________beverages___________\n\n");
printf("iteam_code      items            price(Rs.)\n");
printf("6              tea                15\n");
printf("7             coffee             20\n");
printf("8             juice              30\n");
printf("\n_______________________________________________________________\n");
}

for(i=1;i<=8;i++){
        if(j!=0){
printf("enter item code");
scanf("%d",&opt);
printf("enter quantity");
scanf("%d",&qty);
list(opt,qty);
    amt1+=r,amt2+=s;
scanf("%d",&j);
}}
if(j==0){
    bill(r,s);
}}
 int list(int opt, int qty)
{
    switch(opt)
    {
        case 1:
        r=55*qty;
        printf("%d dosa ==%0.2f rupees\n",qty,r);
        printf("\n____________________\n");
        break;
        case 2:
        r=35*qty;
        printf("%d burger ==%0.2f rupees\n",qty,r);
        printf("\n____________________\n");
        break;
        case 3:
        r=40*qty;
        printf("%d pasta ==%0.2f rupees\n",qty,r);
        printf("\n____________________\n");
        break;
        case 4:
        r=20*qty;
        printf("%d momos ==%0.2f rupees\n",qty,r);
        printf("\n____________________\n");
        break;
        case 5:
        r=30*qty;
        printf("%d sandwich ==%0.2f rupees\n",qty,r);
        printf("\n____________________\n");
        break;
        case 6:
        s=15*qty;
        printf("%d cup tea==%0.2f rupees\n",qty,s);
        printf("\n____________________\n");

        break;
        case 7:
        s=20*qty;
        printf("%d cup coffee==%0.2f rupees\n",qty,s);
        printf("\n____________________\n");

        break;
        case 8:
        s=30*qty;
        printf("%d glass juice==%0.2f rupees\n",qty,s);
        printf("\n____________________\n");

        break;
        default:
            printf("enter valid code");
    }
    return r;
    return s;
}
void bill(int r,int s)
{
    float bill=amt1+amt2;
    if(bill>120){
        bill+=bill*0.02;}
    else {
        bill+=bill*0.005;}
    printf("\namount for breakfast====\n%0.2f\n",amt1);
    printf("\namount for beverages====\n%0.2f\n",amt2);
    printf("__________________________________\n");
printf("\nTOTAL AMOUNT TO PAY====\n%0.2f\n",bill);
printf("\n-------------------------------------------\n");
printf("**HAVE A GOOD DAY**");
system("color B5");
}



