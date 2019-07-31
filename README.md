# olc::PGE for Mac

The [PixelGameEngine](https://github.com/OneLoneCoder/olcPixelGameEngine), by [OneLoneCoder](https://onelonecoder.com/), has finally been fully ported to Mac! The dependencies that you must have are:

  - Xcode
  - OpenGL 3.0 (Installed with developer tools)
  - libpng

That's it! This implementation of the library uses the native Cocoa api for Mac, using a modified library from [xslattery](https://github.com/xslattery/Cocoa-OpenGL-Windowing-Lib).

#### Example:

![Image](https://i.ibb.co/TLJP3PC/Screen-Shot-2019-07-30-at-10-06-35-AM.png)

### Installation

All you need to get the project up and running in Xcode is to use the Shell script called, "setup.sh". Make sure you have all of the dependencies installed:

```sh
$ cd olcPGEMac
$ ./setup.sh
```
Then, you should open up Xcode (you should quit it if it is already open) and "Create a new Xcode Project". In the macOS tab, you should see a OneLoneCoder section with a PGE app:

![Image1](https://i.ibb.co/g4pBXQn/Screen-Shot-2019-07-29-at-10-53-33-PM.png)

Once you name your app, and save it, open the App folder. Inside is the main.cpp file. Build it first to make sure it works!

### Usage for those whom hate Xcode

If you do not want to use Xcode, then simply go inside the OneLoneCoder folder. Go in to the terminal and type this:

```sh
$ cd OneLoneCoder/PGE App.xctemplate
$ make
```

You should end up with a file called 'ouput'. It should open a window like this:

![Image2](https://i.ibb.co/1T9FzqK/Screen-Shot-2019-07-31-at-5-16-18-PM.png)
