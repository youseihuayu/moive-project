# Self-Evaluation

## Name(s): Shihua Yu

Out of 25 points. Use output.txt created using 
`./create-output.sh > output.txt 2>&1` for guidance.

Complete all questions with "Q:"

Q: Does the program compile and run to completion: Yes

- If the program does not compile or gives a segmentation error when run, 
the maximum possible grade is 50%. No need to continue with the rest of self-evaluation

Q: All public functions have been implemented: ENTER_NUMBER (0, I have implemented all public functions)

- -2 for each functionality not implemented

For each command, state Full, Partial or None to indicate 
if it has been fully, partially or not implemented at all.
Explain any partial implementations.

Inventory: TODO(student) -- fully
History: TODO(student)-- fully
Borrow: TODO(student)-- fully
Return: TODO(student)-- fully


Q: -1 for each compilation warning, min -3: ENTER_NUMBER (0 no warnings)

- Check under *1. Compiles without warnings*
- If the warning message is addressed in README.md, including how the programmer tried to address it, no deductions

Q: -1 for each clang-tidy warning, min -3: ENTER_NUMBER (0, no warnings)

- Check under *3. clang-tidy warnings*
- If the warning message is addressed in README.md, including how the programmer tried to address it, no deductions

Q: -1 for each clang-format warning, min -3: ENTER_NUMBER (0, passes and no warnings)

- Check under *4. clang-format does not find any formatting issues*


Q: -2 for any detected memory leak: ENTER_NUMBER (0, no memory leak)

- Check under *5. No memory leaks using g++*
- Check under *6. No memory leaks using valgrind*

Q: Do the tests sufficiently test the code: ENTER_NUMBER (0, yes the test passed successfully)

- -1 for each large block of code not executed
- -2 for each function that is never called when testing
- Check under *7. Tests have full code coverage* paying attention to *The lines below were never executed*

Q: Are all functions in .h and .cpp file documents (min -3): ENTER_NUMBER (0, yes has all .h and .cpp files)

- -1 for each function not documented

## Location of error message or functionality

State the file and function where the information can be found

invalid command code: TODO(student)
---- in Inventory.cpp, transaction() function, we have if statement to check the validation 

invalid movie type: TODO(student)
---- in Inventory.cpp, readMovieFile() function, we have if statement to check the validation 

invalid customer ID: TODO(student)
---- Inventory.cpp (), readCustomerFile() function, we have if statement to check the validation 
 
invalid movie: TODO(student)
---- HashTable.cpp, get() and contains() functions we have if statement to check the validation 

factory classes: TODO(student)
---- Factory.h and Factory.cpp

hashtable: TODO(student) (explain what the hashtable is used for)
---- used to store movies information by using vector<vector<Movie*>> movieTable, and sort the movie in ascending order.  

container used for comedy movies: TODO(student)
---- HashTable class

function for sorting comedy movies: TODO(student)
---- operator< overload to sort the comedy movies

function where comedy movies are sorted: TODO(student)
---- operator< overload to sort the comedy movies

functions called when retrieving a comedy movie based on title and year: TODO(student)
---- in HashTable class get() function

functions called for retrieving and printing customer history: TODO(student)
---- in Customer class, printHistory() function

container used for customer history: TODO(student)
---- vector<string> history in Customer.h

functions called when borrowing a movie: TODO(student)
---- in Inventory class, borrowMovie() function 

explain borrowing a movie that does not exist: TODO(student)
---- in transcation function, I have get(movieDetails) to find the specific movie, if the movie does not exist, it will return nullptr

explain borrowing a movie that has 0 stock: TODO(student)
---- in borrowMovie() function,I have if-else statement to check the stock number, if the stock is 0, will print out "out of stock" warning.

explain returning a movie that customer has not checked out: TODO(student)
---- in inventory class, I created map<int, Movie *> borrowedInfo; this map will help me check if the customer has borrowed the movie or not. 

any static_cast or dynamic_cast used: TODO(student)
---- I used dynamic_cast to type cast the class type.


Q: Total points: ADD_ALL_POINTS (max 25)
