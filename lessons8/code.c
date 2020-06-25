//A0~A9为模拟电压读取引脚，可不用设置输入输出。
/*电位器，两边接口接正负极，中间接口读取电压，通过旋转电位器旋钮可改变电压。*/

int sensorValue = 0;//模拟电压读取值

void setup()
{
  pinMode(A0, INPUT);//设置A0引脚为输入引脚，也可省略这步。
  Serial.begin(9600);
}

void loop()
{
  sensorValue = analogRead(A0);//通过analogRead()函数读取引脚的模拟电压。
  Serial.println(sensorValue);//打印读取的模拟电压值
  delay(10);
}