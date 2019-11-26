#include "pch.h"

using namespace System;
using namespace System::IO::Ports;


//------------Make LED BLINK CODE-----------
//int main(array<System::String ^> ^args)
//{
//	SerialPort port("COM5", 9600);
//	port.Open();
//	while (true)
//	{
//		int input = Convert::ToInt32(Console::ReadLine());
//		if (input == 1)
//		{
//			port.Write("A");
//			Console::WriteLine(port.ReadLine());
//		}
//		else
//		{
//			port.Write("b");
//		}
//	}
//    return 0;
//}

//------------ANALOG JOY STICK CODE-----------
int main(array<System::String^>^ args)
{
	SerialPort port("COM5", 9600);
	port.Open();
	String^ line = "";
	String^ Direction = "";
	int value = 0;


	while (true)
	{
		line = port.ReadLine();
		array<String^>^ StringArray = line->Split(':');

		Direction = StringArray[0];
		value = Convert::ToInt32(StringArray[1]);

		Console::WriteLine(Direction);
		Console::WriteLine(value);
	}

	return 0;
}
