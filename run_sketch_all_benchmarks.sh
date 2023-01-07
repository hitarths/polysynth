TIMEOUT=60 # 60 seconds; Increase it as required
KILL_TIMEOUT=10  # Kill the process after 10 seconds if not exited after sending terminate signal
OUTPUT_FILE=sketch-outputs.csv
echo "benchmark, time" > $OUTPUT_FILE
for name in Cohendiv.sk Euclidex2.sk Fermat1.sk Fermat2_ind.sk LCM1.sk Mannadiv_carre.sk Mannadiv_cube.sk Mannadiv_ind.sk Petter3.sk Petter5.sk Wensley.sk archimedes.sk closest_cube_root.sk closest_square_root.sk consec_cubes.sk floor_square_root.sk friction.sk if_else_trivial.sk polynomial_approximation.sk positive_square_with_holes.sk positive_square_with_number_holes.sk prodbin.sk square_roots_appro.sk sum_of_two_vars.sk
do
cmd="timeout -k $KILL_TIMEOUT $TIMEOUT ./external-tools/sketch-1.7.6/sketch-frontend/sketch --fe-fpencoding AS_FIXPOINT benchmarks-sketch/$name"
echo "Running $cmd..."
output=$(eval $cmd || echo "Timeout")
echo "$name, $output" >> $OUTPUT_FILE

# if [ "$output" == "Timeout" ];
# then
# 	echo "$name, $output" >> $OUTPUT_FILE
# else
# 	echo "$name, SUCCESS" >> $OUTPUT_FILE
# fi
# echo "$name, $output" >> $OUTPUT_FILE
done
