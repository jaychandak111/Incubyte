*1. Create a String calculator with a method int Add(string numbers)*
<br>*2.The method can take 0, 1, or 2 numbers and will return their sum.*
<br>*3.An empty string will return 0.*
<br>*Example inputs: “”, “1”, or “1,2”*
<br>*4.Start with the simplest test case of an empty string. Then 1 number. Then 2 numbers.
Remember to solve things as simply as possible, forcing yourself to write tests for things you didn’t think about.
Remember to refactor after each passing test.*
<br>*5.Allow the Add method to handle an unknown number of arguments/numbers.
Allow the Add method to handle new lines between numbers (instead of commas).*
<br>*6.Example: “1\n2,3” should return 6.
Example: “1,\n” is invalid, but you don’t need a test for this case.*
<br>*7.Only test correct inputs – there is no need to deal with invalid inputs for this kata.
Calling Add with a negative number will throw an exception “Negatives not allowed: “ listing all negative numbers that were in the list of numbers.*
<br>*8.Example “-1,2” throws “Negatives not allowed: -1”
Example “2,-4,3,-5” throws “Negatives not allowed: -4,-5”*
<br>*9.Numbers bigger than 1000 should be ignored.
Example: “1001,2” returns 2*




