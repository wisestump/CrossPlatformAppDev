out = ../../_out

$(out)/main: $(out)/main.o $(out)/root_finding_lib.a
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -o $@ $^

$(out)/main.o: main.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<
