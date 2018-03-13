CXXFLAGS = -std=c++11 -pedantic -Werror -Wall -I. -g
CXX = g++
OBJDIR = obj

run: directories $(OBJDIR)/main.o $(OBJDIR)/AustraliaFlag.o  $(OBJDIR)/ChileFlag.o $(OBJDIR)/factoryFlag.o
	$(CXX) $(CXXFLAGS) -o run $(OBJDIR)/main.o $(OBJDIR)/AustraliaFlag.o $(OBJDIR)/ChileFlag.o $(OBJDIR)/factoryFlag.o

directories:
	mkdir -p $(OBJDIR)

$(OBJDIR)/main.o: app/main.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(OBJDIR)/%.o: lib/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJDIR) run
