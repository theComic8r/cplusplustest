TARGETS = grade

.PHONY: $(TARGETS)

grade:
	@-cd prob01 && make build && make test
	@cd prob01 && make grade
	@-cd prob02 && make build && make test
	@cd prob02 && make grade
	@python3 mergeresults.py prob01/results.json prob02/results.json