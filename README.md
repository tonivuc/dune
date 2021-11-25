# TTK22 Final Project: Implementing ExpandingSquare into DUNE

  

This repository is a fork of DUNE. The branch `feature/ttk22-expanding-square` contains the proposed code.

  

## Project goal:

  

Create a maneuver that starts in the center and expands outward in a square snail shape. Can be used for surveying for example.

  

## How to run this repository

  

First there are some prerequisites to using DUNE at all. See them [here](https://github.com/LSTS/dune/wiki/Installing-Prerequisites). After you have done that, clone the repository and checkout into the `feature/ttk22-expanding-square` branch. You will need a custom IMC.xml file, but we will get back to that.

  

### Build the repository using the command line

  
  

1. Create a dedicated folder for DUNE's compiled binaries:

  

```sh

mkdir $HOME/dune/build

```

  

2. Change your current working directory to the folder you just

created.

  

```sh

cd  $HOME/dune/build

```

  

3. Run CMake to generate GNU Makefiles.

  

```sh

cmake ../dune

```

  

4. Call GNU Make to build everything:

  

```sh

make

```

  
  

### Add the custom IMC.xml file

  

First clone the IMC repository into your DUNE project using the following command inside the DUNE build folder.

  

```sh

make imc_download

```

  

This command will clone IMC to the subfolder IMC of your build folder.

  

**You now need to replace IMC.xml** with the file I created, which can be found [here](https://github.com/tonivuc/imc/blob/feature/ttk22-expanding-square/IMC.xml).

  

Now you can run the following in order to generate the updated IMC files in DUNE:

```sh

make imc

```

### Run the DUNE simulator

First be in the build folder and build the DUNE project with:

```sh

make

```

Then run the DUNE simulator with the lauv-xplore-1 vehicle (it is the only one configured with the ExpandingSquare maneuver)

```sh

./dune -c lauv-xplore-1 -p Simulation

```

### Send the ExpandingSquare IMC message to start the maneuver

Inside the build folder (in a separate terminal) run

```sh

make test_expanding_square

```

then run

```sh

./test_expanding_square 127.0.0.1 6002 30

```

to send an IMC message to start the maneuver to the simulated vehicle.

  

### See the maneuver in action

Start [Neptus](https://github.com/LSTS/neptus) and the lauv-xplore-1 vehicle should show up automatically. Instructions for installing are in [their wiki](https://github.com/LSTS/neptus/wiki).

## How to change the parameters in the ExpandingSquare IMC message
Line 60 to 70 in test_expanding_square.cpp allow for editing the ExpandingSquare maneuver parameters. When this is done that specific file needs to be recompiled like outline above.