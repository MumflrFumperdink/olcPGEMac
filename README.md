# olc::PGE 2.0 for Mac

The [PixelGameEngine 2.0](https://github.com/OneLoneCoder/olcPixelGameEngine), by [OneLoneCoder](https://onelonecoder.com/), has been officially fully ported to Mac in only the header file! __Make sure that your mac is at least on macOS 10.15__. The dependency that you must have is:

  - libpng (May be installed with [brew](https://brew.sh/), use the command ```brew install libpng```)

That's it!

## Using the Command Line

Simply go inside the "PGE App.xctemplate" folder - there's a makefile. Use it in the terminal by typing this:

```sh
$ cd OneLoneCoder/PGE\ App.xctemplate
$ make
```

You should end up with a file called 'ouput'. It should open a window like this:

![Image4](https://i.ibb.co/hsz9SMF/Screen-Shot-2019-08-12-at-11-18-52-PM.png)

## Xcode Installation

First, make sure you have Xcode, and if not, download it. All you need to get the project up and running in Xcode is to use the Shell script called, "setup.sh". Make sure you have all of the dependencies installed:

```sh
$ cd olcPGEMac
$ ./setup.sh
```
Then, you should open up Xcode (you should quit it if it is already open) and "Create a new Xcode Project". In the macOS tab, you should see a OneLoneCoder section with a PGE app:

![Image1](https://i.imgur.com/uYUP1xW.png)

Once you name your app, and save it, you should see a screen like the following. Now, before you can start using this with Xcode, you need to deal with the fact that libpng is unsigned otherwise you will recieve a runtime error. Here are the two ways to do that:

#### Use Your Own Developer Codesign

This method is preferred because you only need to do this once and then you can make as many projects as you like using libpng.

In the Terminal, execute this command to sign the library:
```sh
sudo codesign -f -s "YOURDEVELOPEREMAIL" /usr/local/lib/libpng*.dylib
```
If you get an ambiguous email error, try adding "Mac Developer: " at the start of the email quotations.

#### Disable Library Validation

This method will need to be done for every project that uses libpng.

Click the "Signing and Capabilities" tab at the top:

![Image2](https://i.imgur.com/PsQDDqW.jpg)

Once you are there, go down to the "Hardened Runtime" section and click on "Disable Library Validation":

![Image3](https://i.imgur.com/ku48xJZ.jpg)


That's it! You can go to main.cpp in the folder on the left to start coding. Build it first to make sure it works!
