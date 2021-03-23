#!/bin/bash

clang -Wall -Wextra -Wno-format -fsanitize=address -g3 -fno-omit-frame-pointer ./printf/*.c -o test
clang -Wall -Wextra -Werror -Wno-format -fsanitize=address -g3 -fno-omit-frame-pointer ./ft_printf/*.c -L/home/user42/Projects/Printf/ -lftprintf -o ft_test

if [[ $1 = "p" ]] ; then
echo "==== LAUNCHING TESTS FOR p CONVERSION ===="
echo "Compare yourself :"
echo ""

./ft_test p_tests

exit
fi

echo "==== LAUNCHING TESTS FOR i CONVERSION ===="

echo "--> Basic tests"
./test i_basic > ./results/i_tests_basic.txt
./ft_test i_basic > ./results/i_tests_ft_basic.txt

if diff ./results/i_tests_basic.txt ./results/i_tests_ft_basic.txt >> ./results/diff.txt ; then
	echo -e "\033[0;32m[OK]\033[0m"
else
	echo -e "\033[0;31m[KO]\033[0m"
fi

echo "--> Special cases"
./test i_special > ./results/i_tests_special.txt
./ft_test i_special > ./results/i_tests_ft_special.txt

if diff ./results/i_tests_special.txt ./results/i_tests_ft_special.txt >> ./results/diff.txt ; then
	echo -e "\033[0;32m[OK]\033[0m"
else
	echo -e "\033[0;31m[KO]\033[0m"
fi

echo ""
echo "==== LAUNCHING TESTS FOR u CONVERSION ===="

echo "--> Basic tests"
./test u_basic > ./results/u_tests_basic.txt
./ft_test u_basic > ./results/u_tests_ft_basic.txt

if diff ./results/u_tests_basic.txt ./results/u_tests_ft_basic.txt >> ./results/diff.txt ; then
	echo -e "\033[0;32m[OK]\033[0m"
else
	echo -e "\033[0;31m[KO]\033[0m"
fi

echo "--> Special cases"
./test u_special > ./results/u_tests_special.txt
./ft_test u_special > ./results/u_tests_ft_special.txt

if diff ./results/u_tests_special.txt ./results/u_tests_ft_special.txt >> ./results/diff.txt ; then
	echo -e "\033[0;32m[OK]\033[0m"
else
	echo -e "\033[0;31m[KO]\033[0m"
fi

echo ""
echo "==== LAUNCHING TESTS FOR x CONVERSION ===="

echo "--> Basic tests"
./test x_basic > ./results/x_tests_basic.txt
./ft_test x_basic > ./results/x_tests_ft_basic.txt

if diff ./results/x_tests_basic.txt ./results/x_tests_ft_basic.txt >> ./results/diff.txt ; then
	echo -e "\033[0;32m[OK]\033[0m"
else
	echo -e "\033[0;31m[KO]\033[0m"
fi

echo "--> Special cases"
./test x_special > ./results/x_tests_special.txt
./ft_test x_special > ./results/x_tests_ft_special.txt

if diff ./results/x_tests_special.txt ./results/x_tests_ft_special.txt >> ./results/diff.txt ; then
	echo -e "\033[0;32m[OK]\033[0m"
else
	echo -e "\033[0;31m[KO]\033[0m"
fi
