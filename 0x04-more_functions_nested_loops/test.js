const size = 4;
let i = 1;
let j;

while (i <= size) {
	j = size;
	while (j > 0) {
		if (j <= i) {
			process.stdout.write('#');
		} else {
			process.stdout.write(' ');
		}
		j--;
	}
	console.log();
	i++;
}
