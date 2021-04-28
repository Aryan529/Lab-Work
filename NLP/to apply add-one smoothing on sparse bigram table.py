from nltk.stem import PorterStemmer
from nltk.tokenize import sent_tokenize , word_tokenize
sentence = "Hello world, this world is so great, I study in meidcaps, I am a student"
words = word_tokenize(sentence)
ps = PorterStemmer()

for w in words:
    rootWord = ps.stem(w)
    print(rootWord)