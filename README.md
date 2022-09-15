# Generic-Stack
A Simple Generic Stack Header for C

Pretty self explanatory, uses macro abuse to create quasi-generic stacks

call SETUP_GENERIC_STACK with the type and size:

```
SETUP_GENERIC_STACK(float, 16)
SETUP_GENERIC_STACK(structure, DEFAULT_STACK_SIZE)
```

Then you are free to create and use stacks as such:
```
float_stack* fs = float_stack_create();
float_stack_push(fs, 3.14);
float f1 = float_stack_peek(fs);
float f2 = float_stack_pop(fs);
float_stack_destroy(fs);

structure_stack* ss = structure_stack_create();
structure_stack_push(ss, (structure) {x, y, x});
structure s1 = structure_stack_peek(ss);
structure s2 = structure_stack_pop(ss);
structure_stack_destroy(ss)
```

Feel free to use this, mostly a proof of concept however.
