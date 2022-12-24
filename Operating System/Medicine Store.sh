#! /bin/bash



clear



echo "*******************You need to Log in First********************"

read -p "Enter Username : " u

read -p "Enter Password : " pa

if [ "$u" == "admin" -a "$pa" == "1234" ]

then



echo ">>>>>>>>>>> Welcome to Our Medicine Store <<<<<<<<<<<"

echo " "



echo "Medicine List:"



echo "-------- Medicine Name --------- Strength -------- Price ----------"





echo "1)           Napa                 120 mg          15 Taka "

echo "2)           Fexo                 125 mg          60 Taka "

echo "3)           Zimax                500 mg          180 Taka "

echo "4)          Moxibac               500 mg          200 Taka "

echo "5)        Napa Extra              500 mg          25 Taka "

echo " "



echo "Which Medicine Do You want? (1-5)"

echo " "

read choice



if ((choice == 1))

then

echo "How many packs of napa 120mg do you want?"

read napa_q

price=`expr $napa_q \* 15`



elif ((choice == 2))

then

echo "How many packs of fexo 120mg do you want?"

read fexo_q 

price=`expr $fexo_q \* 60`

elif ((choice == 3))

then

echo "How many packs of Zimax 500mg (Antibiotic) do you want?"

read zim_q 

price=`expr $zim_q \* 180`



elif ((choice == 4))

then

echo "How many packs of Moxibac 500mg (Antibiotic) do you want?"

read mox_q 

price=`expr $mox_q \* 200`



elif ((choice == 5))

then

echo "How many packs of Napa Extra 500mg do you want?"

read np_q 

price=`expr $np_q \* 25`

fi



echo "Thanks for Your Order"

echo " "



echo "Your total bill is: "$price

echo "Please Pay the bill and collect your medicine form the counter"

echo "Thanks for Visiting Our Medicine Store"

echo "Good Bye <3"



else

echo "Try again to Log in"

fi
