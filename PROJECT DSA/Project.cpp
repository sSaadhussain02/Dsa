#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
struct node
{
    int room_no;
    char name[50];
    long long int cell_no;
    long long int ad_no;
    int age;
    struct node* prev, * next;

};
int pick;
int price;


 class Hotel
{
private:
    int counter, num, b;
    int from, viproom, froom;
    struct node* r, * start;
    int choice, room, day;
    int rup;
    int bill;
    int allot;
    int y;

public:
    Hotel()
    {
        counter = 100;
        start = NULL;
        from = 20;
        viproom = 30;
        froom = 50;
        rup = bill = 0;
        allot = day = b = room = num = choice = 0;
        y = 0;

    }
    void family_room()
    {
        system("cls");
        cout<<"================================================================================\n";
		cout << "\n\t***WELCOME TO 1st floor for family Rooms...!***\t" << endl;
		cout << "\n\tRent of the room is 1500 Rs/day\t" << endl;
		cout<<"================================================================================\n";

        cout << "\n\n\thow many rooms do you want for rent\t";
        cin >> room;
        cout << "\n\thow many days do you want to stay.\t";
        cin >> day;
        if (room <= 20 && from >= room)
        {
            cout << "\n\tFamily Rooms ranges from 1 - 20\t" << endl;
	
cout<<"\n press an key to continue	:";
getch();
        }
        else {
            cout << "\n\tSORRY ROOM ARE CURRENTLY UNAVAILABLE" << endl;
            cout << "\tAvailable Family Rooms are\t" << from << endl;
		
cout<<"\n press an key to continue	:";
getch();
            family_room();
        }
		
        if (room <= 20) {
        a:
			system("cls");           
		    day = day * 1500;
            bill = day * room;
            cout<<"================================================================================\n";
            cout << "\n\tyour bill is\t" << bill << endl;
            cout<<"================================================================================\n";
            cout << "\n\tROOM CAN BE ALLOTED" << endl;
           
			cout << "\n\n\tpress 1 for booking" << endl;
           
            cout << "\nENTER THE CHOICE! :\t";
            cin >> allot;
            	cout << "\n\tROOM NUMBER CAN BE ALLOTED FROM 1-20\t"  << endl;
            	
cout<<"\n press an key to continue	:";
getch();
            if (allot == 1)
            {
                while (room != 0)
                {
                    y = first_allot();
                    if (y == 1) {
                        from--;
                        counter--;
                        room--;
                    }
                }

                cout << "available Family Rooms are\t" << from << endl;
                cout << "Total available Rooms are\t" << counter << endl;
                working();

            }

            else
            {
                cout << "\n\tinvalid option" << endl;
                goto a;
            }
 }
        else
        {
            cout << "\n\tFAMILY ROOMS AVALIABLE ARE -" << from << endl;
        }



    }



