C_FLAGS=-Wall -g

clean:
	find . -executable -type f -exec rm -rf {} +

.PHONY: clean
