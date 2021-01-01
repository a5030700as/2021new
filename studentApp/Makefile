# this is a sameple makefile 

PWD := $(shell pwd)

childrenDir := $(shell find  . -type d )
childrenDir := $(subst ./,,$(childrenDir))
childrenDir := $(subst .,,$(childrenDir))

srcAll := $(foreach dir,$(childrenDir), $(wildcard $(dir)/*.c))

FullSrcName := $(foreach each,$(srcAll), $(addprefix $(PWD)/,$(each)))
OolyName := $(notdir $(FullSrcName))
FullObjName := $(patsubst %.c,%.o,$(FullSrcName))

buildDirOBJ := $(foreach each,$(OolyName), $(addprefix $(PWD)/build/,$(each)))
buildDirOBJ := $(patsubst %.c,%.o,$(buildDirOBJ))
appMod := $(patsubst %.o,%,$(buildDirOBJ))


INC_FLAG := -I./


.PHONY : ALL main objs clean 

ALL : objs main 

objs : $(FullObjName)
%.o : %.c
	gcc -o $(addprefix $(PWD)/build/, $(notdir $(@))) -c $< $(INC_FLAG)
	@echo done! 

main : $(buildDirOBJ)
	gcc -o $(@)  $^ 
	@echo "done version 1"

clean :
	@rm -vf $(PWD)/build/*.o  
	@rm -vf $(PWD)/main
