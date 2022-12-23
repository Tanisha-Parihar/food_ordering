#include <iostream>
using namespace std;
class details
{
    char name[100];
    long mobile;
    char email[100];
    public:
    void login()
    {
      cout<<"\t\t\t\t\tLOGIN\t\t\t\t\t"<<endl;
      cout<<"\t\t\tENTER YOUR NAME\t\t\t\t\t"<<endl;
      cin>>name;
      cout<<"\n";
      cout<<"\t\t\tENTER YOUR EMAIL\t\t\t\t\t"<<endl;
      cin>>email;
      cout<<"\n";
      cout<<"\t\t\tENTER YOUR MOBILE NUMBER\t\t\t\t\t"<<endl;
      cin>>mobile;
      cout<<"\n";
      cout<<"\t\t\t\t\tWELCOME"<<"  "<<"**"<<name<<"**"<<endl;
      cout<<"\t\t\t\tYoU ArE SuccEesSfUlLY LoGgEd iN\t\t\t\t\t"<<endl;
      cout<<"\t\t\t\tWE PROVIDE SERVICES FROM 3 RESTAURANTS\t\t\t\t\t"<<endl;
      cout<<"============================================================================="<<endl;
    }
    void restaurant_food();
    void finalbill();
};
void details::restaurant_food()
{
    int choice1,choice2,choice3,choice4,price,n,done;
    int total=0;
    cout<<"-----------ENTER 101 FOR GURUKRIPA RESTAURANT---------------"<<endl;
    cout<<"-----------ENTER 202 FOR FOOD FANTASY RESTAURANT---------------"<<endl;
    cout<<"-----------ENTER 303 FOR VRINDAVAN RESTAURANT---------------"<<endl;
    cout<<"********ENTER YOUR CHOICE*********"<<endl;
    cin>>choice1;
    switch(choice1)
    {
        case 101:
        cout<<"::::::::WELCOME:::::::::"<<endl;
        cout<<"*****kindly enter the serial number of your chosen food******"<<endl;
        cout<<"::::::::THE FOOD SERVICES AVAILABLE ARE::::::::::"<<endl;
        cout<<"SERIAL NUMBER"<<"||"<<"FOOD ITEMS             "<<"|| "<<"PRICE"<<endl;
        cout<<"___________________________________________________________   "<<endl;
        cout<<"1.           "<<"||"<<"AMERICANO              "<<"|| "<<"200  "<<endl;
        cout<<"2.           "<<"||"<<"HAMBURGER              "<<"|| "<<"400  "<<endl;
        cout<<"3.           "<<"||"<<"PEPPY PANEER PIZZA     "<<"|| "<<"800  "<<endl;
        cout<<"4.           "<<"||"<<"MEXIAN GREEN WAVE PIZZA"<<"|| "<<"900  "<<endl;
        cout<<"=============================================================="<<endl;
        while(1){
        cout<<"----ENTER YOUR CHOICE OF FOOD----"<<endl;
        cin>>choice2;
        switch(choice2)
        {
        case 1:
        cout<<"AMERICANO"<<" "<<"200"<<endl;
        cout<<"Enter the quantity"<<endl;
        cin>>n;
        total=total+n*200;
        cout<<"TOTAL IS"<<"   "<<total<<endl;
        break;
        case 2:
        cout<<"HAMBURGER"<<" "<<"400"<<endl;
        cout<<"Enter th quantity"<<endl;
        cin>>n;
        total=total+n*400;
        cout<<"TOTAL IS"<<"  "<<total<<endl;
        break;
        case 3:
        cout<<"PEPPY PANEER PIZZA"<<" "<<"800"<<endl;
        cout<<"Enter the quantity"<<endl;
        cin>>n;
        total=total+n*800;
        cout<<"TOTAL IS"<<"   "<<total<<endl;
        break;
        case 4:
        cout<<"MEXIAN GREEN WAVE PIZZA"<<" "<<"900"<<endl;
        cout<<"Enter th quantity"<<endl;
        cin>>n;
        total=total+n*900;
        cout<<"TOTAL IS"<<"  "<<total<<endl;
        break;
        default:
        cout<<"!!!NOT AVAILABLE!!!"<<endl;
        }
        cout<<"---IF YOU ARE DONE CHOOSING FOOD PRESS 0 ELSE PRESS ANY OTHER KEY---"<<endl;
        cin>>done;
        if(done==0)
        {
            break;
        }
    }
    break;
    case 202:
        cout<<"::::::::WELCOME:::::::::"<<endl;
        cout<<"*****kindly enter the serial number of your chosen food******"<<endl;
        cout<<"::::::::THE FOOD SERVICES AVAILABLE ARE::::::::::"<<endl;
        cout<<"SERIAL NUMBER"<<"||"<<"FOOD ITEMS             "<<"|| "<<"PRICE    "<<endl;
        cout<<"_________________________________________________________________ "<<endl;
        cout<<"1.           "<<"||"<<"CAPPUCCINO                "<<"|| "<<"300   "<<endl;
        cout<<"2.           "<<"||"<<"CHICKEN PASTA             "<<"|| "<<"500   "<<endl;
        cout<<"3.           "<<"||"<<"SHRIMP PASTA              "<<"|| "<<"100   "<<endl;
        cout<<"4.           "<<"||"<<"PASTA CARBONARA           "<<"|| "<<"1000  "<<endl;
        cout<<"=================================================================="<<endl;
        while(1){
        cout<<"----ENTER YOUR CHOICE OF FOOD----"<<endl;
        cin>>choice3;
        switch(choice3)
        {
        case 1:
        cout<<"CAPPUCINO"<<" "<<"300"<<endl;
        cout<<"Enter the quantity"<<endl;
        cin>>n;
        total+=n*300;
        cout<<"TOTAL IS"<<"   "<<total<<endl;
        break;
        case 2:
        cout<<"CHICKEN PASTA"<<" "<<"500"<<endl;
        cout<<"Enter th quantity"<<endl;
        cin>>n;
        total+=n*500;
        cout<<"TOTAL IS"<<"  "<<total<<endl;
        break;
        case 3:
        cout<<"SHRIMP PASTA"<<" "<<"100"<<endl;
        cout<<"Enter the quantity"<<endl;
        cin>>n;
        total+=n*100;
        cout<<"TOTAL IS"<<"   "<<total<<endl;
        break;
        case 4:
        cout<<""<<"PASTA CARBONARA"<<"  "<<"1000"<<endl;
        cout<<"Enter th quantity"<<endl;
        cin>>n;
        total+=n*1000;
        cout<<"TOTAL IS"<<"  "<<total<<endl;
        break;
        default:
        cout<<"!!!NOT AVAILABLE!!!"<<endl;
        }
        cout<<"---IF YOU ARE DONE CHOOSING FOOD PRESS 0 ELSE PRESS ANY OTHER KEY---"<<endl;
        cin>>done;
        if(done==0)
        {
            break;
        }
    }
    break;
    case 303:
        cout<<"::::::::WELCOME:::::::::"<<endl;
        cout<<"*****kindly enter the serial number of your chosen food******"<<endl;
        cout<<"::::::::THE FOOD SERVICES AVAILABLE ARE::::::::::"<<endl;
        cout<<"SERIAL NUMBER"<<"||"<<"FOOD ITEMS                 "<<"|| "<<"PRICE"<<endl;
        cout<<"___________________________________________________________   "<<endl;
        cout<<"1.           "<<"||"<<"ICED EXPRESSO              "<<"|| "<<"250  "<<endl;
        cout<<"2.           "<<"||"<<"VEG NOODLES                "<<"|| "<<"300  "<<endl;
        cout<<"3.           "<<"||"<<"CHICKEN NOODLE SOUP        "<<"|| "<<"750  "<<endl;
        cout<<"4.           "<<"||"<<"KIMCHI FRIED RICE          "<<"|| "<<"900  "<<endl;
        cout<<"======================================================"<<endl;
        while(1){
        cout<<"----ENTER YOUR CHOICE OF FOOD----"<<endl;
        cin>>choice4;
        switch(choice4)
        {
        case 1:
        cout<<"ICED EXPRESSO"<<" "<<"250"<<endl;
        cout<<"Enter the quantity"<<endl;
        cin>>n;
        total+=n*250;
        cout<<"TOTAL IS"<<"   "<<total<<endl;
        break;
        case 2:
        cout<<"VEG NOODLES"<<" "<<"300"<<endl;
        cout<<"Enter th quantity"<<endl;
        cin>>n;
        total+=n*300;
        cout<<"TOTAL IS"<<"  "<<total<<endl;
        break;
        case 3:
        cout<<"CHICKEN NOODLE SOUP"<<" "<<"750"<<endl;
        cout<<"Enter the quantity"<<endl;
        cin>>n;
        total+=n*750;
        cout<<"TOTAL IS"<<"   "<<total<<endl;
        break;
        case 4:
        cout<<"KIMCHI FRIED RICE"<<" "<<"900"<<endl;
        cout<<"Enter th quantity"<<endl;
        cin>>n;
        total+=n*900;
        cout<<"TOTAL IS"<<"  "<<total<<endl;
        break;
        default:
        cout<<"!!!NOT AVAILABLE!!!"<<endl;
        }
        cout<<"---IF YOU ARE DONE CHOOSING FOOD PRESS 0 ELSE PRESS ANY OTHER KEY---"<<endl;
        cin>>done;
        if(done==0)
        {
            break;
        }
    }
    break;
    default:
    cout<<"YOU ENTERED INVALID CHOICE"<<endl;
}
}
void details::finalbill()
{
   int ch,total,ch2;
   cout<<"***********FINAL ORDER************"<<endl;
   cout<<"________________________________________"<<endl;
   cout<<"**************YOUR TOTAL BILL************"<<endl;
   cout<<"------------AMOUNT IS------------"<<" "<<total<<endl;
   cout<<"------------ CONFIRM-----------"<<endl;
   cout<<"ENTER 1 FOR YES-"<<"   "<<"ENTER 0 FOR NO AND EXIT"<<endl;
   cin>>ch;
   if(ch==1)
   {
       cout<<"*****THANK YOU FOR YOUR ORDER********"<<endl;
       cout<<":):):):):)YOUR FOOD IS ON WAY:):):):):)"<<endl;
       cout<<"*******PLEASE COME AGAIN**************"<<endl;
       cout<<"WOULD YOU LIKE TO EXIT -PRESS 0 TO DO S0"<<endl;
       cin>>ch2;
       if(ch2==0)
       {
           exit(1);
       }
   }
   else if(ch==0)
   {
       cout<<"*****OPPS!!!********"<<endl;
       cout<<"YOUR ORDER IS CANCELLED"<<endl;
       cout<<"EXITING......."<<endl;
       cout<<"=============THANK YOU VISIT AGAIN================"<<endl;
       exit(1);
   }
   else
   {
       cout<<"YOU ARE ENTERING WRONG CHOICE TRY AGAIN"<<endl;
   }
}

int main()
{
   
    while(1)
    {
    details d;
    d.login();
    d.restaurant_food();
    d.finalbill();
    }
    return 0;
}




