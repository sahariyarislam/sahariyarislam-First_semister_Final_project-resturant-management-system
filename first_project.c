#include <stdio.h>
#include <string.h>
#include <windows.h>
int namecheek(char name[]);
int numbercheek(char phone[]);
int usercheek(char user[]);
int cheekpassward(char passward[]);
int passwardcheek(char passward[]);
void readdata();
void showdata();
void writedata();
void readdatahis();
void writedatahis();
void readdataowner();
void writedataowner();
void website(int a);
struct cheak
{
    char name[20], phone[12], user[18], pass[18];
};
struct owner
{
    char name[20], phone[12], user[18], pass[18];
};
struct control
{
    char name[20];
    int stoke, price;
};
struct prizecount
{
    double total_prize, item_number;
};

typedef struct cheak std;
typedef struct owner own;
typedef struct control cnt;
typedef struct prizecount tp;
int n, n1;
std arr[100];
own ow[12];
cnt cn[199];
tp totalprize[199];
int cstok, dstok, kstok, pstok, bstok;
int a[50], n1, nn1;

int main()
{
    system("color 2");
    int a, ph = 0, x, p;
    char input;
    printf("\t\t\t\t\t ______________________________________\n");
    printf("\t\t\t\t\t|                                      |\n");
    printf("\t\t\t\t\t|    ***WellCome To Our Website***     |\n");
    printf("\t\t\t\t\t|______________________________________|\n");
    printf("\n\n");
    printf(" ________________________________\n");
    printf("|_*___*____*_____*____*____*_____|\n");
    printf("|1.Log in                        |\n");
    printf("|________________________________|\n");
    printf("|2.Create an acccount            |\n");
    printf("|________________________________|\n");
    printf("|3.login as owner                |\n");
    printf("|_ ___ ___ ____ ______ _____ ____|\n");
    printf("|_*___*___*____*______*_____*____|\n");
    printf("\n\nplease chose a number ===>: ");

    scanf("%d", &a);
    char user[20], passward[30], name[30], phone[12];

    switch (a)
    {
    x:
    {
    case 01:
    {
        printf("Please Enter your Username : ");

        fflush(stdin);
        gets(user);
        printf("\nPlease Enter your passward: ");
        gets(passward);
        printf("\n\n");

        readdata();
        int i, k = 0;
        for (i = 0; i < n; i++)
        {
            if (!strcmp(arr[i].user, user))
            {
                if (!strcmp(arr[i].pass, passward))
                    k = 1;
            }
        }

        if (k == 1)
        {
            goto entry;
        }
        else
        {
            printf(" Sorry sir information does not match\n");
        }

        printf("\n\nDo you want create an account sir?\nPlease enter yes or no Y/N ==>");
        scanf(" %c", &a);
        if (a == 'n' || a == 'N')
        {
            goto x;
        }
        else if (a == 'y' || a == 'Y')
        {
            goto y;
        }
        else
        {
            printf("!!You are not Human!!");
        }
    }
    break;
    }
    y:
    {
    case 02:
    {
        int qu;
    v:
    {
        printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n");
        printf("Enter Your Name: ");
        fflush(stdin);
        gets(name);
        qu = namecheek(name);
    }

        if (qu == 1)
        {
            char phone[12];
        z:
        {
            printf("Enter your phone number: ");

            scanf("%s", phone);
        }
            int nc = 0;
            nc = numbercheek(phone);
            if (nc == 1)
            {
                char user[10];
                int me = 0;
            q:
            {
                printf("Enter your Username: ");
                scanf("%s", user);

                me = usercheek(user);
            }
                if (me == 1)
                {
                i:
                {
                    printf("Enter Passward: ");
                    scanf("%s", passward);
                    printf("\n\n");
                }
                    int pa;
                    pa = cheekpassward(passward);
                    if (pa == 1)
                    {
                        readdata();
                        strcpy(arr[n].name, name);
                        strcpy(arr[n].phone, phone);
                        strcpy(arr[n].user, user);
                        strcpy(arr[n].pass, passward);
                        n++;
                        writedata();

                        printf("!!!Congratulation your accaount has been created successfully!!!\n");
                        printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n");
                        int r = 0;
                    l:
                    {
                        printf(" ________________________________\n");
                        printf("|_*___*____*_____*____*____*_____|\n");
                        printf("|       ***Plese Log in***       |\n");
                        printf("|________________________________|\n");
                        printf("|_*___*____*_____*____*____*_____|\n");
                        printf("Please enter your username: ");
                        fflush(stdin);
                        gets(user);
                        printf("Please enter your passward: ");
                        gets(passward);
                        printf("\n\n");
                        readdata();
                        int i;
                        for (i = 0; i < n; i++)
                        {
                            if (!strcmp(arr[i].user, user))
                            {
                                r = 1;
                            }
                        }
                    }

                        int k = 0;
                        if (r == 1)
                        {
                            readdata();
                            int i;
                            for (i = 0; i < n; i++)
                            {
                                if (!strcmp(arr[i].pass, passward))
                                {
                                    k = 1;
                                }
                            }

                            if ((k == 1))
                            {
                            entry:
                                website(p);
                            }
                            else
                            {
                                printf("Sorry Wrong passward!!\t Forget passward?\nEnter yes or no Y/N: ");
                                scanf(" %c", &input);
                                if (input == 'y' || input == 'Y')
                                {
                                    printf("Enter your phone number: ");
                                    scanf("%s", phone);
                                    readdata();
                                    int i, k = 0;
                                    for (i = 0; i < n; i++)
                                    {
                                        if (!strcmp(arr[i].phone, phone))
                                        {
                                            k = 1;
                                        }
                                    }

                                    if (k == 1)
                                    {
                                        int k = 0;
                                    pagain:
                                    {
                                        printf("please nter your New Passward: ");
                                        fflush(stdin);
                                        gets(passward);
                                        readdata();

                                        int i, m;
                                        for (i = 0; i < n; i++)
                                        {
                                            if (!strcmp(arr[i].pass, passward))
                                            {
                                                k = 1;
                                                m = i;
                                            }
                                        }
                                    }
                                        if (k == 1)
                                        {
                                            printf("Sorry you can't use last passward plese chose another one\n");
                                            goto pagain;
                                        }
                                        else
                                        {
                                            int call;
                                            call = cheekpassward(passward);
                                            if (call == 1)
                                            {
                                                printf("\n\n!!!congratulation passward changed!!!\n\n");
                                                strcpy(arr[n - 1].pass, passward);
                                                writedata();

                                                goto l;
                                            }
                                            else if (call == 2)
                                            {
                                                printf("Your passward must contain at least one A,b,1,#\n\n");
                                                goto pagain;
                                            }
                                            else if (call == 3)
                                            {
                                                printf("!!!week passward!!!   plese set a Strong passward\n\n");
                                                goto pagain;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        printf("Sorrry you are not right person!!!\n\n");
                                        goto l;
                                    }
                                }
                                else if (input == 'n' || input == 'N')
                                {
                                    printf("\n");
                                    goto l;
                                }
                                else
                                {
                                    printf("You are not Human!!\n");
                                }
                            }
                        }
                        else
                        {
                            printf("wrong username!!     Forget username? Please enter yes or no Y/N: ");
                            fflush(stdin);
                            scanf("%c", &input);
                            if (input == 'y' || input == 'Y')
                            {
                                printf("Please enter your phone number: ");
                                scanf("%s", phone);

                                readdata();
                                int i, r = 0;
                                for (i = 0; i < n; i++)
                                {
                                    if (!strcmp(arr[i].phone, phone))
                                    {
                                        r = 1;
                                    }
                                }

                                if (r == 1)
                                {
                                    int r3 = 0, m;
                                again:
                                {
                                    printf("Please enter a new username: ");
                                    fflush(stdin);
                                    scanf("%s", user);
                                    readdata();
                                    int i;
                                    for (i = 0; i < n; i++)
                                    {
                                        if (!strcmp(arr[i].user, user))
                                        {
                                            r3 = 1;

                                            m = i;
                                        }
                                    }
                                }
                                    if (r3 == 1)
                                    {
                                        printf("!!! Sorry you can't use last username!!\t chose another one\n");

                                        goto again;
                                    }
                                    else
                                    {
                                        strcpy(arr[n - 1].user, user);
                                        writedata();
                                        printf("!!!username changed!!!");
                                        goto l;
                                    }
                                    printf("\n\n");

                                    goto l;
                                }
                                else
                                {
                                    printf("!!! Sorry you are not right person!!\n");
                                    goto l;
                                }
                            }
                            else if (input == 'n' || input == 'N')
                            {
                                goto l;
                            }
                            else
                            {
                                printf("You are not Human!!");
                            }
                        }
                    }

                    else if (pa == 2)
                    {
                        printf("Your passward must contain at least one A,b,1,#\n\n");
                        goto i;
                    }
                    else if (pa == 3)
                    {
                        printf("week passward!!   plese set a Strong passward\n\n");
                        goto i;
                    }
                }
                else
                {
                    goto q;
                }
            }
            else
            {
                printf("!!! sorry Worng Number!!\n\n");
                goto z;
            }
        }
        else
        {
            printf("!!! Sorry the name is Invalid !!\n");
            goto v;
        }
    }

    break;
    }
    case 03:
    loginagain:
    {
        printf(" ________________________________\n");
        printf("|_*___*____*_____*____*____*_____|\n");
        printf("|   wellcome to Login panal      |\n");
        printf("|________________________________|\n");
        printf("|_*___*____*_____*____*____*_____|\n\n");
        printf("Please enter your Username: ");

        fflush(stdin);
        gets(user);
        printf("\nPlease enter your passward: ");
        fflush(stdin);
        gets(passward);

        readdataowner();
        int u, u1 = 0;
        for (u = 0; u < nn1; u++)
        {
            if (!strcmp(ow[u].user, user) && !strcmp(ow[u].pass, passward))
            {
                u1 = 1;
                break;
            }
        }
        int x, p = 0, b = 0, k = 0, d = 0, c = 0;

        if (u1 == 1)
        {
        addagain:
            printf(" _-_^_-_^_-_^_-_^_-_^_-_^_-_^_-_^_-_^_-_^_-_^_-_^_-_^_-_^_-_^_-_-\n");
            printf("|1.Do you want to see stocks story?                              |\n");
            printf("|________________________________________________________________|\n");
            printf("|2.Do you want to update stocks?                                 |\n");
            printf("|________________________________________________________________|\n");
            printf("|3.Do you want to add  more food?                                |\n");
            printf("|________________________________________________________________|\n");
            printf("|4.Do you want to add a new owner?                               |\n");
            printf("|________________________________________________________________|\n");
            printf("|5.Do you want to exit?                                          |\n");
            printf("|-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_| \n\n");
            printf("Please chose a number===>");
            scanf("%d", &x);
            if (x == 1)
            {
                readdatahis();
                int i5;

                for (i5 = 0; i5 < n1; i5++)
                {
                    printf("%d.  %-20s  %-4d \n", (i5 + 1), cn[i5].name, cn[i5].stoke);
                }
                goto addagain;
            }
            else if (x == 2)
            {
                readdatahis();
            add_again:

                printf("Please press the food number\n==>");
                int a1, a2 = 0;
                scanf("%d", &a1);
                while (1)
                {
                    printf("**-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_**\n");
                    printf("How much food do you want to add to the stocks?\n==>");
                    scanf("%d", &a2);
                    cn[a1 - 1].stoke += a2;
                    a1 = 0;
                    a2 = 0;
                    printf("Do you want to add more food to the stocks?:y/n:\n");
                    char c1;
                    fflush(stdin);
                    scanf("%c", &c1);
                    if (c1 == 'Y' || c1 == 'y')
                    {
                        goto add_again;
                    }
                    else
                    {
                        break;
                    }
                }
                writedatahis();
                printf(" !!!congratulation!!!  Add stocks successfully\n");
                printf("**-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_**\n");
            }
            else if (x == 3)
            {
                readdatahis();
                char name[20];
                int addstoke, addprice;
                printf("**-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_**\n");
                printf("Please enter the food name==>\n");
                scanf("%s", name);
                printf("please enter the amount of food stocks==> \n");
                scanf("%d", &addstoke);
                printf("please enter the price of each food==> \n");
                scanf("%d", &addprice);
                strcpy(cn[n1].name, name);
                cn[n1].stoke = addstoke;
                cn[n1].price = addprice;
                n1++;

                writedatahis();
                printf("congratulation !!!...food added sucessfully\n");
                printf("**-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_**\n");
            }
            else if (x == 4)
            {
                printf("**-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_**\n");
                printf("Please enter the name    ==>\n");
                scanf("%s", ow[nn1].name);
                printf("Please enter phone number==>\n");
                scanf("%s", ow[nn1].phone);
                printf("Please enter Username    ==>\n");
                scanf("%s", ow[nn1].user);
                printf("Please enter password    ==>\n");
                scanf("%s", ow[nn1].pass);
                nn1++;
                writedataowner();
                printf("!!!Congratulation!!!   Added a new owner successfully.\n");
                printf("**-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_**\n");
            }
            else if (x == 5)
            {
                printf("***The system is closed***\n");
                printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
            }
        }

        else
        {
            printf("\t\t\t\tSorry you are not right person\n");
            printf("\t\t\t\t_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
            goto loginagain;
        }
    }
    }
    return 0;
}

int namecheek(char name1[])
{
    int x, a = 0, c = 0, ch = 0, h;
    for (x = 0; name1[x] != '\0'; x++)
    {
        if (name1[x] >= 'a' && name1[x] <= 'z')
        {
            a++;
        }
        else if (name1[x] >= 'A' && name1[x] <= 'Z')
        {
            c++;
        }
        else if (name1[x] == ' ')
        {
            h++;
        }
        else
        {
            ch++;
        }
    }
    if (ch == 0)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int numbercheek(char phone[])
{
    int a, x, ph = 0, o = 0;
    a = strlen(phone);
    if (a == 11)
    {
        if (phone[0] == '0')
        {
            ph++;
        }
        if (phone[1] == '1')
        {
            ph++;
        }
        if (phone[2] >= '3' && phone[2] <= '9')
        {
            ph++;
        }
        for (x = 3; phone[x] != '\0'; x++)
        {

            if (phone[x] >= '0' && phone[x] <= '9')
            {
                ph++;
            }
        }
    }
    else
    {
        return 2;
    }
    if (ph == 11)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int cheekpassward(char passward[])
{
    int a, x;
    a = strlen(passward);
    if (a >= 8)
    {
        int cc = 0, sc = 0, d = 0, ch = 0;
        for (x = 0; passward[x] != '\0'; x++)
        {
            if ((passward[x] >= 'A') && (passward[x] <= 'Z'))
            {
                cc++;
            }
            else if ((passward[x] >= 'a') && (passward[x] <= 'z'))
            {
                sc++;
            }
            else if ((passward[x] >= '0') && (passward[x] <= '9'))
            {
                d++;
            }
            else
            {
                ch++;
            }
        }
        if (sc > 0 && cc > 0 && d > 0 && ch > 0)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    else
    {
        return 3;
    }
}

int usercheek(char user[])
{

    if (user[0] >= '0' && user[0] <= '9')
    {

        printf("!!username can't start with number!!\n\n");
        return 2;
    }
    int x, ch = 0;
    for (x = 0; x < strlen(user); x++)
    {
        if ((user[x] >= 'A' && user[x] <= 'Z') || (user[x] >= 'a' && user[x] <= 'z') || (user[x] >= '0' && user[x] <= '9'))
        {
        }
        else
        {
            ch++;
        }
    }
    if (ch == 0)
    {
        return 1;
    }
    else
    {
        printf("!!username can't use space and any symble, !,@,#,$!!\n\n");
        return 2;
    }
}
void readdata()
{
    int i;
    FILE *fp;
    fp = fopen("login.txt", "r");
    if (fp == 0)
    {
        fp = fopen("login.txt", "w");
    }
    fscanf(fp, "%d", &n);
    for (i = 0; i < n; i++)
    {
        fscanf(fp, "%s%s%s%s", arr[i].name, &arr[i].phone, arr[i].user, arr[i].pass);
    }
    fclose(fp);
}
void show()
{
    int i;
    readdata();
    for (i = 0; i < n; i++)
    {
        printf("%s\n%s\n%s\n%s\n", arr[i].name,
               arr[i].phone, arr[i].user, arr[i].pass);
    }
}
void writedata()
{
    int i;
    FILE *fp;
    fp = fopen("login.txt", "w");
    fprintf(fp, "%d", n);
    for (i = 0; i < n; i++)
    {
        fprintf(fp, "\n%s\n%s\n%s\n%s\n", arr[i].name,
                arr[i].phone, arr[i].user, arr[i].pass);
    }
    fclose(fp);
}
void readdatahis()
{

    FILE *fr;
    fr = fopen("history1.txt", "r");
    if (fr == 0)
    {
        fr = fopen("history1.txt", "w");
    }

    fscanf(fr, "%d", &n1);
    int i;
    for (i = 0; i < n1; i++)
    {
        fscanf(fr, "%s%d%d", cn[i].name, &cn[i].stoke, &cn[i].price);
    }

    fclose(fr);
}
void writedatahis()
{

    FILE *fr;
    fr = fopen("history1.txt", "w");
    fprintf(fr, "%d\n", n1);
    int i;
    for (i = 0; i < n1; i++)
    {
        fprintf(fr, "%s\n%d\n%d\n", cn[i].name, cn[i].stoke, cn[i].price);
    }
    fclose(fr);
}
void readdataowner()
{
    FILE *fw;
    int i;
    fw = fopen("own.txt", "r");
    if (fw == 0)
    {
        fw = fopen("own.txt", "w");
    }
    fscanf(fw, "%d", &nn1);
    for (i = 0; i < nn1; i++)
    {
        fscanf(fw, "%s %s %s %s", ow[i].name, ow[i].phone, ow[i].user, ow[i].pass);
    }

    fclose(fw);
}
void writedataowner()
{
    FILE *fw;
    int i;
    fw = fopen("own.txt", "w");
    fprintf(fw, "%d\n", nn1);
    for (i = 0; i < nn1; i++)
    {
        fprintf(fw, "%s\n%s\n%s\n%s\n", ow[i].name, ow[i].phone, ow[i].user, ow[i].pass);
    }

    fclose(fw);
}
void website(int cse)
{
    readdatahis();
    char input;
    int soldc = 0, soldd = 0, soldk = 0;
    int soldp = 0, soldb = 0, a, cc = 0, dd = 0, pp = 0, bb = 0, kk = 0, dprize = 0, cprize = 0, pprize = 0, kprize = 0, bprize = 0;
    int sdprize = 0, scprize = 0, spprize = 0, skprize = 0, sbprize = 0, scc = 0, sdd = 0, spp = 0, skk = 0, requst = 0, sum1 = 0, sum = 0;

k:

{
    printf("\t\t\t**-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_**\n\n");
    printf("\t\t\t  |            _-_-_-** Food Menu List **_-_-_-                    | \n\n");
    printf("\t\t\t**-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_**\n\n\n");
    int i1;
    printf("_____________________________________________________________________\n");
    printf("|___sirial__________Name ___________________________price____________|\n");
    for (i1 = 0; i1 < n1; i1++)
    {
        printf("|    %d.\t          %-20s \t|            %-10d\t     |\n", (i1 + 1), cn[i1].name, cn[i1].price);
        printf("_____________________________________________________________________\n");
    }
    printf("\n");
    printf("Please chose a food number==>");
    scanf("%d", &a);
}

    while (1)
    {

        printf("\nHow Much food do you want to buy?\n please enter the number ==> ");
        scanf("%d", &pp);
        if (pp < cn[a - 1].stoke)
        {

            cn[a - 1].stoke -= pp;
            totalprize[a - 1].item_number = totalprize[a - 1].item_number + pp;
            totalprize[a - 1].total_prize = totalprize[a - 1].total_prize + (cn[a - 1].price * pp);
            pp = 0;
        }
        else
        {
            printf("we are extremly sorry sir, cause at this moment %s have number of: %d  \nplese chose another item: \n\n", cn[a - 1].name, cn[a - 1].stoke);
        }

    yn:
    {
        printf("\nsir, do you want to buy any item?\nEnter yes or no Y/N: ");
    }
        fflush(stdin);
        scanf("%c", &input);
        if (input == 'n' || input == 'N')
        {
            break;
        }
        else if (input == 'y' || input == 'Y')
        {
            goto k;
        }
        else
        {
            printf("plese say me Y/N! ");
            goto yn;
        }
    }

    writedatahis();

    printf("**-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_**\n\n");
    printf("  |            _-_-_-****Statement****_-_-_-                    | \n\n");
    printf("**-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_**\n\n\n");
    printf("\nName                               Item                 Amount\n");
    printf("__________________________________________________________________\n");
    int i4;
    for (i4 = 0; i4 < 199; i4++)
    {
        if (totalprize[i4].item_number != 0)
        {
            printf("|%-20s|           %-4.2lf x %d|              %-4.2lf|\n", cn[i4].name, totalprize[i4].item_number, cn[i4].price, totalprize[i4].total_prize);
            printf("_________________________________________________________________\n");
        }
    }

    for (i4 = 0; i4 < 199; i4++)
    {
        sum1 = sum1 + totalprize[i4].total_prize;
    }
    sum = sum1;
    double discount = 0, newp = 0;
    discount = (sum / 100.0) * 10.0;
    if (sum > 1000)
    {
        newp = sum - discount;
    }

    printf("                                               Total Amount: %d\n", sum);
    if (newp > 0)
    {
        printf("                                          After Discount: %.2lf\n", newp);
    }
}
