#include "creator_methods.h"

//make methods 
void * make_queue_queueMod(char * name, size_t maxSize) {
    queue * q = queue_create(maxSize);
    return (void*)q;
}
void * make_stack_stackMod(char * name) {
    struct stack* s = create_stack(); 
    return (void*)s; 
}
void * make_vector_vectorMod(char * name, size_t maxSize) {
    vector_t * v = NULL;
    vector_init(v);
    return (void*)v;
}
void * make_array_arrayMod(char * name, size_t maxSize) {
    int * arr = malloc(maxSize);
    return (void*)arr;
}
void * make_array_dictionaryMod(char * name, size_t maxSize) {
    dictionary_t * d = NULL;
    dictionary_init(d);
    return (void*)d;
}

//destroy methods 
void destroy_queue_queueMod(queue* queue) {
    queue_destroy(queue); 
}
void destroy_stack_stackMod(stack* s) {
    destroy_stack(s); 
}
void destroy_vector_vectorMod(vector_t * vector) {
    vector_destroy(vector);
}
void destroy_array_arrayMod(char* array) {
    free(array); 
}
void destroy_array_dictionaryMod(dictionary_t * d) {
    dictionary_destroy(d);
}

//add methods 
void add_queue_queueMod(queue* queue, void* elem) {
    queue_push(queue, elem); 
}
void add_stack_stackMod(struct stack* s, void* elem) {
    push(s, elem); 
}
void add_vector_vectorMod(vector_t * vector, void* elem) {
    vector_append(vector, elem); 
}
void add_array_arrayMod(char* array) {
    //do nothing -- not necessary  
}
void add_dictionary_dictionaryMod(dictionary_t * d, char *key, void *value) {
    dictionary_add(d, key,value);
}

//remove methods 
void * remove_queue_queueMod(queue* queue) {
    return queue_pull(queue); 
}
void * remove_stack_stackMod(struct stack* s, void* elem) {
    return pop(s); 
}
void * remove_vector_vectorMod(vector_t* vector) {
    vector_remove(vector); 
    return NULL;;
}
void * remove_array_arrayMod(char* array) {
    //do nothing -- not necessary  
    return NULL;
}
void * remove_dictionart_dictionaryMod(dictionary_t * d,char * key) {
    dictionary_remove(d, key);
    return NULL;;
}
