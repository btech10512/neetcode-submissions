from typing import List

def get_word_length(list_name):
    return len(list_name)
def sort_words(words: List[str]) -> List[str]:
    words.sort(key=get_word_length,reverse=True)
    return words
    pass

def get_num(number):
    return abs(number)
def sort_numbers(numbers: List[int]) -> List[int]:
    numbers.sort(key=get_num,reverse=False)
    return numbers
    pass


# do not modify below this line
print(sort_words(["cherry", "apple", "blueberry", "banana", "watermelon", "zucchini", "kiwi", "pear"]))

print(sort_numbers([1, -5, -3, 2, 4, 11, -19, 9, -2, 5, -6, 7, -4, 2, 6]))
