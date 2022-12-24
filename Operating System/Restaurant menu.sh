echo "==========WELCOME TO OUR FAST FOOD RESTAURANT============"

echo "==========================MENU=============================="



echo  ".......FOOD NAME............Size..............Price......"

echo  "----------------------------------------------------------"

echo  "      1) Burger             200/300g          130tk/180tk"

echo  "      2) Chicken Pizza      8/10inch          120tk/150tk"

echo  "      3) French Fry         300g              70tk"

echo  "      4) Coke               300/400/1000mg    30/40/50tk"

echo  "      5) Coffee             250mg             65tk"



echo "What do you want to order?"



read choice



if (($choice == 1))

then

echo "Which size of burger you want?\n"

echo "1. 200gm\n 2. 300gm\n"

read burger_size

	if (($burger_size == 1))

	then

	echo "How many Burger do you want?\n"

	read burger_quantity

	price=`expr $burger_quantity \* 130`



	elif ((burger_size == 2))

	then

	echo "How many Burger do you want?"

	read burger_quantity

	price=`expr $burger_quantity \* 180`

	fi

elif ((choice == 2))

then

echo "Which size pizza you want?"

echo "1. 8inch\n 2. 10inch"

read pizza_size

	if (($pizza_size == 1))

	then

	echo "How many Pizza do you want?"

	read pizza_q

	price=`expr $pizza_q \* 120`

	

	elif (($pizza_size == 2))

	then

	echo "How many Pizza do you want?"

	read pizza_q

	price=`expr $pizza_size \* 150`

	fi

	

elif ((choice == 3))

then

echo "How many plate of French Fries do you want?"

read ff_q

price=`expr ff_q \* 70`





elif ((choice == 4))

then

echo "Which size Coke you want?"

echo "1. 300ml 2. 400ml 3. 1litre"

read coke_size

	if (($coke_size == 1))

	then

	echo "How many Coke do you want?"

	read coke_q

	price=`expr $coke_q \* 30`

	

	elif (($coke_size == 2))

	then

	echo "How many Coke do you want?"

	read coke_q

	price=`expr $coke_q \* 40`

	

	elif (($coke_size == 3))

	then

	echo "How many Coke do you want?"

	read coke_q

	price=`expr $coke_q \* 50`

	fi 

	

elif ((choice == 5))

then

echo "How many Cup of Coffee do you want?"

read coffee_q

price=`expr $coffee_q \* 65`

fi







echo "Do you want to order 1 more item?"

echo "1. Yes 2. No"

read order_choice2







if ((order_choice2 == 1))

then

echo "What do you want to order as a second item?"



read choice

		if (($choice == 1))

		then

		echo "Which size of burger you want?\n"

		echo "1. 200gm\n 2. 300gm\n"

		read burger_size

			if (($burger_size == 1))

			then

			echo "How many Burger do you want?\n"

			read burger_quantity

			price2=`expr $burger_quantity \* 130`



			elif ((burger_size == 2))

			then

			echo "How many Burger do you want?"

			read burger_quantity

			price2=`expr $burger_quantity \* 180`

			fi

		elif ((choice == 2))

		then

		echo "Which size pizza you want?"

		echo "1. 8inch\n 2. 10inch"

		read pizza_size

			if (($pizza_size == 1))

			then

			echo "How many Pizza do you want?"

			read pizza_q

			price2=`expr $pizza_q \* 120`

			

			elif (($pizza_size == 2))

			then

			echo "How many Pizza do you want?"

			read pizza_q

			price2=`expr $pizza_size \* 150`

			fi

			

		elif ((choice == 3))

		then

		echo "How many plate of French Fries do you want?"

		read ff_q

		price2=`expr ff_q \* 70`





		elif ((choice == 4))

		then

		echo "Which size Coke you want?"

		echo "1. 300ml 2. 400ml 3. 1litre"

		read coke_size

			if (($coke_size == 1))

			then

			echo "How many Coke do you want?"

			read coke_q

			price2=`expr $coke_q \* 30`

			

			elif (($coke_size == 2))

			then

			echo "How many Coke do you want?"

			read coke_q

			price2=`expr $coke_q \* 40`

			

			elif (($coke_size == 3))

			then

			echo "How many Coke do you want?"

			read coke_q

			price2=`expr $coke_q \* 50`

			fi 

			

		elif ((choice == 5))

		then

		echo "How many Cup of Coffee do you want?"

		read coffee_q

		price2=`expr $coffee_q \* 65`



		fi

echo "Your Total Bill is:"$((price+price2))

echo "Please pay the bill and wait for collecting the food!"

echo "Thank you for purchasing food from our restaurant! :)"

		

elif ((order_choice2 == 2))

then

echo "Your Total Bill is:"$price

echo "Please pay the bill and wait for collecting the food!"

echo "Thankyou for purchasing food from our restaurant! :)"S

fi
