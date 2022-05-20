from keras.preprocessing.text import Tokenizer
 
text = ["find the repeated substrings in the given string"]
'''
text = [
  'There was a man',
  'The man had a dog',
  'The dog and the man walked',
]
'''
# using tokenizer 
model = Tokenizer()
model.fit_on_texts(text)
 
#print keys 
print(f'Key : {list(model.word_index.keys())}')
 
#create bag of words representation 
rep = model.texts_to_matrix(text, mode='count')
print(rep)


# output

'''
Key : ['the', 'find', 'repeated', 'substrings', 'in', 'given', 'string']
[[0. 2. 1. 1. 1. 1. 1. 1.]]

Key : ['man', 'the', 'a', 'dog', 'there', 'was', 'had', 'and', 'walked']
[[0. 1. 0. 1. 0. 1. 1. 0. 0. 0.]
 [0. 1. 1. 1. 1. 0. 0. 1. 0. 0.]
 [0. 1. 2. 0. 1. 0. 0. 0. 1. 1.]]
'''
