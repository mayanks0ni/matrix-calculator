import time
import numpy as np

def read_matrix(filename, n):
    matrix = []
    with open(filename, 'r') as file:
        for _ in range(n):
            row = list(map(float, file.readline().split()))
            matrix.append(row)
    return matrix

def write_time_to_file(filename, time_taken, n):
    with open(filename, 'a') as f:
        f.write(f"\nTime taken for {n}x{n} Matrix in Python: {time_taken:.4f} seconds\n")

def main():
    n = 500
    matrix1 = read_matrix("./sample matrix/matrix_500A.txt", n)
    matrix2 = read_matrix("./sample matrix/matrix_500B.txt", n)

    # Convert to numpy arrays for fast multiplication
    mat1_np = np.array(matrix1)
    mat2_np = np.array(matrix2)

    # Time the multiplication
    start_time = time.time()
    result = np.matmul(mat1_np, mat2_np)
    end_time = time.time()

    time_taken = end_time - start_time
    write_time_to_file("timeTakenPy.txt", time_taken, n)

if __name__ == "__main__":
    main()
