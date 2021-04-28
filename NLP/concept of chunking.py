from nltk import pos_tag , RegexpParser
text ="good morning, i am a student of medicaps university, i am doing engineering"
print("After Split ::",text)
tokens_tag = pos_tag(text)
print("After Tokens ::",tokens_tag)
patterns = """mychunk:{<NN.?>*<VBD.?>*<JJ.?>*<CC>?}"""
chunker = RegexpParser(patterns)
print("After Regex ::",chunker)
output = chunker.parse(tokens_tag)
print("After Chunking ::",output)