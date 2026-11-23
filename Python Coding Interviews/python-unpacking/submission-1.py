from typing import List, Tuple

from math import prod
def sum_3_integers(triplet: List[int]) -> int:
    # sum = 0
    # for num in triplet:
    #     sum += num
    # return sum
    # pass
    return sum(triplet)


def compute_volume(box_dimensions: Tuple[int, int, int]) -> int:
    # vol = 1
    # for num in box_dimensions:
    #     vol *= num
    # return vol
    # pass
    return prod(box_dimensions)
  

# do not modify below this line
print(sum_3_integers([1, 2, 3]))
print(sum_3_integers([4, 6, 2]))

print(compute_volume((1, 2, 3)))
print(compute_volume((3, 2, 1)))
print(compute_volume((3, 9, 7)))
