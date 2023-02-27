TIMEOUT=60 # 60 seconds; Increase it as required
KILL_TIMEOUT=10  # Kill the process after 10 seconds if not exited after sending terminate signal
OUTPUT_FILE=rosette-outputs.csv

echo "Benchmark,Result,Time (seconds)" > $OUTPUT_FILE
for name in archimedes berkeley closest_cube_root closest_square_root cohendiv consecutive_cubes dijkstra_ind dijsktra euclidex1 euclidex2 fermat1 fermat2_ind firefly floor_square_root friction illinois lcm1 mannadiv_Carre mannadiv_Cube mannadiv_ind mesi moesi petter10 petter3 petter5 polynomial_approx positive_square_with_holes positive_square_with_number_holes readerswriters square_roots wensley_division
do
cmd="timeout -k $KILL_TIMEOUT $TIMEOUT racket benchmarks-rosette/$name.rkt"
echo "Running $cmd..."

start_time=`date +%s.%3N`
output=$(eval $cmd || echo "Timeout")
end_time=`date +%s.%3N`
time_taken=`echo $end_time - $start_time | bc`

if [ "$output" == "Timeout" ];
then
	echo "$name, TIMEOUT, -" >> $OUTPUT_FILE
else
	echo "$name, SUCCESS, $time_taken" >> $OUTPUT_FILE
fi

# echo "$name, $output" >> $OUTPUT_FILE
done
