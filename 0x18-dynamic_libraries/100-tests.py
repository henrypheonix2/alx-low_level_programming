import ctypes

# Load the shared library
mylibrary = ctypes.CDLL('./mylibrary.so')

# Call the C function from Python
result = mylibrary.add(5, 3)
print("Result:", result)
