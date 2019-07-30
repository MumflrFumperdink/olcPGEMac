{\rtf1\ansi\ansicpg1252\cocoartf1671\cocoasubrtf600
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 # olc::PGE for Mac\
\
The [PixelGameEngine](https://github.com/OneLoneCoder/olcPixelGameEngine), by [OneLoneCoder](https://onelonecoder.com/), has finally been fully ported to Mac! The dependencies that you must have are:\
\
  - OpenGL 3.0\
  - libpng\
\
That's it! This implementation of the library uses the native Cocoa api for Mac, using a modified library from [xslattery](https://github.com/xslattery/Cocoa-OpenGL-Windowing-Lib).\
\
### Installation\
\
All you need to get the project up and running in Xcode is to use the Shell script called, "setup.sh". Make sure you have all of the dependencies installed:\
\
```sh\
$ cd OneLoneCoderMac\
$ ./setup.sh\
```\
Then, you should open up Xcode (you should quit it if it is already open) and "Create a new Xcode Project". In the macOS tab, you should see a OneLoneCoder section with a PGE app:\
\
![Image](https://i.ibb.co/g4pBXQn/Screen-Shot-2019-07-29-at-10-53-33-PM.png)\
\
Once you name your app, and save it, open the App folder. Inside is the main.cpp file. Build it first to make sure it works!}