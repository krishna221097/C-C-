void main()
{
  //Switch case Statement 
  String grade ='A';
  switch(grade)
  {
    case 'A':
      print("Excellent grade of A");
      break;
    case 'B':
      print("Very Good");
      break;
    default:
      print("Be happy");
} 
   //forloop
      for(int i=1;i<=10;i++)
      {
        if(i%2==0)
          print(i);
 
      }
  
  //For ..in loop
  List planetList=["Mercury","Venus","Earth","Mars"];
  for(String planet in planetList)
  {
    print(planet);
  }
  
  //break Keyword using labels nested for loops
  
  myOuterLoop:for(int i=1;i<=3;i++)
  {
    innerLoop:for(int j=1;j<=3;j++)
    {
      print("$i $j");
      if(i==2 && j==1)
      {
        break myOuterLoop;
      }
    }
  }
  
}
