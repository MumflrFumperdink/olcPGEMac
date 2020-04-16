# olc::PGE 2.0 for Mac

The [PixelGameEngine 2.0](https://github.com/OneLoneCoder/olcPixelGameEngine), by [OneLoneCoder](https://onelonecoder.com/), has finally been fully ported to Mac in only the header file! The dependency that you must have is:

  - libpng (May be installed with [brew](https://brew.sh/), use the command ```brew install libpng```)

That's it!

## Installation

### Xcode Installation

First, make sure you have Xcode, and if not, download it. All you need to get the project up and running in Xcode is to use the Shell script called, "setup.sh". Make sure you have all of the dependencies installed:

```sh
$ cd olcPGEMac
$ ./setup.sh
```
Then, you should open up Xcode (you should quit it if it is already open) and "Create a new Xcode Project". In the macOS tab, you should see a OneLoneCoder section with a PGE app:

![Image1](https://i.imgur.com/uYUP1xW.png)

Once you name your app, and save it, you should see a screen like the following. Click the "Signing and Capabilities" tab at the top:

![Image2](https://i.imgur.com/PsQDDqW.jpg)

Once you are there, go down to the "Hardened Runtime" section and click on "Disable Library Validation":

![Image3](https://i.imgur.com/ku48xJZ.jpg)

And that's it! You can go to main.cpp in the folder on the left to start coding. Build it first to make sure it works!

### Command Line Usage

Simply go inside the OneLoneCoder folder - there's a makefile. Use it in the terminal by typing this:

```sh
$ cd OneLoneCoder/PGE\ App.xctemplate
$ make
```

You should end up with a file called 'ouput'. It should open a window like this:

![Image4](https://i.ibb.co/hsz9SMF/Screen-Shot-2019-08-12-at-11-18-52-PM.png)