    void vip_room()
    {
        system("cls");
        cout<<"================================================================================\n";
		cout << "\n\t***WELCOME TO 2nd floor for VIP Rooms...!***" << endl;
        cout << "\n\tRent Of The Room Is 3000 Rs / day\t" << endl;
		cout<<"================================================================================\n";
        cout << "\n\n\thow many rooms do you want for rent\t";
        cin >> room;

        cout << "\n\tHow many days do you want to stay...\t";
        cin >> day;
        if (room <= 30 && viproom >= room)
        {
            cout << "\n\tVip Rooms ranges  from  21 - 50\t" << endl;
			
cout<<"\n press an key to continue	:";
getch();
        }
        else {
            cout << "\n\tSORRY ROOM ARE CURRENTLY UNAVAILABLE" << endl;
            cout << "\tAvailable VIP Rooms are\t" << viproom << endl;
		
cout<<"\n press an key to continue	:";
getch();
            vip_room();
        }

        if (room <= 30)
        {
        c:
            system("cls");
			day = day * 3000;
            bill = day * room;
            
            cout<<"\n================================================================================\n";
            cout << "\n\tyour bill is\t" << bill << endl;
            cout<<"================================================================================\n";
            cout << "\n\tROOM CAN BE ALLOTED" << endl;
            cout << "\n\n\tpress 1 for booking" << endl;
    
            cout << "\nENTER THE CHOICE! :\t";
            cin >> allot;
            	cout << "\n\tROOM NUMBER CAN BE ALLOTED FROM 20-50\t" << endl;
            
cout<<"\n press an key to continue	:";
getch();
            if (allot == 1)
            {
                while (room != 0)
                {
                    y = first_allot();
                    if (y == 1) {
                        viproom--;
                        counter--;
                        room--;
                    }
                }
                cout << "available vip Rooms are\t" << viproom << endl;
                cout << "Total available Rooms are\t" << counter << endl;
                working();
            }
            else
            {
                cout << "\n\tinvalid option" << endl;
                goto c;
            }
        }
        else
        {
            cout << "\n\tVIP ROOMS AVALIABLE ARE -" << viproom << endl;
        }

    }
    void other_room()
    {
        system("cls");
		cout<<"================================================================================\n";
		cout << "\n\t*********WELCOME!********\t" << endl;
        cout<<"===================================================================================\n";
        cout << "\n\tRent of the room is 1000 Rs/day\t";

        cout << "\n\n\thow many rooms do you want for rent\t";
        cin >> room;
        cout << "\n\thow many days do you want to stay\t";
        cin >> day;
        if (room <= 50 && froom >= room)
        {
            cout << "\n\t Room ranges from 51 - 80\t" << endl;
		
cout<<"\n press an key to continue	:";
getch();
        }
        else {
            cout << "\n\tSORRY ROOM ARE CURRENTLY UNAVAILABLE" << endl;
            cout << "\tAvailable Rooms are\t" << froom << endl;
		
cout<<"\n press an key to continue	:";
getch();
            other_room();
        }
        cout << "\n\ttotal other rooms are (50)\t" << endl;
       
cout<<"\n press an key to continue	:";
getch();
        if (room <= 50)
        {
        d:
            system("cls");
			day = day * 1000;
            bill = day * room;
            cout<<"================================================================================\n";
            cout << "\n\tyour bill is\t" << bill << endl;
            cout<<"================================================================================\n";
            cout << "\n\tROOM CAN BE Alloted" << endl;
            system("cls");
            cout << "\n\tpress 1 for booking" << endl;
           cout << "\nENTER YOUR CHOICE!: \t";
            
			cout << "\n\tROOM NUMBER CAN BE ALLOTED FROM 50-100\t" << endl;
			cin >> allot;
            if (allot == 1)
            {
                while (room != 0)
                {
                    y = first_allot();
                    if (y == 1) {
                        froom--;
                        counter--;
                        room--;
                    }
                }
                cout << "available other Rooms are\t" << froom << endl;
                cout << "Total available Rooms are\t" << counter << endl;
                working();
            }

    
            else
            {
                cout << "\n\t invalid option" << endl;
                goto d;
            }
        }
        else
        {
            cout << "\n\t OTHER ROOMS AVAILABLE ARE - " << froom << endl;
        }

    }

    
    int first_allot()
    {
       system("cls");
	    y = 0;
        bool flag = false;
        struct node* x = start;

	
        while (x != NULL) {
            cout << "\n\n\tROOM BOOKED";
            cout << "\nROOM NO: " << x->room_no << endl;
            x = x->next;
        }
     
        cout << "\n\tEnter the Room number\t";
        cin >> num;

        struct node* newer = new node;
        newer->room_no = num;
        cout << "\n\tEnter name\t";
        cin >> newer->name;
        cout << "\n\tEnter age\t";
        cin >> newer->age;
        cout << "\n\tEnter cnic number\t";
        cin >> newer->ad_no;
        cout << "\n\tEnter contact no\t";
        cin >> newer->cell_no;

        newer->prev = NULL;
        newer->next = start;
        start = newer;
        flag = true;
        if (start != NULL)
        {
            start->prev = newer;
        }

        if (flag != false)
        {
            cout << "\n\tRoom booked successfully!" << endl;
            display();
            return 0;
            
     	
			
        }
        else
        {
            cout << "\n\tRoom is not allotted!" << endl;
            return 0;
        }
    }
   
