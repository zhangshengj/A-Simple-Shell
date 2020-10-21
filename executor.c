#include <stdio.h>
#include "command.h"
#include "executor.h"

static void print_tree(struct tree *t);

int execute(struct tree *t) {
   printf("You must implement me :)\n");

   /* print_tree(t); */ 

   return 0;
}

static void print_tree(struct tree *t) {
   if (t != NULL) {
      print_tree(t->left);

      if (t->conjunction == NONE) {
         printf("NONE: %s, ", t->argv[0]);
      } else {
         printf("%s, ", conj[t->conjunction]);
      }
      printf("IR: %s, ", t->input);
      printf("OR: %s\n", t->output);

      print_tree(t->right);
   }
}

