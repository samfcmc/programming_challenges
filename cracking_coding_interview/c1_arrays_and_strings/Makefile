CC=gcc
CFLAGS=
EX1=ex1_string_unique_chars
TEST_DIR=tests
EX1_TEST_DIR=$(TEST_DIR)/ex1

ex1: $(EX1).o
	$(CC) -o $(EX1) $(EX1).c $(CFLAGS)

test_ex1: ex1
	./$(EX1) < $(EX1_TEST_DIR)/1.in > $(EX1_TEST_DIR)/1.out && diff $(EX1_TEST_DIR)/1.out $(EX1_TEST_DIR)/1.expected

test: test_ex1

all: ex1

clean:
	rm *.o $(EX1)
