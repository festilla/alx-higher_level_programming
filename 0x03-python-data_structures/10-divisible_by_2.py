#!/usr/bin/python3

def identify_divisible_by_2(input_list=[]):
    new_list = input_list.copy()
    for i in range(0, len(input_list)):
        if input_list[i] % 2 == 0:
           new_list[i] = 1
    else:
           new_list[i] = 0
    return new_list
