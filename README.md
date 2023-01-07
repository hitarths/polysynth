# PolySynth

Polynomial Program Synthesis Tool: PolySynth

We have provided these instructions for Linux machine (e.g., Ubuntu). Most of these commands will also work on MacOS. 

## Basic Setup:
1. Install Python3 on your computer. Also install pip with command: `sudo apt-get install python3-pip`.

2. Clone the Git repository https://github.com/hitarths/polysynth

3. Change your directory to the root folder of cloned repository and install all the required packages by running the following command: 

	pip install lark==1.1.2 z3-solver==4.11.2.0 sympy==1.11.1

Once you are done with the basic setup, we are ready to run our code on any example.

## Running the command:

Follow the following steps to run the synthesizer on a given benchmark:

1. Open the terminal and change the directory to `Code/`

2. All the examples/benchmarks are stored in the folder `benchmarks-polysynth`

3. The easiest way to run an example is to type the following command:
`sh run_polysynth_all_benchmarks.sh` from the root directory of the repository.

4. Suppose you want to run the synthesizer for the example `Closest_cube_root`, then you would run the following command:
`python3 synthesizer.py --filename Examples/Closest_cube_root/closest_cube_root.c`



## Options for the `synthesizer.py`

The main options for the `synthesizer.py` are the following two:

1. `--filename`: The path to the template for the polynomial preogram with holes that has to be synthesized
2. `--target`: The path to the folder where the output files and synthesized program should be saved


Few other technical arguments that can be passed are given in the following. In general, one can ignore setting them and the synthesizer will run using the default configuration. 

1. `--apply-heuristics`: Set it to `0` to disable our abstraction refinement based heuristics, otherwise `1` (default is `1`)
2. `--apply-handelman`: Set it to `0` to disable applying handelman theorem to generate QP, otherwise `1` (default is `1`)
3. `--only-smtlib-files`: Set it to `1` to only generate `smtlib2` files that can be passed to other solvers. The default value is `0` and the `z3` solver will be automatically be used to solve the QP and synthesize the program.
4. `--h-degree`: The `h` degree is used during application of Handelman theorem and Putinar's Stallensatze. The default value is `2`. Please refer to the paper for more details.  


## Installing Rosette/Racket and Sketch

First install the Racket with following commands:

		sudo add-apt-repository ppa:plt/racket

		sudo apt update

		sudo apt-get install racket

Now, install Rosette:

		raco pkg install rosette

Now, you should be able to run racket with command `racket`.

For setting up Sketch, please follow the instructions on the link: https://github.com/asolarlez/sketch-frontend/wiki.


## How to run Polysynth, Rosette and Sketch on the benchmarks?

We have provided the shell script to run Rosette/Sketch on single example as well as on all the supported benchmarks.

1. To run a single benchmark on Rosette:

		./run_rosette_one_example.sh

2. To run a single benchmark on Sketch:
		./run_sketch_one_example.sh

3. To run a single benchmark on PolySynth:

		./run_polysynth_one_example.sh

4. To run a all supported benchmark benchmark on PolySynth:
		./run_polysynth_all_benchmarks.sh

5. To run a all supported benchmark benchmark on Rosette:

		sh run_rosette_all_benchmarks.sh

6. To run a all supported benchmark on Sketch:

		sh run_sketch_all_benchmarks.sh


You can open these shell file to check the full commands.