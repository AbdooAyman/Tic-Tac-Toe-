#include <iostream>

using namespace std;

int main()
{
  while (true){
         int yr, m, cm, d, c, xc, l, x, ix, v, i;
         string n;
        cout<< " Enter the year : ";
        cin>> yr;
       cout<<"\n In Roman Numeral Format:  ";
       for(m = 1000;yr >= m; yr -= 1000)
           {cout<<"M";}
      for(cm = 900; yr >= cm; yr -= 900)
          {cout<< "CM";}
       for(d = 500;yr >= d; yr -= 500)
           {cout<<"D";}
       if(yr >= 400){ cout<<"CD"; yr -= 400; }
       else {
               for(c = 100;yr >= c; yr -= 100)
                   {cout<<"C";}
           }
      for(xc = 90; yr >= xc; yr -= 90)
          {cout<< "XC";}
       for(l = 50;yr >= l; yr -= 50)
           {cout<<"L";}
       if(yr >= 40){ cout<<"XL"; yr -= 40; }
       else {
                for(x = 10;yr >= x; yr -= 10)
                   {cout<<"X";}
           }
      for(ix = 9; yr >= ix; yr -= 9)
          {cout<< "IX";}
       for(v = 5;yr >= v; yr -= 5)
           {cout<<"V";}
       if(yr >= 4){ cout<<"IV"; yr -= 4; }
       else {
                for(i = 1;yr >= i; yr -= 1)
                   {cout<<"I";}
            }
         cout<<endl;
        cout << "If you want to end write done : ";
        cin>>n;

     if(n=="done"){
        break;
     }else{
     continue;
     }
}









    return 0;
}
