TIMEOUT=60 # 60 seconds; Increase it as required
KILL_TIMEOUT=10  # Kill the process after 10 seconds if not exited after sending terminate signal
OUTPUT_FILE=rosette-outputs.csv
echo "benchmark, time" > $OUTPUT_FILE
for name in archimedes_principle_real.rkt closes_square_root.rkt closest_cube_root_real.rkt cohendiv.rkt consequitive_cubes.rkt euclidx2.rkt fermat1.rkt fermat2_ind.rkt floor_square_Root.rkt friction.rkt gcd_dijkstra.rkt lcm1.rkt mannadiv_carre.rkt mannadiv_cube.rkt mannadiv_in.rkt petter3.rkt petter5.rkt polynomial_approx.rkt positive_square_with_hole_integers.rkt positive_square_with_hole_reals.rkt.rkt positive_square_with_number_hole_reals.rkt.bak.rkt square_root_floor.rkt sum_of_two_vars_real.rkt wensley_division.rkt
do
cmd="timeout -k $KILL_TIMEOUT $TIMEOUT racket benchmarks-rosette/$name"
echo "Running $cmd..."
output=$(eval $cmd || echo "Timeout")

if [ "$output" == "Timeout" ];
then
	echo "$name, $output" >> $OUTPUT_FILE
else
	echo "$name, SUCCESS" >> $OUTPUT_FILE
fi

# echo "$name, $output" >> $OUTPUT_FILE
done
