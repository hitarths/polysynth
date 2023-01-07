TIMEOUT=60 # 60 seconds
KILL_TIMEOUT=10  # Kill the process after 10 seconds if not exited after sending terminate signal
OUTPUT_FILE=polysynth-outputs.csv
echo "benchmark, result" > $OUTPUT_FILE
for name in archimedes berkeley closest_cube_root closest_square_root cohendiv consecutive_cubes dijkstra_ind dijsktra euclidex1 euclidex2 fermat1 fermat2_ind firefly floor_square_root friction illinois lcm1 mannadiv_Carre mannadiv_Cube mannadiv_ind mesi moesi petter10 petter3 petter5 polynomial_approx positive_square_with_holes positive_square_with_number_holes readerswriters square_roots sum_of_two_vars wensley_division
do
cmd="timeout -k $KILL_TIMEOUT $TIMEOUT python3 Code/synthesizer.py --filename benchmarks-polysynth/$name.c --target ./polysynth-outputs/$name/"
echo "Running $cmd..."
output=$(eval $cmd || echo "Timeout")


if [[ "$output" == "Timeout" ]];
then
	echo "$name, $output" >> $OUTPUT_FILE
else
	echo "$name, SUCCESS" >> $OUTPUT_FILE
fi
done
