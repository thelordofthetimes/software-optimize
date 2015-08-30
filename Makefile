source=main.cpp
program_name=optimize
cc=g++

outdir=build/

all: $(program_name)


$(program_name): $(source)
	mkdir -p build
	$(cc) $(source) -o$(outdir)$(program_name)

run: all
	./build/$(program_name)

clean:
	rm -rf $(outdir)/*
