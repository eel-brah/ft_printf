clear && make all >/dev/null && ./libftprintf.a && make fclean >/dev/null && \
if diff -a -u Ft_My_Output.txt Ft_Real_Output.txt; then
    echo "The files are identical."
	make fclean >/dev/null
fi
# Add a slight delay
sleep 0.2

# Clean the project
make fclean >/dev/null