#!/usr/bin/python3

def analyze_sentence(sentence):
    result_data = ()
    if len(sentence) == 0:
    result_data = 0, "None"
    else:
    result_data = len(sentence), sentence[0]
    return result_data
