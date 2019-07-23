# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/21 16:16:19 by tmyrcell          #+#    #+#              #
#    Updated: 2019/07/21 18:37:01 by tmyrcell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := gcc

TARGET:= bsq

SRCDIR:= src
INCDIR:= include
BUILDDIR:= obj
SRCEXT:= c
DEPEXT:= d
OBJEXT:= o

CFLAGS:= -Wall -g
INC:= -I$(INCDIR) 

MKDIR_P:= mkdir -p
SOURCES:= $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS:= $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.$(OBJEXT)))

all: directories $(TARGET)

run: all
	$(shell $(TARGETDIR)/$(TARGET))

remake: cleaner all

init:
	$(MKDIR_P) $(SRCDIR) $(INCDIR)

init_example: init
	$(shell echo "int main() {}" > $(SRCDIR)/main.c)

directories:
	$(MKDIR_P) $(BUILDDIR)

clean: 
	@$(RM) -rf $(TARGET) $(BUILDDIR)

-include $(OBJECTS:.$(OBJEXT)=.$(DEPEXT))

$(TARGET): $(OBJECTS)
	$(CC) -o $(TARGET) $^ 

$(BUILDDIR)/%.$(OBJEXT): $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INC) -c  -o $@ $<

#Non-File Targets
.PHONY: all clean 
