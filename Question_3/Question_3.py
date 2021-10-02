import numpy as np
from multiprocessing import Process,Queue

def calc_loop(i,mat_a,mat_b,mat_c):
	res = []
	for j in range(len(mat_b[0])):
		res.append(mat_a[i][j] * mat_b[i][j])
	
	mat_c.put(res)
	
def print_mat(mat_len, mat_c):
	print("Matrix multiplication Result :")
	for i in range(mat_len):
		print(mat_c.get())
		
if __name__ == '__main__':

	mat_c = Queue()
	process_list = []
	
	mat_a = [[3, 4],
			 [2, 9]]
	
	mat_b = [[5, 5],
			 [5, 5]]
	
	for i in range(len(mat_a)):
		current_process = Process(target=calc_loop, args=(i,mat_a,mat_b,mat_c))
		process_list.append(current_process)
		current_process.start()
		
	print_mat(len(mat_a),mat_c)