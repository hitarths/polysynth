TIMEOUT=60 # 60 seconds; Increase it as required
KILL_TIMEOUT=10  # Kill the process after 10 seconds if not exited after sending terminate signal
OUTPUT_FILE=sketch-outputs.csv

echo "Benchmark,Result,Time" > $OUTPUT_FILE
for name in archimedes.sk closest_cube_root.sk closest_square_root.sk cohendiv.sk consecutive_cubes.sk euclidex2.sk fermat1.sk fermat2_ind.sk floor_square_root.sk friction.sk if_else_trivial.sk lcm1.sk mannadiv_carre.sk mannadiv_cube.sk mannadiv_ind.sk petter3.sk petter5.sk polynomial_approximation.sk positive_square_with_holes.sk positive_square_with_number_holes.sk prodbin.sk square_roots_appro.sk wensley_division.sk
do
OUTPUT_FILE_FOR_SKECTH="sketch-outputs/$name.output"
cmd="timeout -k $KILL_TIMEOUT $TIMEOUT ./external-tools/sketch-1.7.6/sketch-frontend/sketch --fe-fpencoding AS_FIXPOINT benchmarks-sketch/$name"
echo "Running $cmd..."
start_time=`date +%s.%3N`
$cmd > $OUTPUT_FILE_FOR_SKECTH 2>&1
end_time=`date +%s.%3N`
time_taken=`echo $end_time - $start_time | bc`


exists=$(grep -c "DONE" $OUTPUT_FILE_FOR_SKECTH)
if [[ $exists -gt 0 ]]; then
    echo "$name,SUCCESS,$time_taken" >> $OUTPUT_FILE
else
	echo "$name,FAILED, -" >> $OUTPUT_FILE
fi

done

