# PolySynth

Polynomial Program Synthesis Tool: PolySynth

## Basic Setup:
1. Install Python3 on your computer. On Mac, you can follow this tutorial: https://docs.python-guide.org/starting/install3/osx/

2. Clone the Git repository https://github.com/hitarths/polysynth

3. Change your directory to the root folder of cloned repository and install all the required packages by running the following command: 

	`pip install lark==1.1.2 z3-solver==4.11.2.0 sympy==1.11.1`

Once you are done with the basic setup, we are ready to run our code on any example.

## Running the command:

Follow the following steps to run the synthesizer on a given benchmark:

1. Open the terminal and change the directory to `Code/`

2. All the examples/benchmarks are stored in the folder `benchmarks-polysynth`

3. The easiest way to run an example is to type the following command:
`sh run_polysynth_all_benchmarks`

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