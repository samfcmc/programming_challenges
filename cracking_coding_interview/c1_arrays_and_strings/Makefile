CC=gcc
CFLAGS=

EX1=ex1_string_unique_chars
EX2=ex2_reverse_string

TEST_DIR=tests
EX1_TEST_DIR=$(TEST_DIR)/ex1
EX2_TEST_DIR=$(TEST_DIR)/ex2


ex1: $(EX1).o
	$(CC) -o $(EX1) $(EX1).c $(CFLAGS)

ex2: $(EX2).o
	$(CC) -o $(EX2) $(EX2).c $(CFLAGS)

test_ex1: ex1
	./$(EX1) < $(EX1_TEST_DIR)/1.in > $(EX1_TEST_DIR)/1.out && diff $(EX1_TEST_DIR)/1.out $(EX1_TEST_DIR)/1.expected

test_ex2: ex2
	./$(EX2) < $(EX2_TEST_DIR)/1.in > $(EX2_TEST_DIR)/1.out && diff $(EX2_TEST_DIR)/1.out $(EX2_TEST_DIR)/1.expected

test: test_ex1

all: ex1 ex2

clean:
	rm *.o $(EX1) $(EX2)