    void del()
    {
        system("cls");
		cout << "\n\tenter the Room# which you want to deallocate!\t";
        cin >> num;
        if (num > 100)
        {
            cout << "\n\t enter  valid room no !\t";
           
cout<<"\n press an key to continue	:";
getch();
            void del();
        }

        if (start == NULL)
        {
            cout<<"\n\n\n\n";
			cout << "\n\tHotel is empty!" << endl;
            cout << "\n\tpress 1 for main manu\n" << endl;
            cout << "\tpress 2 for exit\n" << endl;
            cout << "\nENTER YOUR CHOICE\t";
            cin >> choice;
            if (choice == 1)
            {
                working();
            }
            else
            {
                exit(0);
            }
        }
        struct node* temp = start;
        struct node* p, * q;
        if (temp->room_no == num && temp->next != NULL)
        {
            p = temp;
            start = temp->next;
            start->prev = NULL;
            free(p);
            cout << "\tROOM DEALLOCATED" << endl;
            getch();
            working();
        }
        else if (temp->room_no == num && temp->next == NULL)
        {
            free(temp);
            cout << "\tROOM DEALLOCATED" << endl;
           
cout<<"\n press an key to continue	:";
getch();
            working();
        }
        else
        {
            temp = temp->next;

            while (temp != NULL)
            {
                if (temp->room_no == num)
                {


                    if (temp->next == NULL)
                    {
                        q = temp;
                        p = temp->prev;
                        p->next = NULL;
                        free(q);
                        cout << "\tROOM DEALLOCATED" << endl;
                       
cout<<"\n press an key to continue	:";
getch();
                        working();
                    }
                    else
                    {
                        p = temp->prev;
                        q = temp->next;
                        p->next = q;
                        q->prev = p;
                        free(temp);
                        cout << "\tROOM DEALLOCATED" << endl;
                        
cout<<"\n press an key to continue	:";
getch();
                        working();
                    }


                }
                temp = temp->next;
            }

        }
        cout << "\tROOM NOT BOOKED YET" << endl;
        
cout<<"\n press an key to continue	:";
getch();
    }
    void display()
    {
        if (start == NULL)
        {
            cout<<"\n\n\n\n";
			cout << "\n\tHotel is empty!" << endl;
            cout << "\n\tpress 1 for main manu\n" << endl;
            cout << "\tpress 2 for exit\n" << endl;
            cout << "\nENTER YOUR CHOICE\t";
            cin >> choice;
            if (choice == 1)
            {
                
cout<<"\n press an key to continue	:";
getch();
				working();
            }
            else
            {
                
cout<<"\n press an key to continue	:";
getch();
				exit(0);
            }
        }
        else
        {
            struct node* temp = start;

cout<<"\n press an key to continue	:";
getch();
            while (temp != NULL) {
                cout << "\n\tBooked room with details\t\n";
                if (temp->room_no <= 20)
                    {
					 cout << "\t****FAMILY ROOMS***" << endl;
					cout << "\n\n\nFLOOR NO:" << " 1st floor" << endl;
                }
                else if(temp->room_no > 20 && temp->room_no <= 50)
                {
                    cout << "\t****VIP ROOMS***" << endl;
                    cout << "\nFLOOR NO:" << " 2nd floor" << endl;
                }
               else if(temp->room_no > 50 && temp->room_no <= 70)
                     {
					 cout << "\t****BASICS 1***" << endl;
					cout << "\nFLOOR NO:" << " 3rd floor" << endl;
                }else if(temp->room_no > 70 && temp->room_no <= 85)
                     {
					 cout << "\t****BASICS 2***" << endl;
					cout << "\nFLOOR NO:" << " 4th floor" << endl;
                }else if(temp->room_no > 85 && temp->room_no <= 100)
                 {
					     cout << "\t****BASICS 3***" << endl;
					cout << "\nFLOOR NO:" << " 5th floor" << endl;
				}
				cout<<"\n============================================================================\n";
				cout << setw(5) << "ROOM NUMBER" << setw(15) << "NAME" << setw(20) << "MOBILE NUMBER" << setw(10) << endl;
				cout<<"==============================================================================\n";
				cout<<	setw(5)<<temp->room_no	<<setw(20)<<temp->name <<setw(20)	<<temp->cell_no	<<endl;
               
	
                temp = temp->next;
				
cout<<"\n press an key to continue	:";
getch();
            }
        }
        working();

    }
    
   
    
    void visit_Hotel()
    {
    START:
    	system("cls");
        cout<<"================================================================================\n";
		cout << "\t*****	WELCOME TO HOTEL 	*****\n\t" << endl;
        cout << "\t1st floor for family Rooms...!\n" << endl;
        cout << "\t2nd floor for VIP Rooms...!\n" << endl;
        cout << "\tFor others 3rd,4th and 5th floors are available...!\n\t" << endl<<endl<<endl;
        cout <<	"X========================================================================X\n\n\n";
		cout << "\t press 1 for Family room\n" << endl;
        cout << "\t press 2 for VIP room\n" << endl;
        cout << "\t press 3 for others...\n" << endl;
        cout << "\nENTER YOUR CHOISE! :\t ";
        cin >> choice;
        if (choice == 1)
        {
            family_room();


        }
        else if (choice == 2)
        {
            vip_room();

        }
        else if (choice == 3)
        {
            other_room();
        }
        else
        {
            cout << "\n\tinvalid opetion" << endl;

            visit_Hotel();
        }
    }
    
