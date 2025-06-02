EXERCISES = ex00 ex01 ex02 ex03 ex04 ex05

all: $(EXERCISES)

$(EXERCISES):
	$(MAKE) -C $@

clean:
	for dir in $(EXERCISES); do \
		$(MAKE) -C $$dir clean; \
	done

fclean:
	for dir in $(EXERCISES); do \
		$(MAKE) -C $$dir fclean; \
	done

re: fclean all

.PHONY: all clean fclean re $(EXERCISES)