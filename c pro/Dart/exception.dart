void main()
{
//   print("CASE 1");
//   //Case 1:When you know the exception to be thrown, use ON Clause
//   try
//   {
//     int result= 12 ~/ 0;
//     print("The result is $result");
//   } on IntegerDivisionByZeroException
//   {
//     print("Cannot Divide by Zero");
//   }
//   print("");
  
//   print("Case 2");
//   //Case 2: When you dont know the exception use Catch Clause
//   try
//   {
//     int result=12~/0;
//     print("The result is $result");
//   } catch(e)
//   {
//     print("The exception thrown is $e");
//   }
//   print("");
  
//   print("CASE 3");
//   //Case 3: Using STACK TRACE to know the event occured before exception
//   try
//   {
//     int result=12~/0;
//     print("The result is $result");
//   } catch(e,s)
//   {
//     print("The Exception thrown is $e");
//     print("STACK TRACE\n $s");
//   }
  
//   print("");
  
  print("CASE 4");
  //CASE 4: Whenever there is an Exception or not Finally Clause is executed
  try
  {
    int result =12~/3;
    print("The result is $result");
  } catch(e)
  {
    print("The exception thrown is $e");
  } finally
  {
    print("This is in FINALLY Clause and is executed always");
  }
}
