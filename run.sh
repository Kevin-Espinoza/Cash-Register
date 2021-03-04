
# run.sh

# Compile 
g++ -o main.o main.cpp Register.cpp registerState.cpp -std=c++17
# Run
./main.o
# Clean up files
rm *.o
