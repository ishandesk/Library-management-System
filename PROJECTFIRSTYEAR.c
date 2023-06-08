//C program for E-Library Management System

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
 
 //Creating a structure for Library

 struct Library{
    char user_name[50];
    char Book_name[50];
    char author[50];
    int pages;
    float price;
 };
 
   
//driver code

 int main() {
//displaying current date and time during execution of library
    time_t tm;
    time(&tm);
    printf("\nCurrent Date and Time  = %s\n", ctime(&tm));


    //creating an array
       struct Library Lib[300];
          char au_name[40],bk_name[40],re_name[40];
    // keeping a track
    //of number of books avialble in library
       int i,j,days,rupee,multi,keepcount,dd,mm,yyyy,count=0,xx,yy,zzzz,input,x=0,y=0;
       int a1;
       long long pin;
       char temp,extra,pwd[30],ch,pass[30];      
         i=j=keepcount=0;
  
//running the loop

    while(j!=11){
         printf("\n\n********######"
               " LIBRARY MANAGEMENT SYSTEM IN C "
               "#####********\n");
        printf("\n1.User Registration\n2. Add book infor"
               "mation\n3. Display "
               "book information\n");
        printf("4. List all books of given author\n");
        printf("5. List the title of the specified book\n");
        printf("6.List the count of books in Library\n");
        printf("7.List the date of the book issued\n");
        printf("8.List the fine of the book borrowed\n");
        printf("9.Renewal of a particular book\n");
        printf("10.Reissue of a particular book\n");
        printf("11.Logout from system\n");
        printf("12.Exit\n");
    //Enter the book details
    printf("\nEnter one of the above option:");
    scanf("%d",&j);

//proceesing the input
    switch(j){

        //Admin user registration
        case 1:
        printf("Enter your name = ");
        scanf("%c",&temp);
        fgets(Lib[i].user_name,300,stdin);
        printf("Your name is %s\n",Lib[i].user_name);
        printf("NOTE:Your password should be in 8 characters\n");
        printf("\nEnter password: ");
        while((ch= getch())!=13){
          pwd[x]=ch;
          x++;
          printf("*");
        }
        pwd[x]='\0';
        printf("\nYour password is %s",pwd);
           printf("\n\n\n\n\n");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t        =                   TO                      =");
    printf("\n\t\t\t        =                 LIBRARY                   =");
    printf("\n\t\t\t        =               MANAGEMENT                  =");
    printf("\n\t\t\t        =                 SYSTEM                    =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");

        break;


        //Add Book
          case 2:
        //Books categories to be added
                           printf("\nFollowing are the categories:\n");
            printf("1.Historical fiction\n");
            printf("2.Drama\n");
            printf("3.Fairy tales, fables, and folk tales\n");
            printf("4.Adventure stories\n");
            printf("5.Fantasy\n");
            printf("6.Horror\n");
            printf("7.Science Fiction\n");
            printf("8.Romance\n");
            printf("9.Humour and satire\n");
            printf("10.Autobiography and Biography\n");
            printf("11.Exit\n");
          printf("\nDetermine the category in which the following book is to be added: ");
          scanf("%d",&a1);

         if(a1==1){
            printf("\nYou have selected Historical Fiction category");
          printf("\nEnter the book name = ");
            scanf("%c",&temp);
            fgets(Lib[i].Book_name,300,stdin);
               printf("\nEnter the author name = ");
                  scanf("%s",Lib[i].author);
          printf("\nEnter the number of pages in the book = ");
            scanf("%d",&Lib[i].pages);
          printf("\nEnter price = ");
             scanf("%f",&Lib[i].price);
               keepcount++;
         }
        else if(a1==2){
          printf("\nYou have selected Drama category");
         printf("\nEnter the book name = ");
            scanf("%c",&temp);
            fgets(Lib[i].Book_name,300,stdin);
               printf("\nEnter the author name = ");
                  scanf("%s",Lib[i].author);
          printf("\nEnter the number of pages in the book = ");
            scanf("%d",&Lib[i].pages);
          printf("\nEnter price = ");
             scanf("%f",&Lib[i].price);
               keepcount++;
        }
            
           else if(a1==3){     
          printf("\nYou have selected Fairy Tales,fables and folktales category");
          printf("\nEnter the book name = ");
            scanf("%c",&temp);
            fgets(Lib[i].Book_name,300,stdin);
               printf("\nEnter the author name = ");
                  scanf("%s",Lib[i].author);
          printf("\nEnter the number of pages in the book = ");
            scanf("%d",&Lib[i].pages);
          printf("\nEnter price = ");
             scanf("%f",&Lib[i].price);
               keepcount++;
           }
    

           else if(a1==4){
            printf("\nYou have selected Adventure stories category");
           printf("\nEnter the book name = ");
            scanf("%c",&temp);
            fgets(Lib[i].Book_name,300,stdin);
               printf("\nEnter the author name = ");
                  scanf("%s",Lib[i].author);
          printf("\nEnter the number of pages in the book = ");
            scanf("%d",&Lib[i].pages);
          printf("\nEnter price = \n");
             scanf("%f",&Lib[i].price);
               keepcount++;
           }
               
           else if(a1==5){
           printf("\nYou have selected Fantasy category");
           printf("\nEnter the book name = ");
            scanf("%c",&temp);
            fgets(Lib[i].Book_name,300,stdin);
               printf("\nEnter the author name = ");
                  scanf("%s",Lib[i].author);
          printf("\nEnter the number of pages in the book = ");
            scanf("%d",&Lib[i].pages);
          printf("\nEnter price = ");
             scanf("%f",&Lib[i].price);
               keepcount++;
           }
            
          else if(a1==6){
            printf("\nYou have selected Horror category");
            printf("\nEnter the book name = ");
            scanf("%c",&temp);
            fgets(Lib[i].Book_name,300,stdin);
               printf("\nEnter the author name = ");
                  scanf("%s",Lib[i].author);
          printf("\nEnter the number of pages in the book = ");
            scanf("%d",&Lib[i].pages);
          printf("\nEnter price = ");
             scanf("%f",&Lib[i].price);
               keepcount++;
          }
            
            else if(a1==7){
            printf("\nYou have selected Science Fiction category");
            printf("\nEnter the book name = ");
            scanf("%c",&temp);
            fgets(Lib[i].Book_name,300,stdin);
               printf("\nEnter the author name = ");
                  scanf("%s",Lib[i].author);
          printf("\nEnter the number of pages in the book = ");
            scanf("%d",&Lib[i].pages);
          printf("\nEnter price = ");
             scanf("%f",&Lib[i].price);
               keepcount++;
            }
            
             else if(a1==8){
             printf("\nYou have selected Romance category");
             printf("\nEnter the book name = ");
            scanf("%c",&temp);
            fgets(Lib[i].Book_name,300,stdin);
               printf("\nEnter the author name = ");
                  scanf("%s",Lib[i].author);
          printf("\nEnter the number of pages in the book = ");
            scanf("%d",&Lib[i].pages);
          printf("\nEnter price = ");
             scanf("%f",&Lib[i].price);
               keepcount++;
             }
            
             else if(a1==9){
               printf("\nYou have selected Humour and sattire category");
               printf("\nEnter the book name = ");
            scanf("%c",&temp);
            fgets(Lib[i].Book_name,300,stdin);
               printf("\nEnter the author name = ");
                  scanf("%s",Lib[i].author);
          printf("\nEnter the number of pages in the book = ");
            scanf("%d",&Lib[i].pages);
          printf("\nEnter price = ");
             scanf("%f",&Lib[i].price);
               keepcount++;
             }
            
              else if(a1==10){
               printf("\nYou have selected Autobiography and Biography category");
               printf("\nEnter the book name = ");
            scanf("%c",&temp);
            fgets(Lib[i].Book_name,300,stdin);
               printf("\nEnter the author name = ");
                  scanf("%s",Lib[i].author);
          printf("\nEnter the number of pages in the book = ");
            scanf("%d",&Lib[i].pages);
          printf("\nEnter price = ");
             scanf("%f",&Lib[i].price);
               keepcount++;
              }
            

       //Print the books information
       case 3:
       //if no books registerd
       if(keepcount==0){
         printf("\nThere are no books stored!!\n");
       }
       else{
       printf("you have entered the following information\n");
       for(i=0;i<keepcount;i++){
        printf("\t book name = %s",Lib[i].Book_name);
        printf("\t author name = %s",Lib[i].author);
        printf("\t pages = %d",Lib[i].pages);
        printf("\t price = %f",Lib[i].price);
       }
       }
       break;

       //Take author as input
       case 4:
       printf("Enter the author name: ");
       scanf("%s",au_name);
       for(i=0;i<keepcount;i++){
        if(strcmp(au_name,Lib[i].author)==0)
            printf("%s %s %d %f",Lib[i].Book_name,Lib[i].author,Lib[i].pages,Lib[i].price);
        }
       
       break;
      
      //Take book as specified title
       case 5:
       printf ("Enter book name : ");
         scanf ("%s",bk_name);
          for (i=0; i<keepcount; i++)
           {
               if (strcmp(bk_name, Lib[i].Book_name) == 0)
printf ("%s \t %s \t %d \t %f",Lib[i].Book_name,Lib[i].author,Lib[i].pages,Lib[i].price);
}
break;
       

       //Total no of books
       case 6:
       printf("No of books in the library:%d\n",keepcount);
    
      //Date issued book to the user
      case 7:
      printf("Enter the date of book issued to you: ");
      scanf("%d/%d/%d",&dd,&mm,&yyyy);
      printf("The book was issued to you on %d/%d/%d",dd,mm,yyyy);
      printf("\nNOTE:The max you can borrow book is till 5 days\n");
       break;


    //showing fine to the user
    case 8:
    rupee=10;
    printf("The fine of per extra day is %d rupees\n",rupee);
    printf("Enter the number of extra days book has been borrowed: ");
    scanf("%d",&days);
    multi=days*10;
    printf("\n The fine of the book %s of %s  is %d rupees",Lib[i].Book_name,Lib[i].user_name,multi);
    
    break;


//Case to renew your book
    case 9:
    printf("\nEnter the date till you want to renew the book:");
    scanf("%d/%d/%d",&xx,&yy,&zzzz);
    printf("You want to renew the book %s which was issued on %d/%d/%d after paying the fine of %d rupees till date extended to %d/%d/%d",Lib[i].Book_name,dd,mm,yyyy,multi,xx,yy,zzzz);
    break;

    //Reissuing of the book
    case 10:
    printf("\nEnter the title of the book which is to be reissued: ");
    scanf("%c",&extra);
    fgets(re_name,300,stdin);
           printf("The book to be reissued again is %s",re_name);
        break;
        
    
    //Logging out from the system
    case 11:
    printf("\nEnter your password: ");
    while((ch= getch())!=13){
      pass[y]=ch;
      y++;
      printf("*");
    }
    pass[y]='\0';
   if(strcmp(pwd,pass)==0){
    printf(" \n %s you have successfully logged out from the system",Lib[i].user_name);
                        printf("\n*******!!!!!THE END!!!!!*******\n");
           }
    else{
        printf("\nTry again!!!\n");
        }
     break;

 }
 }
 return 0;
 }