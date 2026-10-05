CXX= gcc
CXXFLAGS = -std=c99
CXXFLAGS += -Wall -Werror -I.

SOURCES = main.c

ODIR = obj
OBJS = $(patsubst %,$(ODIR)/%,$(addsuffix .o, $(basename $(notdir $(SOURCES)))))

TARGET=codebase

RM= rm -f

.PHONY: all clean

all: $(TARGET)


$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(ODIR)/%.o: %.c | $(ODIR)
	$(CXX) -c -o $@ $<

$(ODIR):
	mkdir -p $@

clean:
	$(RM) *.o
