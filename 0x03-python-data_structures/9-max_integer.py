#!/usr/bin/python3

def find_maximum_value(input_list=[]):
    if len(input_list) == 0:
     return
     maximum_value = input_list[0]
     for i in range(1, len(input_list)):
     if maximum_value < input_list[i]:
     maximum_value = input_list[i]
     else:
     continue
     return maximum_value

