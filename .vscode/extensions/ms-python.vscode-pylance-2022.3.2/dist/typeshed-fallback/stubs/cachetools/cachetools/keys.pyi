from typing import Hashable

__all__ = ("hashkey", "typedkey")

def hashkey(*args: Hashable, **kwargs: Hashable) -> tuple[Hashable, ...]: ...
def typedkey(*args: Hashable, **kwargs: Hashable) -> tuple[Hashable, ...]: ...
