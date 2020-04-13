rm -rf test;
mkdir -p test;
echo "Enter the coordinates of current location.
x coordinate : y coordinate : Closest food from [18 86] is located at [18 76]
Enter the coordinates of current location.
x coordinate : y coordinate : Closest food from [97 27] is located at [89 57]
Enter the coordinates of current location.
x coordinate : y coordinate : Closest food from [69 7] is located at [55 38]
Enter the coordinates of current location.
x coordinate : y coordinate : Closest food from [10 94] is located at [18 76]
Enter the coordinates of current location.
x coordinate : y coordinate : Closest food from [36 27] is located at [55 38]" > ./test/expected;

sample_input="18\n86-97\n27-69\n7-10\n94-36\n27";
IFS='-' read -r -a array <<< "$sample_input";
for element in "${array[@]}"
do
  echo "$element" | ~/runcx abc >> ./test/actual;
done

cmp ./test/actual ./test/expected >> ./test/message;

if [ $? == 0 ]
then
  echo "✅  All samples are working"
else
  echo "❎  Some sample is failing"
fi

rm -rf test
