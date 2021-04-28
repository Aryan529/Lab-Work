from collections import Counter
import nltk
text = "we are Indians, we are proud of us."
lower_case = text.lower()
tokens = nltk.word_tokenize(lower_case)
tags = nltk.pos_tag(tokens)
counts = Counter(tag for word, tag in tags)
print(counts)