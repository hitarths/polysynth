TIMEOUT=60 # 60 seconds; Increase it as required
KILL_TIMEOUT=10  # Kill the process after 10 seconds if not exited after sending terminate signal
OUTPUT_FILE=rosette-outputs.csv

# if [[ $OSTYPE == 'darwin'* ]]; then
#   # 'macOS: run `brew install coreutils` to get access to gdate
#   alias gettime='gdate +%s.%3N'
# else
#   alias gettime='date %s.%3N'
# fi


echo "Benchmark,Result,Time (seconds)" > $OUTPUT_FILE, time
for name in archimedes_principle_real.rkt closes_square_root.rkt closest_cube_root_real.rkt cohendiv.rkt consequitive_cubes.rkt euclidx2.rkt fermat1.rkt fermat2_ind.rkt floor_square_Root.rkt friction.rkt gcd_dijkstra.rkt lcm1.rkt mannadiv_carre.rkt mannadiv_cube.rkt mannadiv_in.rkt petter3.rkt petter5.rkt polynomial_approx.rkt positive_square_with_hole_integers.rkt positive_square_with_hole_reals.rkt.rkt positive_square_with_number_hole_reals.rkt.bak.rkt square_root_floor.rkt wensley_division.rkt
do
cmd="timeout -k $KILL_TIMEOUT $TIMEOUT racket benchmarks-rosette/$name"
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
