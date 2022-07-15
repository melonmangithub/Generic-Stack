#include <stdlib.h>
#include <memory.h>

#define DEFAULT_STACK_SIZE 256

#define SETUP_GENERIC_STACK(type, size) \
\
typedef struct { \
    int position; \
    type data[size]; \
} type ## _stack; \
\
type ## _stack* type ## _stack_create() { \
    type ## _stack* stack = malloc(sizeof(type ## _stack)); \
    memset(stack, 0, sizeof(type ## _stack)); \
    return stack; \
} \
\
void type ## _stack_push(type ## _stack* stack, type element) { \
    stack->data[stack->position++] = element; \
} \
\
type type ## _stack_pop(type ## _stack* stack) { \
    return stack->data[--stack->position]; \
} \
\
type type ## _stack_peek(type ## _stack* stack) { \
    return stack->data[stack->position - 1]; \
} \
\
void type ## _stack_destroy(type ## _stack* stack) { \
    free(stack); \
    stack = NULL; \
}
