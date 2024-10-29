! asmt 2 portion functional 
  - implement all necessary classes and header files: Post, Reel, Story, User, Instagram340
  - implement 2 methods in LinkedBag: append and findKthItem

  * at least one instance of inheritance
  * at least one use of polymorphism

---
### Issues:
- did not understand ptr and how it worked; did not understand that the lists were suppose to store ptrs to the memory-allocated obj (difference b/t using *, &, or none)
- working with "<chrono>" library; still don't quite understand how it works, but methods were provided

---

... onto asmt 3 upgrade and implementation 
  -  change linked bag to using smart ptrs, choose the right type
  -  *friend func* - a) initialize User profile b) initialize Posts (Reel and Story)
       * display user profile info and posts
       * overload both << and >> operator in all classes
       *   ! in Instagram340, only need to overload << to display msg: "Welcome to Instagram 340!"
  - BIG 3 - implement the destructor, the copy constructor, and overload assignment operator
       *   ! include an implementation in all program classes

---
### Issues:
- had problem with re-implementing the program with smart ptrs (first used unique_ptr but cannot figure out, switched to shared_ptr)
> with unique_ptr, I touched the template classes of LinkedBag and Node, which was not suppose to matter because template classes should function with any data type or obj. After I decided to switch to shared_ptr, and rewinded the template classes back to their original state, made some corrections to my Instagram340, User and Main classes, it all worked out. 
