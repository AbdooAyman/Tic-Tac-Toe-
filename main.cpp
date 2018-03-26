#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int a[100];
struct Pairs
{
    char Letter;
    string Pattern;
};

void CheckLetter(Pairs pr[],char c)
{
    for(int k=0;k<27;k++)
    {
        if(c==pr[k].Letter)
        {
            cout << pr[k].Pattern << " " ;
        }
    }
}

void CheckPattern(Pairs pr[],string temp)
{
    for(int j=0;j<26;j++)
    {
       if(temp==pr[j].Pattern)
        {
           cout << pr[j].Letter;
        }
    }
}







int main()
{
int number;
cout<<" Ahlan ya user ya habibi."<<endl;
cout<<"choose the specific cipher from 0 to 9";
cout<<"enter your number: ";
cin >> number;
if (number==0){
string character="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghigklmnopqrstuvwxyz";
int a;
cout<<"1- Cipher a message "<<endl;
cout<<"2- Decipher a message "<<endl;
cout<<"enter your number 1 or 2: ";
int num;
cin>>num;
cin.ignore();
string newname;
string letter;
string space=" ";
cout<<"enter your the message to AFFINE CIPHER : ";
cin>>letter;
int length=letter.size();
for(int i=0;i<=length;i++){
 if(letter[i]==space[0]){
 newname=newname+space;
 }
 for(int x=0; x<=51;x++){
  if(letter[i]==character[x]){
   a=(5*(x)+8);
  while(a>25){
    a=a-26;
}
newname=newname+character[a];
}
}
}
cout<<"message after AFFINE CIPHER is: "<<newname<<endl;
   }

////////////////////////////////////////////////////////////////////////
else if(number==1){//lsa








}
/////////////////////////////////////////////////////////////////////////
else if(number==2){
cout<<" \t \t Welcome To Atbash Chipper  "<<endl;
cout<<"What do you like to do today? "<<endl;
cout<<"1- Cipher a message "<<endl;
cout<<"2- Decipher a message "<<endl;
cout<<"enter your number 1 or 2: ";
int number;
cin>>number;
string space=" ";
string character="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
string character1="ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba";
string newletter;
string letter;
cout<<"ENTER YOUR MESSAGE : ";
cin.ignore();
getline(cin,letter);
int length=letter.size();
for(int i=0;i<=length;i++){
    if(letter[i]==space[0]){
      newletter=newletter+space;
    }
    for(int x=51;x>=0;x--){
        if(letter[i]==character1[x]){
            newletter=newletter+character[x];
        }
    }
}
cout<<"YOUR NEW  MESSAGE IS : "<<newletter<<endl;
}
////////////////////////////////////////////////////////////////////////
else if(number==3){ //dh mzbot
int num;
cout<<" 1- Cipher your message : \n 2- Decipher your message \n ";
cin>>num;
cin.ignore();
string character="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
string space=" ";
string letter;
string name;
int sum;
cout<<"enter your message: ";
cin>>letter;
int length=letter.size();
for(int i=0;i<=length;i++){
    if(letter[i]==space[0]){
        name=name+space;
    }
    for(int x=0;x<=51;x++){
        if(letter[i]==character[x]){
            if((x+13)>25){
                sum=(x-13);
            }else{
                sum=(x+13);

            }
            if ((x>=26)&&(x<=51)){
                if((x+13)>=51){
                    sum=(x-13);
                }
                else{
                    sum=(x+13);
                }



        }
        name=name+character[sum];
    }
    }
}

cout<<"your message is: "<<name;
}
/////////////////////////////////////////////////////////////
else if (number==4){//lsa


}
//////////////////////////////////////////////////////////////
else if (number==5){//lsa

}
//////////////////////////////////////////////////////////////
else if(number==6){
    string row1="abcdeABCDE", row2="fghijFGHIJ", row3="klmnoKLMNO", row4="pqrstPQRST", row5="uvxyzUVXYZ"; // store all characters in 5 rows
    string col1="afkpuAFKPU", col2="bglqvBGLQV", col3="chmrxCHMRX", col4="dinsyDINSY", col5="ejotzEJOTZ"; // store all characters in 5 columns
    string space=" ";
    string key;
    string memory1 ;
    string input;
    int choice;
    cout << " What do you like to do today?"<<endl;
    cout << " 1- Cipher a message "<<endl;
    cout << " 2- Decipher a message "<<endl;
    cout << " your choice : ";
    cin >> choice ;
    if(choice==1){
        cout << " Enter your key : ";
        cin >> key ;
        cout <<" Enter your message : ";
        cin.ignore();
        getline(cin,input);  // read his message
        int count_input=0 , count_row=0 , count_col=0 ;
        int len=input.length();
        while(count_input < len){  // loop to go through every character in the input
            count_row=0 , count_col=0;
            while(count_row<10){  // loop to compare every character in the input by 5 rows to know this character in which row
                if(input[count_input]==row1[count_row]){
                    cout << key[0];
                }
                else if(input[count_input]==row2[count_row]){
                    cout << key[1];
                }
                else if(input[count_input]==row3[count_row]){
                    cout << key[2];
                }
                else if(input[count_input]==row4[count_row]){
                    cout << key[3];
                }
                else if(input[count_input]==row5[count_row]){
                    cout << key[4];
                }
                count_row+=1;
            }

            while(count_col<10){  // loop to compare every character in the input by 5 columns to know this character in which column
                if(input[count_input]==col1[count_col]){
                    cout << key[0];
                }
                else if(input[count_input]==col2[count_col]){
                    cout << key[1];
                }
                else if(input[count_input]==col3[count_col]){
                    cout << key[2];
                }
                else if(input[count_input]==col4[count_col]){
                    cout << key[3];
                }
                else if(input[count_input]==col5[count_col]){
                    cout << key[4];
                }
                count_col+=1;
            }
            if(input[count_input]==space[0]){  // condition for space ( if he find space in message )
                cout<<space;
            }
            count_input+=1;
        }
    }
    // Decipher
    else if(choice==2){
        cout << " Enter your key : ";
        cin >> key ;
        cout<<" Enter Cipher text : ";
        cin.ignore();
        getline(cin,input);
        int input_count=0 , x =0 ,i=0; ;
        int len=input.length();
        while(input_count<len){
            if(input[input_count]==space[0]){  // condition for space ( if he find space in message )
                cout<<space;
                input_count++;
            }
            else{  // get first number the represent the row and store this row in memory1 (variable)
                if(input[input_count]== key[0]){
                    memory1 = row1;
                }
                else if (input[input_count]== key[1]){
                    memory1 = row2;
                }
                else if (input[input_count]== key[2]){
                    memory1 = row3;
                }
                else if (input[input_count]== key[3]){
                    memory1 = row4;
                }
                else if (input[input_count]== key[4]){
                    memory1 = row5;
                }
                // second number represent the column so I get this number and this number is the index of character in memory1
                input_count++;
                x =0;
                while(x<5){
                    if(input[input_count]==key[x]){
                        cout<<memory1[x];
                        break;
                    }
                    x++;
                }
                input_count++;
            }
        }
    }

}
///////////////////////////////////////////////////////////////
else if(number==7){
    Pairs pr[]= {{'a',".-"},{'b',"-..."},{'c',"-.-."},{'d',"-.."},{'e',"."},{'f',"..-."},{'g',"--."},{'h',"...."},{'i',".."},{'j',".---"},{'k',"-.-"},{'l',".-.."},{'m',"--"},{'n',"-."},{'o',"---"},{'p',".--."},{'q',"--.-"},{'r',".-."},{'s',"..."},{'t',"-"},{'u',"..-"},{'v',"...-"},{'w',".--"},{'x',"-..-"},{'y',"-.--"},{'z',"--.."},{' '," "}};

    int choice;
    cout << "Welcome to Morse Code Encryption & Decryption program!" << endl;
    cout << "What do you like to do?" << endl;
    cout << "1-Cipher a message" << endl;
    cout << "2-Decipher a message" << endl;
    cout << "3-Exit" << endl;
    cin >> choice;
    while (true)
    {
        if (choice > 3)
            {
            cout << "Invalid choice!\nPlease choose another choice" << endl;
            cin >> choice;
            }else{
                break;
                }
    }

    if(choice==1)
    {
        string sentence;
        cout << "Please enter the message you want to cipher:" << endl;
        cin.ignore();
        getline(cin,sentence);

        for(int i=0;i<sentence.size();i++)
        {
            char c = tolower(sentence[i]);
            CheckLetter(pr,c);

        }

    }
    else if(choice==2)
    {
        string pattern="";
        cout << "Please enter the message you want to decipher:" << endl;
        cin.ignore();
        getline(cin,pattern);
        pattern=pattern+' ';
        string temp ="";
        for(int i=0;i<pattern.size();i++)
        {

            if(pattern[i] == ' ')
            {
                CheckPattern(pr,temp);

                temp = "";
                   if(i != pattern.size()-1)
                {
                    if(pattern[i+1]== ' ' && pattern[i+2]== ' ')
                    {
                         // i++;
                        cout << " ";
                    }
                }


                  continue;
            }

        temp+=pattern[i];


        }

    }
    else if(choice==3){
            return 0;

}
}

//////////////////////////////////////////////////////////////////////////////////
else if(number==8){//lsa

}
//////////////////////////////////////////////////////////////////////////////////
else if(number==9){

    cout<<"Ahlan ya user ya habibi."<<endl;
    cout<<"what do you like to do today ?"<<endl;
    cout<<"1- Cipher a message"<<endl<<"2- Decipher a message"<<endl<<"3- End"<<endl;
    cout<<"enter your choose :";
    int num;
    cin>>num;
    if (num==1){
    int i,r,n,m,k,z,l,c,b;
    string s1,s2;
    cout<<"enter the key: ";
    cin>>r;
    cout<<"the text : ";
    cin>>s1;
    z=1;
    i=0;
    k=0;
    c=0;
    n=(2*r)-2;
    m=n;
    l=s1.length();
    while(z==1){
     if(i>=l){
        r-=1;
        k++;
        i=k;
        n-=2;
        c=0;

        if(n<2){
            n=m;
        }

        }

    for(;i<l;i+=n){
        char x;

        x=s1[i];
        s2+=x;
        c++;

        if(c>=2 && (m-n)!=0 ){
            char y;
            b=m-n;
            if(i+b<l){
            i+=b;
            y=s1[i];
            s2+=y;

            }

       }




    }
    if(r==1){

        cout<<endl<<"cipher text -> "<<s2<<endl;
        return 0;
    }
    }
    }

    if(num==2){
    int i,r,n,m,k,z,l,c,b,x,q,g,a[100];
    string s1,s2;
    cout<<"enter the key: ";
    cin>>r;
    cout<<"the text : ";
    cin>>s1;
    z=1;
    i=0;
    k=0;
    c=0;
    x=0;
    q=0;
    g=-1;
    n=(2*r)-2;
    m=n;
    l=s1.length();
    while(z==1){
     if(i>=l){
        r-=1;
        k++;
        i=k;
        n-=2;
        c=0;

        if(n<2){
            n=m;
        }

        }

    for(;i<l;i+=n){

        a[x]=i;

        x++;
        c++;



        if(c>=2 && (m-n)!=0 ){

            b=m-n;
            if(i+b<l){
            i+=b;
            a[x]=i;
            x++;
            }
       }
    }
    while(r==1){
        g++;
        if(g==l){
        cout<<endl<<"deciphered text -> "<<s2<<endl;
        return 0;
        }
        else if(a[q]==g){
            int s;
            s=q;
            s2+=s1[s];
            q=0;
        }
        else {
            g--;
            q++;
        }

    }
    }
    }
    if(num==3){
        return 0;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////

    return 0;

}
