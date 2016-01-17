Microduino-IDE for Mac
==============
> Get started using the Microduino microcontroller to power your project with a Mac

## Intro

Microduino is a little device thats roughly the size of a quarter used to power DIY electronics projects. It has a main board, a [Core](http://microduino.cc/module/view?id=53d89a05c69eee000055f525) or [Core+](http://microduino.cc/module/view?id=53d7037cb6c69d00003ede53), that does all of the processing and logic, a separate board, [USBTTL](http://microduino.cc/module/view?id=53d89ca1c69eee000055f534), to make a connection to your computer through a USB cable and then of course every sensor you can imagine, from [a GPS kit](http://microduino.cc/module/view?id=53fc37b06424c90000c36a1d) to a [Quadcopter](http://microduino.cc/module/view?id=5452f50af0820c452ed7c0d7). However, the company is not very Mac friendly, at least at first, so I wanted to supplement their guides with my own experience. Hopefully this guide will help you get started if you're lucky enough to own a Mac!

## The Getting Started Guide
> Already have the Arduino software installed? Add Microduino support manually with [this special guide for you](DIY Modification) or follow this automatic installation process:

1. [Download the Project as Zip](https://github.com/KyleKing/Microduino-IDE/archive/master.zip)
2. Open the "Microduino IDE" folder and move the arduino.app file into your application folder
3. From the applications folder, open Arduino and check for the Microduino boards:
   ![Image](DIY Modification/Guide Images/3.png)
4. Then move on to the drivers section:

## How to Install the Necessary Drivers
> Microduino needs a special driver

1. From the unzipped folder, select the "drivers" folder and double click the .dmg to install
2. Once done installing, restart your computer
3. It should work from here! Here is what my serial port connection looks like:
   ![Image](DIY Modification/Guide Images/4.png)

## FAQ
If you have any questions feel free to [start an issue](https://github.com/KyleKing/Microduino-IDE/issues)

## Guides and Sample Code
> Find official resources and code here:

- [Project Tutorials](https://www.microduino.cc/project)
- [Sample Code](https://github.com/Microduino/Microduino_Tutorials) - very useful
- [Wiki - support and tutorials](https://www.microduino.cc/wiki/index.php?title=Main_Page)

## References
- The Microduino Driver is [available here](http://www.ftdichip.com/Drivers/VCP.htm)
- [The Precursor to this Guide](https://www.microduino.cc/project/view?id=5482ba0248f8313548d82b8c)
