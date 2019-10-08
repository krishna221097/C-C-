void main()
{
  findVol(10);
    print("");
  findVolume(10,breadth:5,height:20);
  print("");
  findVolume(10,height:20,breadth:5);//named Parameters

}
int findVolume(int length,{int breadth,int height})
{
  print("Length is $length");
  print("Breadth is $breadth");
  print("Height is $height");
  print("Volume is ${length * breadth * height}");
}

int findVol(int length,{int breadth=2,int height=20})
{
  print("Length is $length");
  print("Breadth is $breadth");
  print("Height is $height");
  print("Volume is ${length * breadth * height}");
}
