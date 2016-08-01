//] Program for the deterministic Push Down Automata to accept the string {anbn} is as follows
 -(q0, a, z0)-'(q0, az0)
(q0, a, az0)'(q0, aaz0)
.
.
.
.
a will keep on inserting..
state of stack wont change until we get b
(q1, b ,a)'(q1, an)
Start discarding b
.
.
.
(q1, b, a)'(q1, ^)
(q1, b, a)'(q1,^)
.
.
.
(q1,^,z0)'(qf, z0)
Qf'final state
Stack is empty
Input tape is empty.

