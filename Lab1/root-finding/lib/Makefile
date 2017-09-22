SOURCES = root_finding.cpp

out = ../../_out

override CPPFLAGS += -MMD -MP -I include

vpath %.d 	$(out)
vpath %.a		$(out)
vpath %.o 	$(out)

$(out)/root_finding_lib.a: $(SOURCES:%.cpp=$(out)/%.o) | $(out)
	ar cr $@ $^

$(out)/%.o: %.cpp | $(out)
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<

-include $(SOURCES:%.cpp=$(out)/%.d)
