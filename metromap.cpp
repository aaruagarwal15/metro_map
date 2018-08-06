#include<iostream>
#include<windows.h>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define row 50
#define col 50
#define length 5
void floyd_warshall();
void main_menu();
void find_route();
void admin();
void init();
void delete_station();
void contact_details();
int formint(int,int);
char graph[row][col][length];
int V = 60,len = 0;
char ch[4];
void gotoxy(int x,int y)
{
     COORD c;
     c.X=x;
     c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
static int travel_source, travel_destination;
struct array1
{
    char station_name[30];
    int value;
};
array1 station_array[200];
int no_of_station = 0;
void main_frame()
{
    int i;
    for(i=1;i<156;i++)
    {   gotoxy(i,0);
        cout<<"*";
    }
    for(i=1;i<35;i++)
    {   gotoxy(0,i);
        cout<<"**";
    }
    for(i=0;i<35;i++)
    {   gotoxy(156,i);
        cout<<"**";
    }

    for(i=1;i<156;i++)
    {   gotoxy(i,0);
        cout<<"*";
    }
    for(i=1;i<156;i++)
    {   gotoxy(i,0);
        cout<<"*";
    }
    for(int k=0;k<=100000000;k++);
    for(i=0;i<=11;i++)
    {
        gotoxy(20,5+i);
        cout<<"**";
        gotoxy(20+i,5+i);
        cout<<"**";
        for(int k=0;k<=100000000;k++);
        gotoxy(43-i,5+i);
        cout<<"**";
        gotoxy(43,5+i);
        cout<<"**";
        for(int k=0;k<=100000;k++);
        gotoxy(50+i,5);
        cout<<"**";
        //gotoxy(58+i,5);
        //cout<<"**";
        gotoxy(50+i,6);
        cout<<"**";
        //gotoxy(58+i,6);
        //cout<<"**";
        for(int k=0;k<=100000;k++);
        gotoxy(50,5+i);
        cout<<"**";
        gotoxy(50+i,10);
        cout<<"**";
        for(int k=0;k<=100000;k++);
        gotoxy(50+i,11);
        cout<<"**";
        gotoxy(50+i,15);
        cout<<"**";
        for(int k=0;k<=100000;k++);
        gotoxy(50+i,16);
        cout<<"**";
        for(int k=0;k<=100000;k++);
        gotoxy(68+i,5);
        cout<<"**";
        gotoxy(68+i,6);
        cout<<"**";
        for(int k=0;k<=100000;k++);
        gotoxy(74+i,5);
        cout<<"**";
        gotoxy(74+i,6);
        cout<<"**";
        for(int k=0;k<=100000;k++);
        gotoxy(76,5+i);
        cout<<"**";
        gotoxy(77,5+i);
        cout<<"**";
        for(int k=0;k<=100000;k++);
        gotoxy(91,5+i);
        cout<<"**";
        for(int k=0;k<=100000;k++);
        gotoxy(91+i,5);
        cout<<"**";
        gotoxy(91+i,6);
        cout<<"**";
        for(int k=0;k<=100000;k++);
        gotoxy(91+i,11);
        cout<<"**";
        gotoxy(91+i,10);
        cout<<"**";
        for(int k=0;k<=100000;k++);
        gotoxy(109+i,5);
        cout<<"**";
        gotoxy(109+i,6);
        cout<<"**";
        for(int k=0;k<=100000;k++);
        gotoxy(109+i,16);
        cout<<"**";
        gotoxy(109+i,15);
        cout<<"**";
        for(int k=0;k<=100000;k++);
        gotoxy(109,5+i);
        cout<<"**";
        gotoxy(120,5+i);
        cout<<"**";
        for(int k=0;k<=100000;k++);
        gotoxy(45,20+i);
        cout<<"**";
        gotoxy(45+i,20+i);
        cout<<"**";
        for(int k=0;k<=100000;k++);
        gotoxy(67-i,20+i);
        cout<<"**";
        gotoxy(67,20+i);
        cout<<"**";
        for(int k=0;k<=100000;k++);
        gotoxy(85+i,20+i);
        cout<<"**";
        gotoxy(85-i,20+i);
        cout<<"**";
        for(int k=0;k<=100000;k++);
        gotoxy(80+i,25);
        cout<<"*";
        for(int k=0;k<=100000;k++);
        gotoxy(100,20+i);
        cout<<"**";
        gotoxy(100+i,20);
        cout<<"**";
        gotoxy(100+i,21);
        cout<<"**";
        for(int k=0;k<=100000;k++);
        gotoxy(100+i,25);
        cout<<"**";
        gotoxy(100+i,26);
        cout<<"**";
        for(int k=0;k<=100000;k++);
    }
    for(i=0;i<6;i++)
    {   gotoxy(102,5+i);
        cout<<"**";
        for(int k=0;k<=100000;k++);
        gotoxy(97+i,11+i);
        cout<<"**";
        for(int k=0;k<=100000;k++);
        gotoxy(80+i,25);
        cout<<"*";
        gotoxy(80+i,26);
        cout<<"******";
        for(int k=0;k<=100000;k++);
        gotoxy(111,20+i);
        cout<<"**";
    }
    gotoxy(158,158);
    cout<<"";
    for(int k=0;k<=100000;k++);
    for(i=1;i<156;i++)
    {   gotoxy(i,34);
        cout<<"*";
    }
    for(int m=0;m<900000000;m++);
    system("cls");
    //int gd=DETECT;
    //int gm;
    //initgraph(&gd,&gm,"C:\\TC\\BGI");

    //int i;
    for(i=1;i<156;i++)
    {   gotoxy(i,0);
        cout<<"*";

    }
    for(i=1;i<34;i++)
    {   gotoxy(0,i);
        cout<<"*";
        cout<<"*";
    }
    for(i=1;i<34;i++)
    {   gotoxy(156,i);
        cout<<"*";
        cout<<"*";
    }
//settextstyle(BOLD_FONT,HORIZ_DIR,8);
//outtextxy(40,10,"prpject");
    gotoxy(40,10);
    cout<<"PROJECT MEMBERS";
    for(i=40;i<70;i++)
    {   gotoxy(i,12);
        cout<<"__";
    }

    gotoxy(40,17);
    cout<<"NIKITA GUPTA: 16803002";
    gotoxy(40,19);
    cout<<"SHUBHAM AGGARWAL:16803006";
    gotoxy(40,21);
    cout<<"ARUSHI AGARWAL: 16803017";
    for(i=1;i<156;i++)
    {   gotoxy(i,33);
        cout<<"*";
    }
    long int m;
    for(m=0;m<900000000;m++);
    system("cls");
}
void formchar(int v1,int v2,char c)
{
    int vf = v1+v2;
    int y,x;
    ch[0]=c;
    y=x=vf%10+'0';
    vf/=10;
    x = vf%10+'0';
    ch[2]=y;
    ch[1]=x;
    ch[3]='\0';
    cout<<ch;
}
void add_to_array( char str[] , int val )
{
    strcpy(station_array[no_of_station].station_name,str);
    station_array[no_of_station].value=val;
    no_of_station++;
}
void addedge(int s,int d, char *val)
{
    strcpy(graph[s][d],val);
    strcpy(graph[d][s],val);
    //V++;
}
void extract_data()
{   char src_name[30], dest_name[30], weight[5];
    int src_value, dest_value;
    FILE *fp=fopen("database.txt","r");
    if(fp == NULL)
      {
         cout<<"File does not exists.";
         return;
      }
      while (fscanf(fp,"%s %s %d %d %s", src_name , dest_name , &src_value , &dest_value , weight)!=EOF)
      {
          addedge( src_value , dest_value , weight);
          add_to_array( src_name , src_value );
          add_to_array( dest_name , dest_value );
      }
      fclose(fp);
}
void print_graph(char g[row][col][length])
{
    for (int i = 0; i <no_of_station; i++)
    {

        for (int j = 0; j <no_of_station; j++)
        {
            cout<<g[i][j];
            cout<<"\t";
        }
         cout<<endl;
    }
}
int findstringinarray(char *str)
{
    for(int i=0;i<no_of_station;i++)
    {
        if(strcmpi(str,station_array[i].station_name)==0)
            return station_array[i].value;
    }
    return -1;
}

char *findnamefromvalue(int k)
{
    for(int i=0;i<no_of_station;i++)
    {
        if(k==station_array[i].value)
            return station_array[i].station_name;
    }
}


//==============================================
int minDistance(int dist[], bool sptSet[])
{
   int min = INT_MAX, min_index;

   for (int v = 0; v < V; v++)
     if (sptSet[v] == false && dist[v] <= min)
         min = dist[v], min_index = v;

   return min_index;
}
void printPath(int parent[], int i, int change_array[])
{    char station_str[30];
    if(parent[i] == -1)
        return ;
    printPath(parent,parent[i],change_array);
    if(i!=0)
    {
        strcpy(station_str, findnamefromvalue(i));
        cout<<" -> "<<station_str;
        change_array[len++]=i;
    }
}
void print(int len , int changes[], int src)
{
    cout<<len;
    for(int i=0;i<len;i++)
        cout<<changes[i];
        cout<<" ";
    int last = src;
    for(int i=0;i<len;i++)
            cout<<graph[last][changes[i]][0],last=changes[i];
    //cout<<"out";
}
void print_change_color(int change_array[], int src, char graph[row][col][length])
{
    char str_change[30];
    char c[10],l[10],b='B',v='V',r='R',y='Y';
    if(!(change_array[0]>=0&&change_array[0]<=V))
        return;
    char last = graph[src][change_array[0]][0];
    int lastr=change_array[0];
    int p=18,flag=1;
    for(int i=1;i<len;i++)
    {
        if(graph[lastr][change_array[i]][0]!=last)
        {
            if(graph[last][change_array[i]][0]=='B')
                strcpy(c,"Blue_line");
            else if(graph[last][change_array[i]][0]=='V')
                strcpy(c,"Violet_line");
            else if(graph[last][change_array[i]][0]=='R')
                strcpy(c,"Red_line");
            else if(graph[last][change_array[i]][0]=='Y')
                strcpy(c,"Yellow_line");

            if(graph[lastr][change_array[i]][0]=='B')
                strcpy(l,"Blue line");
            else if(graph[lastr][change_array[i]][0]=='V')
                strcpy(l,"Violet line");
            else if(graph[lastr][change_array[i]][0]=='R')
                strcpy(l,"Red line");
            else if(graph[lastr][change_array[i]][0]=='Y')
                 strcpy(l,"Yellow line");

            strcpy(str_change , findnamefromvalue(change_array[i-1]));
            gotoxy(5,p);

                cout<<" You have to change metro at "<<str_change<<" to "<<l;

                //cout<<"Then you have to change metro at "<<str_change<<" to "<<l;
            last = graph[src][change_array[i]][0];
            p=p+2;
        }
        else
        {
            gotoxy(5,18);
            cout<<" No need to change metro.";
        }
        lastr=change_array[i];
    }
}
int printSolution(int dist[], int n, int parent[],int src,int dest,char graph[row][col][length], char *src_str)
{
    int change_array[V];
    //printf("Vertex Distance from Source\n");
       //printf("%d weight %d", i, dist[i]);
       gotoxy(5,15);
       len = 0;
       cout<<"Shortest path between your start station and destination: "<<src_str;
       printPath(parent,dest,change_array);
       //print(len,change_array,src);
       print_change_color(change_array,src,graph);
        //cout<<"flagexit\n";

       cout<<"\n";

}
void dijkstra(char graph[row][col][length], int src,int dest, char *dest_str , char *src_str)
{
     int dist[V];
     int parent[V];
     bool sptSet[V];
     for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = false,parent[i]=0;
     dist[src] = 0;
     parent[src]=-1;
     for (int count = 0; count < V-1; count++)
     {
       int u = minDistance(dist, sptSet);

       sptSet[u] = true;

       for (int v = 0; v < V; v++)

         if (!sptSet[v] && (strcmp(graph[u][v],"")!=0) && dist[u] != INT_MAX
                                       && dist[u]+formint(u,v) < dist[v] && formint(u,v)>=0)
            {
                dist[v] = dist[u] + formint(u,v),parent[v]=u;
            }
     }
     gotoxy(5,10);
     cout<<"Minimum distance from "<<src_str<<" to "<<dest_str<<" : "<<dist[dest]<<" km "<<endl;
     gotoxy(7,13);
     cout<<"Total fare: "<<3*dist[dest]<<endl;
     printSolution(dist, V, parent,src,dest,graph,src_str);
}
//-------------------------------====================
void find_route()
{
     int p;
     gotoxy(0,0);
    for(int i=0;i<157;i++)
    {
        gotoxy(i,0);
        cout<<"#";
    }
    for(int i=0;i<157;i++)
    {
        gotoxy(i,33);
        cout<<"#";
    }
     char travel_destination_str[30],travel_source_str[30];
     gotoxy(5,5);
     cout<<"Enter your start station: ";
     cin>>travel_source_str;
     gotoxy(5,7);
     cout<<"Enter your destination station: ";
     cin>>travel_destination_str;
     travel_destination=findstringinarray(travel_destination_str);
     travel_source=findstringinarray(travel_source_str);
     dijkstra(graph,travel_source,travel_destination,travel_destination_str,travel_source_str);
     gotoxy(7,25);
     cout<<"Press 1 for main menu";
     gotoxy(35,25);
     cout<<"Press 0 to exit.";
     gotoxy(12,27);
     cout<<"Enter your choice:";
     cin>>p;
     switch(p)
     {
         case 1 : system("cls");
                  main_menu();
                  break;
         case 0 : exit(0);
                break;
         default: cout<<"Wrong choice";
                  system("cls");
                  main_menu();
                  break;
     }

}
void init()
{
    for(int i = 0;i< row;i++)
        memset(graph[i],0,sizeof(graph[i]));
}
int main()
{
         init();
         main_frame();
        extract_data();
        main_menu();
        return 0;
}
int formint(int i,int j)
{
    int cur_v=0;
    int x=graph[i][j][1]-'0';
    cur_v=x;
    cur_v*=10;
    x = graph[i][j][2]-'0';
    cur_v+=x;
    return cur_v;
}
int binarySearch(struct array1 arr[],int l,int r,int x)
{
    int mid = l + (r - l)/2;
        if (arr[mid].value == x)
            return mid;
        if (arr[mid].value > x)
            return binarySearch(arr, l, mid-1, x);
        return binarySearch(arr, mid+1, r, x);
}
void floyd_warshall()
{
    for(int k=0;k<no_of_station;k++)
        {
            for(int i=0;i<no_of_station;i++)
               {
                    for(int j=0;j<no_of_station;j++)
                    {
                        //memset(ch,' ',sizeof(ch));
                        if(i==0&&k==1&&j==2)
                            {
                                cout<<formint(i,k)<<formint(k,j)<<formint(i,j);
                                formchar(formint(i,k),formint(k,j),graph[i][j][0]);
                                cout<<ch;
                                strcpy(graph[i][j],ch);
                            }
                        if(graph[i][k][0]==graph[k][j][0]&&strcmp(graph[k][j],"")!=0)
                        {
                            if(formint(i,j)>=0)
                                {

                                    if(formint(i,k)+formint(k,j)<formint(i,j))
                                    {

                                        formchar(formint(i,k),formint(k,j),graph[i][j][0]);
                                        cout<<ch;
                                        strcpy(graph[i][j],ch);
                                    }
                                }
                                else
                                {
                                    formchar(formint(i,k),formint(k,j),graph[i][j][0]);
                                    cout<<ch;
                                    strcpy(graph[i][j],ch);
                                }
                    }
                }
            }
        }
}
void contact_details()
{
    gotoxy(0,0);
    for(int i=0;i<157;i++)
    {
        gotoxy(i,0);
        cout<<"#";
    }
    for(int i=0;i<157;i++)
    {
        gotoxy(i,33);
        cout<<"#";
    }
    char station[30],landline[10],mobile[11],station1[30];
    gotoxy(5,5);
    cout<<"Enter station name of which you want contact details: ";
    fflush(stdin);
    gets(station);
    FILE *fp;
    fp=fopen("contact.txt","r");
    while(fscanf(fp,"%s%s%s",station1,landline,mobile)!=EOF)
    {
        if(strcmpi(station1,station)==0)
        {
            gotoxy(10,8);
            cout<<"Landline number: "<<landline;
            gotoxy(10,10);
            cout<<"Mobile number: "<<mobile;

        }
    }
    fclose(fp);
    int n;
    gotoxy(7,15);
    cout<<"Press 0 for main menu: ";
    cin>>n;
    if(n==0)
    {
        system("cls");
        main_menu();
    }

}
void main_menu()
{
    gotoxy(0,0);
    for(int i=0;i<157;i++)
    {
        gotoxy(i,0);
        cout<<"#";
    }
    for(int i=0;i<157;i++)
    {
        gotoxy(i,33);
        cout<<"#";
    }
    int a;
    gotoxy(60,5);
    cout<<"METRO  MAP";
    gotoxy(7,11);
    cout<<"Press 1 to get a route";
    gotoxy(13,13);
    cout<<"Press 2 to insert or delete a station";
    gotoxy(18,15);
    cout<<" Press 3 for contact details";
    gotoxy(24,17);
    cout<<"Press 4 to exit ";
    gotoxy(12,20);
    cout<<"Enter your choice:";
    cin>>a;
    switch(a)
    {
        case 1 :  system("cls");
                  find_route();
                  break;
        case 2 : system("cls");
                 admin();
                 break;
        case 3 : system("cls");
                 contact_details();
                 break;
        case 4 : exit(0);
                  break;
        default : cout<<"Wrong input";
                   system("cls");
                    main_menu();
                    break;
    }
}
void delete_station()
{
    gotoxy(0,0);
    for(int i=0;i<157;i++)
    {
        gotoxy(i,0);
        cout<<"#";
    }
    for(int i=0;i<157;i++)
    {
        gotoxy(i,33);
        cout<<"#";
    }
      char del_sname[50];
    char src[30],dest[30];
    int sd,dd;
    char dist[4];
    gotoxy(5,5);
    cout<<" Enter station name you want to delete:";
    fflush(stdin);
    gets(del_sname);
    int delsn;
    delsn=findstringinarray(del_sname);
    FILE *myfile;
    FILE *temp;
    myfile=fopen("database.txt","r");
    temp=fopen("deleted.txt","w");
    while(fscanf(myfile,"%s%s%d%d%s",src,dest,&sd,&dd,dist)!=EOF)
    {
        if(strcmpi(src,del_sname)!=0 && strcmpi(dest,del_sname)!=0)
        {
            fprintf(temp,"%s \t\t %s \t\t %d\t %d \t %s\n",src,dest,sd,dd,dist);

        }
    }
    gotoxy(10,8);
    cout<<"The record with the name "<<del_sname<<" has been deleted if it existed."<<endl;
    fclose(myfile);
    fclose(temp);
    remove("database.txt");
    rename("deleted.txt","database.txt");
    long int i;
    for(i=0;i<1000000000;i++);
    no_of_station=0;
    V = 0;
    extract_data();
    system("cls");
    main_menu();

}
void insert_station()
{
    gotoxy(0,0);
    for(int i=0;i<157;i++)
    {
        gotoxy(i,0);
        cout<<"#";
    }
    for(int i=0;i<157;i++)
    {
        gotoxy(i,33);
        cout<<"#";
    }
    char new_sname[50],connect_station[50];
    int nums,numd;
    char choice,distance[4];
    gotoxy(5,5);
    cout<<"Enter station name:";
    fflush(stdin);
    gets(new_sname);
    gotoxy(5,7);
    cout<<"Enter station number:";
    cin>>nums;
    FILE *fp;
    fp=fopen("database.txt","a");
    if(fp == NULL)
    {
       cout<<"File doesn't exists.";
       exit(0);
    }
    do {
      gotoxy(5,9);
    cout<<"Enter a station to connect:";
    fflush(stdin);
    cin>>connect_station;
    numd=findstringinarray(connect_station);
    gotoxy(5,11);
    cout<<"Enter distance to the station:";
    fflush(stdin);
    gets(distance);
    no_of_station++;
    fprintf(fp,"%s \t\t %s \t\t %d\t %d \t %s\n",new_sname,connect_station,nums,numd,distance);
    gotoxy(10,15);
    cout<<"Station inserted.";
      gotoxy(15,18);
    cout<<"Want to connect more stations?(y/n)";
    cin>>choice;
    } while(choice=='y'|| choice=='Y');
    fclose(fp);
    if(choice=='n'|| choice =='N')
     {
     no_of_station=0;
     V = 0;
     extract_data();
     system("cls");
     main_menu();
     }
}
void admin()
{
    gotoxy(0,0);
    for(int i=0;i<157;i++)
    {
        gotoxy(i,0);
        cout<<"#";
    }
    for(int i=0;i<157;i++)
    {
        gotoxy(i,33);
        cout<<"#";
    }
    int password;
    int i;
    gotoxy(5,5);
    cout<<"Enter password:";
    cin>>password;
    if(password!=12345)
        {
            system("cls");
            main_menu();
        }
    else
    {
        gotoxy(8,8);
        cout<<"Press 1 to insert a station ";
        gotoxy(15,10);
        cout<<"Press 2 to delete a station";
        gotoxy(22,12);
        cout<<"Press 0 for main menu";
        gotoxy(10,15);
        cout<<"Enter your choice:";
        cin>>i;
        switch(i)
        {
            case 1 :   system("cls");
                      insert_station();
                        break;
            case 2 :   system("cls");
                      delete_station();
                        break;
            case 0 : system("cls");
                     main_menu();
                     break;
            default : cout<<"Wrong input";
                      system("cls");
                       main_menu();
                       break;

        }
    }
}

