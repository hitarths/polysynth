import csv

BENCHMARKS = ['archimedes', 'berkeley', 'closest_cube_root', 'closest_square_root', 'cohendiv', 'consecutive_cubes', 'dijkstra_ind', 'dijsktra', 'euclidex1', 'euclidex2', 'fermat1', 'fermat2_ind', 'firefly', 'floor_square_root', 'friction', 'illinois', 'lcm1', 'mannadiv_carre', 'mannadiv_cube', 'mannadiv_ind', 'mesi', 'moesi', 'petter3', 'petter5', 'polynomial_approx', 'positive_square_with_holes', 'positive_square_with_number_holes', 'square_roots', 'wensley_division']
HEADER = ["Benchmark", "PolySynth Result", "PolySynth Time", "Rosette Result", "Rosette Time", "Sketch Result", "Sketch Time"]

data_dict = dict()



for bench in BENCHMARKS:
	data_dict[bench.lower()] = {
	"PolySynth Result": "None", 
	"PolySynth Time": "None",
	"Rosette Result": "None", 
	"Rosette Time" : "None",
	"Sketch Result": "None", 
	"Sketch Time": "None"}


final_output = "compile-table.csv"

sketch_csv = "sketch-outputs.csv"
rosette_csv = "rosette-outputs.csv"
polysynth_csv = "polysynth-outputs.csv"


sketch_file = csv.reader(open(sketch_csv))
rosette_file = csv.reader(open(rosette_csv))
polysynth_file = csv.reader(open(polysynth_csv))

print("Sketch:")
for row in sketch_file:
	benchmark_name = row[0][:-3].lower()
	print("\t", benchmark_name)
	if benchmark_name in data_dict:
		print("\t", benchmark_name)
		data_dict[benchmark_name]["Sketch Result"] = row[1]
		data_dict[benchmark_name]["Sketch Time"] = row[2]
print("Rosette:")
for row in rosette_file:
	benchmark_name = row[0][:-4].lower()
	# print("\t", benchmark_name)
	if benchmark_name in data_dict:
		print("\t", benchmark_name)
		data_dict[benchmark_name]["Rosette Result"] = row[1]
		data_dict[benchmark_name]["Rosette Time"] = row[2]


print("PolySynth:")
for row in polysynth_file:
	benchmark_name = row[0].lower()
	# print("\t", benchmark_name)
	if benchmark_name in data_dict:
		print("\t", benchmark_name)
		data_dict[benchmark_name]["PolySynth Result"] = row[1]
		data_dict[benchmark_name]["PolySynth Time"] = row[2]



def create_final_file():
	final_file = csv.writer(open(final_output, "w"))
	final_file.writerow(HEADER)
	for bench in BENCHMARKS:
		row = [bench]
		for head in HEADER[1:]:
			row.append(data_dict[bench.lower()][head])
		final_file.writerow(row)

if __name__ == "__main__":
	create_final_file()



