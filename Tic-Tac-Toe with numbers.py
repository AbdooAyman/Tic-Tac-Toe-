
player1=str(input("Name of first player:  "))
player2=str(input("Name of second player: "))
print (player1 ,"vs" , player2)
print("This is your position:")
print ("0",'|',"1",'|',"2")
print ('--|---|---')
print ("3",'|',"4",'|',"5")
print ('--|---|---')   
print ("6",'|',"7",'|',"8")
print("player1 you can use this numbers (1,3,5,7,9)")
print("player2 you can use this numbers (0,2,4,6,8)")
q=1             
while(q==1):
  array=[0,0,0,0,0,0,0,0,0]
  a=0
  player="player1"
  while (a<=8):
             player="player1"
             print(player)
             if (player =="player1"):
                 try:
                   x=int(input("position: "))
                   y=int(input("number: "))  
                 except:
                   print("try again with a number")
                   continue
                 if(y<=9):
                   if (y%2==0):
                       print ("please chooise odd number")
                       y=int(input("number: "))
                       array[x]=y
                       a=a+1
                       print (array[0],'|',array[1],'|',array[2])
                       print ('--|---|---')
                       print (array[3],'|',array[4],'|',array[5])
                       print ('--|---|---')   
                       print (array[6],'|',array[7],'|',array[8])
                       if ((array[0]+array[1]+array[2]==15)or(array[3]+array[4]+array[5]==15)or(array[6]+array[7]+array[8]==15)or(array[0]+array[3]+array[6]==15)or(array[1]+array[4]+array[7]==15)
                              or (array[2]+array[5]+array[8]==15) or (array[0]+array[4]+array[8]==15) or (array[2]+array[4]+array[6]==15)):
                               print (player,"win")
                               break
                   else: 
                         array[x]=y
                         a=a+1
                         print (array[0],'|',array[1],'|',array[2])
                         print ('--|---|---')
                         print (array[3],'|',array[4],'|',array[5])
                         print ('--|---|---')   
                         print (array[6],'|',array[7],'|',array[8])
                         if ((array[0]+array[1]+array[2]==15)or(array[3]+array[4]+array[5]==15)or(array[6]+array[7]+array[8]==15)or(array[0]+array[3]+array[6]==15)or(array[1]+array[4]+array[7]==15)
                              or (array[2]+array[5]+array[8]==15) or (array[0]+array[4]+array[8]==15) or (array[2]+array[4]+array[6]==15)):
                               print (player,"win")
                               break
                 while (y>9):
                   print("Try Again!! ,player1 you can use this numbers (1,3,5,7,9) ")
                   y=int(input("number: "))
                   array[x]=y
                   a=a+1
                   while (y%2==0):
                       print ("please chooise odd number")
                       y=int(input("number: "))
                       array[x]=y
                   continue
             player="player2"
             print(player)
             if (player =="player2"):              
                         try:
                             x=int(input("position: "))
                             y=int(input("number: "))
                         except:
                             print("try again with a number")
                             continue
                         if(y<=9):
                            if (y%2!=0):
                                   print ("please chooise even number")
                                   y=int(input("number: "))
                                   array[x]=y
                                   a=a+1
                                   print (array[0],'|',array[1],'|',array[2])
                                   print ('--|---|---')
                                   print (array[3],'|',array[4],'|',array[5])
                                   print ('--|---|---')   
                                   print (array[6],'|',array[7],'|',array[8])
                                   if ((array[0]+array[1]+array[2]==15)or(array[3]+array[4]+array[5]==15)or(array[6]+array[7]+array[8]==15)or(array[0]+array[3]+array[6]==15)or(array[1]+array[4]+array[7]==15)
                                          or (array[2]+array[5]+array[8]==15) or (array[0]+array[4]+array[8]==15) or (array[2]+array[4]+array[6]==15)):
                                                     print (player,"win")
                                                     break
                            else:    
                                     array[x]=y
                                     a=a+1
                                     print (array[0],'|',array[1],'|',array[2])
                                     print ('--|---|---')
                                     print (array[3],'|',array[4],'|',array[5])
                                     print ('--|---|---')   
                                     print (array[6],'|',array[7],'|',array[8])
                                     if ((array[0]+array[1]+array[2]==15)or(array[3]+array[4]+array[5]==15)or(array[6]+array[7]+array[8]==15)or(array[0]+array[3]+array[6]==15)or(array[1]+array[4]+array[7]==15)
                                            or (array[2]+array[5]+array[8]==15) or (array[0]+array[4]+array[8]==15) or (array[2]+array[4]+array[6]==15)):
                                                       print (player,"win")
                                                       break
                         while (y>9):
                             print("Try Again!! ,player2 you can use this numbers (0,2,4,6,8) ")
                             y=int(input("number: "))
                             array[x]=y
                             a=a+1
                             while (y%2==0):
                                print ("please chooise odd number")
                                y=int(input("number: "))
                                array[x]=y
                                continue

             if(a==9):
                       print ("No one win Try again")
                       break
  q=0
  p=input("IF you want play again write yes :")
  if"yes" in p :
      q=1
