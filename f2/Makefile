CXXFLAGS = -std=c++11 -pedantic -Werror -Wall -I. -g
CXX = g++
OBJDIR = obj

run: directories $(OBJDIR)/main.o $(OBJDIR)/AustraliaMap.o  $(OBJDIR)/ChileMap.o $(OBJDIR)/factoryMap.o
	$(CXX) $(CXXFLAGS) -o run $(OBJDIR)/main.o $(OBJDIR)/AustraliaMap.o $(OBJDIR)/ChileMap.o $(OBJDIR)/factoryMap.o

directories:
	mkdir -p $(OBJDIR)

$(OBJDIR)/main.o: app/main.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(OBJDIR)/%.o: lib/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJDIR) run
