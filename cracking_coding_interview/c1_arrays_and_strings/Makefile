CC=gcc
CFLAGS=

EX1=ex1_string_unique_chars
EX2=ex2_reverse_string
EX3=ex3_remove_duplicates
EX7=ex7_set_matrix_zero

TEST_DIR=tests
EX1_TEST_DIR=$(TEST_DIR)/ex1
EX2_TEST_DIR=$(TEST_DIR)/ex2
EX3_TEST_DIR=$(TEST_DIR)/ex3

all: ex1 ex2 ex3 ex7

test: test_ex1 test_ex2 test_ex3

ex1: $(EX1).o
	$(CC) -o $(EX1) $(EX1).c $(CFLAGS)

ex2: $(EX2).o
	$(CC) -o $(EX2) $(EX2).c $(CFLAGS)

ex3: $(EX3).o
	$(CC) -o $(EX3) $(EX3).c $(CFLAGS)

ex7: $(EX7).o
		$(CC) -o $(EX7) $(EX7).c $(CFLAGS)

test_ex1: ex1
	./$(EX1) < $(EX1_TEST_DIR)/1.in > $(EX1_TEST_DIR)/1.out && diff $(EX1_TEST_DIR)/1.out $(EX1_TEST_DIR)/1.expected

test_ex2: ex2
	./$(EX2) < $(EX2_TEST_DIR)/1.in > $(EX2_TEST_DIR)/1.out && diff $(EX2_TEST_DIR)/1.out $(EX2_TEST_DIR)/1.expected

test_ex3: ex3
	./$(EX3) < $(EX3_TEST_DIR)/1.in > $(EX3_TEST_DIR)/1.out && diff $(EX3_TEST_DIR)/1.out $(EX3_TEST_DIR)/1.expected

clean:
	rm *.o $(EX1) $(EX2) $(EX3) $(EX7) $(TEST_DIR)/*/*.out
