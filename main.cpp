#include <iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
int receipt(int t, int h, int rc, int cm)
{
    system("cls");
    cout<<"\n\n\t\t\tC S  S H O P P I N G   M A L L"<<endl;
    cout<<"\n\n\n\t\t\_________________________________________________________"<<endl;
    cout<<"\n\n\t\t|               Your net total is Rs."<<t<<"/=                 |"<<endl;
    cout<<"\n\n\t\t\_________________________________________________________"<<endl;
    cout<<"\n\n\nENTER THE AMOUNT YOU WANT TO PAY :Rs.";
ca:
    cin>>h;
    if(h<t) {
        cout<<"\n\t\tPLEASE PAY FULL AMOUNT";
        goto ca;
    } else if(h==t) {
        system("cls");
        cout<<" \n\n\n\t\t\t\tPAYMENT   SUCCESSFUL"<<endl;

    } else {
        rc=h-t;
        system("cls");
        cout<<" \n\n\n\t\t\t\tPAYMENT   SUCCESSFUL"<<endl;
        cout<<"\n\n\t\t\tHere is your return of Rs."<<rc<<endl;

    }
    cout<<"\n\n\t\t\t\tNOW WHAT DO YOU WANT TO DO :\n\n\t\t\t\t=>0. Mainmenu\n\t\t\t\t=>1. End the program"<<endl;
    cout<<"\t\t\t\t";
    cin>>cm;
    return cm;
}
void confirm(int price,string colour,string type)
{
    cout<<"\n\n\n\n\n\t\t The price of the "<<colour<<" "<<type<<" is Rs."<<price<<"/- "<<endl;
    cout<<"\n\n\n\n\t\t\tDO YOU WANT TO CONFIRM THE ITEM :"<<endl;
    cout<<"\t\t\t => 1. YES"<<endl;
    cout<<"\t\t\t => 0. No"<<endl;
    cout<<"\t\t\t => ";
}
int main()
{
    int select1,page1=1,n=0,Total=0,select,cash=0,rcash,finalc;
    char cname[20];
    char cid[20];
    char cpnum[20];
    system("Color 70");
    system("title Shopping Mall System");
    system("mode con: cols=88 lines=30");
    char x=219;
    int input;
    string text1;
    text1="\t\t\t\t    W E L C O M E       \n\n\t\t\t\t\t T O \n\n\t\t\t    C S     S H O P P I N G     M A L L\n\n\n\n\t\tP R E S S    E N T E R    T O   C O N T I N U E.........!";
    cout<<"\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\tLOADING\n"<<endl;
    cout<<"\t\t";
    for(int i=0; i<55; i++) {
        cout<<x;
        Sleep(30);
    }
    system("cls");
    cout<<"\n\n\n\n\n\n\n";
    for(int i=0; i<text1.length(); i++) {
        cout<<text1.at(i);
        Sleep(40);
    }
    input=getch();
no:
    system("cls");
    cout<<"\n\n\n\n\n\t\t\tCHOOSE THE PORTAL YOU WANT TO ENTER : \n\n\n\t\t>> 1. SELLER PORTAL\t\t\t>> 2. CUSTOMER PORTAL"<<endl;
    cout<<"\n\n\t\t\t\t  >> 0. EXIT THE PROGRAM";
    cout<<"\n\t\t";
k:
    cin>>select1;
    while(page1!=0) {
        if(select1==1) {
            system("cls");
            string name2;
            int id2,pass;
            cout<<"\n\n\n\t\t\t=> Enter Your Name : ";
            cin>>name2;
s:
            cout<<"\n\n\t\t\t=> Enter Your ID : ";
            cin>>id2;
            cout<<"\n\n\t\t\t=> Enter PASS : ";
            cin>>pass;
            if( id2!=123 && pass!=111) {
                cout<<"\n\n\t\t\t\tWrong ID / Password "<<endl;
                goto s;
            }
            system("cls");
            cout<<"\n\n\t\t\t   S E L L E R   C E N T E R";
            cout<<"\n\n\n\n\t\t  => 1. Total Cash\n\t\t  => 0. MainMenu";
            cout<<"\n\n\n\t\t\t => Which Shop Do You want to Enter : ";
            cin>>select;
            if(select==1) {
                cout<<"\n\n\t\t\t   Today  Cash  List ";
                cout<<"\n\n\t\t\tTOTAL CASH RECEIVED : Rs."<<Total;
                input=getch();
            }

        } else if(select1==2) {
            system("cls");
            cout<<"\n\n\n\t\t\t=> PlEASE ENTER YOUR Name : ";
            cin>>cname;
            cout<<"\n\n\t\t\t=> PLEASE ENTER YOUR ID : ";
            cin>>cid;
            cout<<"\n\n\t\t\t=> PLEASE ENTER YOUR PHONE NUMBER : ";
            cin>>cpnum;
j:
            system("cls");
            cout<<"\n\n\t\t\t   Z H   M A L L   S I A L K O T";
            cout<<"\n\n\n\n\t\t  => 1. SAAPHIRE\t\t\t=> 2. HUSH-PUPPIES ";
            cout<<"\n\n\n\n\t\t\t\t  => 3. FOOD COURT";
            cout<<"\n\n\n\t\t\t => Which Shop Do You want to Enter : ";
            cin>>select;
            if(select==1) {
b:
                system("cls");
                cout<<"\n\n\n\t\t\t WELCOME TO SAPPHHIRE "<<endl;
                cout<<"\n\n\t\t\t => 1. KURTA / SHALWAAR "<<endl;
                cout<<"\n\n\t\t\t => 2. PENTS "<<endl;
                cout<<"\n\n\t\t\t => 3. SHIRTS "<<endl;
                cout<<"\n\n\n\t\t\t WHAT WOULD YOU LIKE TO BUY : ";
                cout<<"\n\n\t\t";
e:
                cin>>select;
                system("cls");
                if(select==1) {
a:
                    system("cls");
                    cout<<" => 0.BACK";
                    cout<<"\n\n\n\t\t\t\t COLOUR/TYPES AVAILABLE "<<endl;
                    cout<<"\n\n\t\t\t => 1. WHITE"<<endl;
                    cout<<"\n\n\t\t\t => 2. BLACK"<<endl;
                    cout<<"\n\n\t\t\t => 3. PINK"<<endl;
                    cout<<"\n\n\t\t\t => 4. MUSTARD"<<endl;
                    cout<<"\n\n\n\t\t\t WHICH COLOUR WOULD YOU LIKE : ";
                    cin>>select;
                    if(select==1) {
                        system("cls;");
                        string col="White";
                        string typ="Kurta/Shalwaar";
                        int pri=5500;
                        confirm(pri,col,typ);
                        cin>>select;
                        if(select==1) {
                            Total=Total+5500;
                            system("cls");
                            //cout<<"\n\n\n\n\t\t\t\t PAYEMNT     SUCCESSFUL "<<endl;
                            cout<<"\n\n\n\t\tWOULD YOU LIKE TO BUY ANY OTHER THING : "<<endl;
                            cout<<"\n\n\n\t\t => 1. YES"<<endl;
                            cout<<"\n\t\t => 0. No"<<endl;
                            cout<<"\t\t\t => ";
                            cin>>select;
                            if(select==1) {
                                goto j;
                            } else {
                                receipt(Total,cash,rcash,finalc);
                                if(finalc==0) {
                                    goto no;
                                } else {
                                    goto m;
                                }
                            }
                        } else {
                            goto a;
                        }
                    }

                    else if(select==2) {
                        system("cls;");
                        string col="Black";
                        string typ="Kurta/Shalwaar";
                        int pri=4500;
                        confirm(pri,col,typ);
                        cin>>select;
                        if(select==1) {
                            Total=Total+4500;
                            system("cls");
                            //cout<<"\n\n\n\n\t\t\t\t PAYEMNT     SUCCESSFUL "<<endl;
                            cout<<"\n\n\n\t\tWOULD YOU LIKE TO BUY ANY OTHER THING : "<<endl;
                            cout<<"\n\n\n\t\t => 1. YES"<<endl;
                            cout<<"\n\t\t => 0. No"<<endl;
                            cout<<"\t\t\t => ";
                            cin>>select;
                            if(select==1) {
                                goto j;
                            } else {
                                receipt(Total,cash,rcash,finalc);
                                if(finalc==0) {
                                    goto no;
                                } else {
                                    goto m;
                                }
                            }
                        } else {
                            goto a;
                        }

                    } else if(select==3) {
                        system("cls;");
                        string col="Pink";
                        string typ="Kurta/Shalwaar";
                        int pri=6000;
                        confirm(pri,col,typ);
                        cin>>select;
                        if(select==1) {
                            Total=Total+6000;
                            system("cls");
                            //cout<<"\n\n\n\n\t\t\t\t PAYEMNT     SUCCESSFUL "<<endl;
                            cout<<"\n\n\n\t\tWOULD YOU LIKE TO BUY ANY OTHER THING : "<<endl;
                            cout<<"\n\n\n\t\t => 1. YES"<<endl;
                            cout<<"\n\t\t => 0. No"<<endl;
                            cout<<"\t\t\t => ";
                            cin>>select;
                            if(select==1) {
                                goto j;
                            } else {
                                receipt(Total,cash,rcash,finalc);
                                if(finalc==0) {
                                    goto no;
                                } else {
                                    goto m;
                                }
                            }
                        } else {
                            goto a;
                        }

                    } else if(select==4) {
                        system("cls;");
                        string col="Mustard";
                        string typ="Kurta/Shalwaar";
                        int pri=6500;
                        confirm(pri,col,typ);
                        cin>>select;
                        if(select==1) {
                            Total=Total+6500;
                            system("cls");
                            //cout<<"\n\n\n\n\t\t\t\t PAYEMNT     SUCCESSFUL "<<endl;
                            cout<<"\n\n\n\t\tWOULD YOU LIKE TO BUY ANY OTHER THING : "<<endl;
                            cout<<"\n\n\n\t\t => 1. YES"<<endl;
                            cout<<"\n\t\t => 0. No"<<endl;
                            cout<<"\t\t\t => ";
                            cin>>select;
                            if(select==1) {
                                goto j;
                            } else {
                                receipt(Total,cash,rcash,finalc);
                                if(finalc==0) {
                                    goto no;
                                } else {
                                    goto m;
                                }
                            }
                        } else {
                            goto a;
                        }
                    } else if(select==0) {
                        goto b;
                    }
                } else if(select==2) {
f:
                    system("cls");
                    cout<<" => 0.BACK";
                    cout<<"\n\n\n\t\t\t\t COLOUR/TYPES AVAILABLE "<<endl;
                    cout<<"\n\n\t\t\t => 1. BLACK Jeans"<<endl;
                    cout<<"\n\n\t\t\t => 2. Brown Jeans"<<endl;
                    cout<<"\n\n\t\t\t => 3. Brown Plain"<<endl;
                    cout<<"\n\n\n\t\t\t WHICH COLOUR WOULD YOU LIKE : ";
                    cin>>select;
                    if(select==1) {
                        system("cls;");
                        string col="BLACK";
                        string typ="JEANS";
                        int pri=1500;
                        confirm(pri,col,typ);
                        cin>>select;
                        if(select==1) {
                            Total=Total+1500;
                            system("cls");
                            cout<<"\n\n\n\t\tWOULD YOU LIKE TO BUY ANY OTHER THING : "<<endl;
                            cout<<"\n\n\n\t\t => 1. YES"<<endl;
                            cout<<"\n\t\t => 0. No"<<endl;
                            cout<<"\t\t\t => ";
                            cin>>select;
                            if(select==1) {
                                goto j;
                            } else {
                                receipt(Total,cash,rcash,finalc);
                                if(finalc==0) {
                                    goto no;
                                } else {
                                    goto m;
                                }
                            }
                        } else {
                            goto f;
                        }
                    } else if(select==2) {
                        system("cls;");
                        string col="Brown";
                        string typ="Jeans";
                        int pri=1800;
                        confirm(pri,col,typ);
                        cin>>select;
                        if(select==1) {
                            Total=Total+1800;
                            system("cls");
                            cout<<"\n\n\n\t\tWOULD YOU LIKE TO BUY ANY OTHER THING : "<<endl;
                            cout<<"\n\n\n\t\t => 1. YES"<<endl;
                            cout<<"\n\t\t => 0. No"<<endl;
                            cout<<"\t\t\t => ";
                            cin>>select;
                            if(select==1) {
                                goto j;
                            } else {
                                receipt(Total,cash,rcash,finalc);
                                if(finalc==0) {
                                    goto no;
                                } else {
                                    goto m;
                                }
                            }
                        } else {
                            goto f;
                        }
                    } else if(select==3) {
                        system("cls;");
                        string col="Brown";
                        string typ="Plain";
                        int pri=1300;
                        confirm(pri,col,typ);
                        cin>>select;
                        if(select==1) {
                            Total=Total+1300;
                            system("cls");
                            cout<<"\n\n\n\t\tWOULD YOU LIKE TO BUY ANY OTHER THING : "<<endl;
                            cout<<"\n\n\n\t\t => 1. YES"<<endl;
                            cout<<"\n\t\t => 0. No"<<endl;
                            cout<<"\t\t\t => ";
                            cin>>select;
                            if(select==1) {
                                goto j;
                            } else {
                                receipt(Total,cash,rcash,finalc);
                                if(finalc==0) {
                                    goto no;
                                } else {
                                    goto m;
                                }
                            }
                        } else {
                            goto f;
                        }
                    } else if(select==0) {
                        goto b;
                    } else {
                        cout<<"\n\n\t\t\t\tPlease select from the above:"<<endl;
                        goto f;
                    }
                } else if(select==3) {
h:
                    system("cls");
                    cout<<" => 0.BACK";
                    cout<<"\n\n\n\t\t\t\t COLOUR/TYPES AVAILABLE "<<endl;
                    cout<<"\n\n\t\t\t => 1. CHECK SHIRT"<<endl;
                    cout<<"\n\n\t\t\t => 2. POLO-SHIRT"<<endl;
                    cout<<"\n\n\t\t\t => 3. T-SHIRT"<<endl;
                    cout<<"\n\n\n\t\t\t WHICH COLOUR/STYLE WOULD YOU LIKE : ";
                    cin>>select;
                    if(select==1) {
                        system("cls;");
                        string col="CHECK";
                        string typ="SHIRT";
                        int pri=1500;
                        confirm(pri,col,typ);
                        cin>>select;
                        if(select==1) {
                            Total=Total+1500;
                            system("cls");
                            cout<<"\n\n\n\t\tWOULD YOU LIKE TO BUY ANY OTHER THING : "<<endl;
                            cout<<"\n\n\n\t\t => 1. YES"<<endl;
                            cout<<"\n\t\t => 0. No"<<endl;
                            cout<<"\t\t\t => ";
                            cin>>select;
                            if(select==1) {
                                goto j;
                            } else {
                                receipt(Total,cash,rcash,finalc);
                                if(finalc==0) {
                                    goto no;
                                } else {
                                    goto m;
                                }
                            }
                        } else {
                            goto h;
                        }
                    } else if(select==2) {
                        system("cls;");
                        string col="Polo";
                        string typ="SHIRT";
                        int pri=1200;
                        confirm(pri,col,typ);
                        cin>>select;
                        if(select==1) {
                            Total=Total+1200;
                            system("cls");
                            cout<<"\n\n\n\t\tWOULD YOU LIKE TO BUY ANY OTHER THING : "<<endl;
                            cout<<"\n\n\n\t\t => 1. YES"<<endl;
                            cout<<"\n\t\t => 0. No"<<endl;
                            cout<<"\t\t\t => ";
                            cin>>select;
                            if(select==1) {
                                goto j;
                            } else {
                                receipt(Total,cash,rcash,finalc);
                                if(finalc==0) {
                                    goto no;
                                } else {
                                    goto m;
                                }
                            }
                        } else {
                            goto h;
                        }
                    } else if(select==3) {
                        system("cls;");
                        string col="T-";
                        string typ="SHIRT";
                        int pri=1000;
                        confirm(pri,col,typ);
                        cin>>select;
                        if(select==1) {
                            Total=Total+1000;
                            system("cls");
                            cout<<"\n\n\n\t\tWOULD YOU LIKE TO BUY ANY OTHER THING : "<<endl;
                            cout<<"\n\n\n\t\t => 1. YES"<<endl;
                            cout<<"\n\t\t => 0. No"<<endl;
                            cout<<"\t\t\t => ";
                            cin>>select;
                            if(select==1) {
                                goto j;
                            } else {
                                receipt(Total,cash,rcash,finalc);
                                if(finalc==0) {
                                    goto no;
                                } else {
                                    goto m;
                                }
                            }
                        } else {
                            goto h;
                        }
                    } else if(select==0) {
                        goto b;
                    } else {
                        cout<<"\n\n\t\t\t\tPlease select from the above:"<<endl;
                        goto h;
                    }
                } else {
                    cout<<"\n\n\t\t\t\tPlease select from the above:"<<endl;
                    goto e;
                }
            } else if(select==2) {
c:
                system("cls");
                cout<<"\n\n\n\t\t\t WELCOME TO HUSH-PUPPIES "<<endl;
                cout<<"\n\n\t\t\t => 1. Lofers "<<endl;
                cout<<"\n\n\t\t\t => 2. Sneakers "<<endl;
                cout<<"\n\n\t\t\t => 3. Casuals "<<endl;
                cout<<"\n\n\n\t\t\t WHAT WOULD YOU LIKE TO BUY : ";
g:
                cin>>select;
                if(select==1) {
                    system("cls;");
                    string col="Lofers";
                    string typ="Shoes";
                    int pri=2000;
                    confirm(pri,col,typ);
                    cin>>select;
                    if(select==1) {
                        Total=Total+2000;
                        system("cls");
                        cout<<"\n\n\n\t\tWOULD YOU LIKE TO BUY ANY OTHER THING : "<<endl;
                        cout<<"\n\n\n\t\t => 1. YES"<<endl;
                        cout<<"\n\t\t => 0. No"<<endl;
                        cout<<"\t\t\t => ";
                        cin>>select;
                        if(select==1) {
                            goto j;
                        } else {
                            receipt(Total,cash,rcash,finalc);
                            if(finalc==0) {
                                goto no;
                            } else {
                                goto m;
                            }
                        }
                    } else {
                        goto c;
                    }
                } else if(select==2) {
                    system("cls;");
                    string col="Sneakers";
                    string typ="Shoes";
                    int pri=2500;
                    confirm(pri,col,typ);
                    cin>>select;
                    if(select==1) {
                        Total=Total+2500;
                        system("cls");
                        cout<<"\n\n\n\t\tWOULD YOU LIKE TO BUY ANY OTHER THING : "<<endl;
                        cout<<"\n\n\n\t\t => 1. YES"<<endl;
                        cout<<"\n\t\t => 0. No"<<endl;
                        cout<<"\t\t\t => ";
                        cin>>select;
                        if(select==1) {
                            goto j;
                        } else {
                            receipt(Total,cash,rcash,finalc);
                            if(finalc==0) {
                                goto no;
                            } else {
                                goto m;
                            }
                        }
                    } else {
                        goto c;
                    }
                } else if(select==3) {
                    system("cls;");
                    string col="Casual";
                    string typ="Shoes";
                    int pri=2000;
                    confirm(pri,col,typ);
                    cin>>select;
                    if(select==1) {
                        Total=Total+2000;
                        system("cls");
                        cout<<"\n\n\n\t\tWOULD YOU LIKE TO BUY ANY OTHER THING : "<<endl;
                        cout<<"\n\n\n\t\t => 1. YES"<<endl;
                        cout<<"\n\t\t => 0. No"<<endl;
                        cout<<"\t\t\t => ";
                        cin>>select;
                        if(select==1) {
                            goto j;
                        } else {
                            receipt(Total,cash,rcash,finalc);
                            if(finalc==0) {
                                goto no;
                            } else {
                                goto m;
                            }
                        }
                    } else {
                        goto c;
                    }
                } else {
                    cout<<"\n\n\t\t\t\tPlease select from the above:"<<endl;
                    goto g;
                }
            } else if(select==3) {
i:
                system("cls");
                cout<<" => 0.BACK";
                cout<<"\n\n\n\t\t\t\t FOOD AVAILABLE "<<endl;
                cout<<"\n\n\t\t\t => 1. NOODLES"<<endl;
                cout<<"\n\n\t\t\t => 2. BURGER"<<endl;
                cout<<"\n\n\t\t\t => 3. SHAWARMA"<<endl;
                cout<<"\n\n\n\t\t\t WHICH WOULD YOU LIKE TO EAT: ";
                cin>>select;
                if(select==1) {
                    system("cls;");
                    string col="Spicy";
                    string typ="Noodles";
                    int pri=200;
                    confirm(pri,col,typ);
                    cin>>select;
                    if(select==1) {
                        Total=Total+200;
                        system("cls");
                        cout<<"\n\n\n\t\tWOULD YOU LIKE TO BUY ANY OTHER THING : "<<endl;
                        cout<<"\n\n\n\t\t => 1. YES"<<endl;
                        cout<<"\n\t\t => 0. No"<<endl;
                        cout<<"\t\t\t => ";
                        cin>>select;
                        if(select==1) {
                            goto j;
                        } else {
                            receipt(Total,cash,rcash,finalc);
                            if(finalc==0) {
                                goto no;
                            } else {
                                goto m;
                            }
                        }
                    } else {
                        goto i;
                    }
                } else if(select==2) {
                    system("cls;");
                    string col="ZINGER";
                    string typ="BURGER";
                    int pri=250;
                    confirm(pri,col,typ);
                    cin>>select;
                    if(select==1) {
                        Total=Total+250;
                        system("cls");
                        cout<<"\n\n\n\t\tWOULD YOU LIKE TO BUY ANY OTHER THING : "<<endl;
                        cout<<"\n\n\n\t\t => 1. YES"<<endl;
                        cout<<"\n\t\t => 0. No"<<endl;
                        cout<<"\t\t\t => ";
                        cin>>select;
                        if(select==1) {
                            goto j;
                        } else {
                            receipt(Total,cash,rcash,finalc);
                            if(finalc==0) {
                                goto no;
                            } else {
                                goto m;
                            }
                        }
                    } else {
                        goto i;
                    }
                } else if(select==3) {
                    system("cls;");
                    string col="LOADED ";
                    string typ="SHAWARMA";
                    int pri=300;
                    confirm(pri,col,typ);
                    cin>>select;
                    if(select==1) {
                        Total=Total+300;
                        system("cls");
                        cout<<"\n\n\n\t\tWOULD YOU LIKE TO BUY ANY OTHER THING : "<<endl;
                        cout<<"\n\n\n\t\t => 1. YES"<<endl;
                        cout<<"\n\t\t => 0. No"<<endl;
                        cout<<"\t\t\t => ";
                        cin>>select;
                        if(select==1) {
                            goto j;
                        } else {
                            receipt(Total,cash,rcash,finalc);
                            if(finalc==0) {
                                goto no;
                            } else {
                                goto m;
                            }
                        }
                    } else {
                        goto i;
                    }
                } else if(select==0) {
                    goto j;
                } else {
                    cout<<"\n\n\t\t\t\tPlease select from the above:"<<endl;
                    goto i;
                }
            }
        } else if(select1==0) {
m:
            system("cls");
            string text2="\n\n\n\n\n\t\t\t T H A N K   Y O U   F O R  \n\n\t\t\t\t\t U S I N G \n\n\t\t\t    C S     S H O P P I N G     M A L L\n\n\n\n";
            for(int i=0; i<text2.length(); i++) {
                cout<<text2.at(i);
                Sleep(40);
            }
            break;
        } else {
            cout<<"\n\n\t\t\t\tPlease select from the above:";
            goto k;
        }




    }
    return 0;
}
