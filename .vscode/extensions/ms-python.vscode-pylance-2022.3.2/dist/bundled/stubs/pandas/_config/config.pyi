import sys
from typing import Any, ContextManager, Union, overload
if sys.version_info >= (3, 8):
    from typing import Literal
else:
    from typing_extensions import Literal

def get_option(pat: str) -> Any: ...
def set_option(pat: str, val: object) -> None: ...
def reset_option(pat: str) -> None: ...
@overload
def describe_option(pat: str, _print_desc: Literal[False]) -> str: ...
@overload
def describe_option(pat: str, _print_desc: Union[bool, Literal[True]] = ...) -> None: ...

options: Any = ...

class option_context(ContextManager): ...


