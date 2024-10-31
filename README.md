! asmt 2 portion functional 
  - implement all necessary classes and header files: Post, Reel, Story, User, Instagram340
  - implement 2 methods in LinkedBag: append and findKthItem

  * at least one instance of inheritance
  * at least one use of polymorphism

---
### Issues:
- did not understand ptr and how it worked; did not understand that the lists were suppose to store ptrs to the memory-allocated obj (difference b/t using *, &, or none)
> I thought that the lists were supoose to store the objects themselves. 
- working with "chrono" library; still don't quite understand how it works, but methods were provided
> The functions and code to calculate the expiration time and time stamp were provided.
---

... onto asmt 3 upgrade and implementation 
  -  change linked bag to using smart ptrs, choose the right type
  -  *friend func* - a) initialize User profile b) initialize Posts (Reel and Story)
       * display user profile info and posts
       * overload both << and >> operator in all classes
       *   ! in Instagram340, only need to overload << to display msg: "Welcome to Instagram 340!"
  - BIG 3 - implement the destructor, the copy constructor, and overload assignment operator
       *   ! include an implementation in all program classes