      int menuSelection()
{

        cout << " Restaraunt Menu \n";
    cout<<"===================================================================\n";
    cout << 1 << "    Hamburger "     << "--$6.00 " << endl ;
    cout << 2 << "    Hotdog "        << "--$4.50 " << endl ;
    cout << 3 << "    Peanuts"        << "--$3.75 " << endl ;
    cout << 4 << "    Popcorn "       << "--$5.50  " << endl ;
    cout << 5 << "    Soda "          << "--$2.80 " << endl ;
    cout << 6 << "    Chips "         << "--$1.00 " << endl ;
    cout << 7 << "    Water"          << "--$1.00 " << endl ;
    cout << 8 << "    End Order \n" ;
    cout << 8 << "    \n\nEnter		:" ;
    cin>>pick;
    int quantity;
    switch(pick)
    {
        case 1:
        cout<<"quantity    :";
        cin>>quantity;
        
        price =quantity*6.0;
        cout<<endl<<"price	:"<<price;
        
        
cout<<"\n press an key to continue	:";
getch();
        working();
        break;
        
        case 2:
            
        cout<<"quantity    :";
        cin>>quantity;
        
        price =quantity*4.50;
        cout<<endl<<"price	:"<<price;
        
        working();
        break;
        
        case 3:
    
        cout<<"quantity    :";
        cin>>quantity;
        
        price =quantity*4.5;
        cout<<endl<<"price	:"<<price;
        working();
        break;
        
        case 4:
        
        cout<<"quantity    :";
        cin>>quantity;
        
        price =quantity*5.5;
        cout<<endl<<"price	:"<<price;
        working();    
        break;
        
        case 5:
        
        cout<<"quantity    :";
        cin>>quantity;
        
        price =quantity*2.8;
       cout<<endl<<"price	:"<<price;
        working();
        break;
        
        case 6:
        
        cout<<"quantity    :";
        cin>>quantity;
        
        price =quantity*1.0;
        cout<<endl<<"price	:"<<price;
        working();
        break;
        
        case 7:
    
        cout<<"quantity    :";
        cin>>quantity;
        
        price =quantity*1.0;
        cout<<endl<<"price	:"<<price;
        working();
        break;
            
        case 8:
        cout<<"\ncancel order \n";
        
cout<<"\n press an key to continue	:";
getch();
        working();
        
        default:
        cout << " Sorry, please choose a valid option.";
        }
        
}


    void working()
    {
        system("cls");
        cout<<"\t================================================================================\n";
        cout << "\t\t***********	Welcome to Hotel Management system	************\n\t" ;
        cout<<"================================================================================\n";
        cout << "\n\tpress 1 to visit the Hotel hotel!\t" << endl;
        cout << "\n\tpress 2 to delete the record of the room\t" << endl;
        cout << "\n\tpress 3 to display the record of Hotel...\t" << endl;
         cout << "\n\tpress 4 to display the food menu...\t" << endl;
        cout << "\n\tpress 5 for exit...\n\t" << endl;
        cout << "\nENTER YOUR CHOICE! :\t ";
        cin >> choice;
        if (choice == 1)
        {
            visit_Hotel();
        }
        else if (choice == 2)
        {
            del();
        }
        else if (choice == 3)
        {
            display();
        }
        else if (choice == 4)
        {
               menuSelection();
        }
        
      
        else
        {
            cout<<"thankyou for visiting \n";
            
cout<<"\n press an key to continue	:";
getch();
            exit(0);


        }

    }

};
void display1()
{
	char arr[23]={'H','O','T','E','L',' ','M','A','N','A','G','E','M','E','N','T',' ','S','Y','S','T','E','M'};
	cout<<"\n\n\n\n\n\t\t\t\t";
    for (int i=0;i<10;i++)
	{
		for (int j=0; j<10000; j++)
		{
			for (int k=0; k<10000; k++)
			{

			}
		}
		cout << "*";
	}
	  cout<<" ";
	  for (int i=0;i<23;i++)
	{
		for (int j=0; j<10000; j++)
		{
			for (int k=0; k<10000; k++)
			{

			}
		}
		cout<<arr[i];
	}
   	 cout<<" ";
    for (int i=0;i<10;i++)
	{
		for (int j=0; j<10000; j++)
		{
			for (int k=0; k<10000; k++)
			{

			}
		}
		cout << "*";
	}

}
int main()
{
  
          
    system("color 0A");
	display1();
    Hotel obj;
    obj.working();

}

