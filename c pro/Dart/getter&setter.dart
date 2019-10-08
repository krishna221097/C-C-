
class Student
{
  String name; //Instance Variable with default Getter and Setter
  double _percent; //Private Instance variable for its own library
  
  //Instance variable with custom setter
  void setpercentage(double marksSecured) => _percent=(marksSecured/500);
  //Instance variable with Custom getter
  void getpercentage() => print("$_percent");
}
void main()
{
  Student s=Student();
  s.setpercentage(200.0);
  s.getpercentage();
}
