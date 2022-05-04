# #BB7 Pass by Value vs. Pass By Reference
So what really happens when we pass a parameter to a function? Why the difference?

![PassByReference-Snapshot (Phone)](https://user-images.githubusercontent.com/20911308/166670098-20e22e60-c629-462c-9f6a-b16ee4d9a08d.jpg)  
Video #BB7 link:  

[![JLCPCB-Purple](https://user-images.githubusercontent.com/20911308/159024530-3e083ca1-fea4-4ba9-97d3-a3af3fb979d2.png)](https://www.jlcpcb.com/cem)  

Let's pretend you have a function declared in your Arduino sketch:
```
void doMyStuff(int a, int b) {
...
}
```

When you call that function in your Arduino sketch like this
```
  doMyStuff(myVariable, anotherVariable);
```
the compiler ensures that your variables are **copied** into new, temporary variables and passed to the function.

The function (doMyStuff) can do what it likes with those temporary copies; the original variables do not get changed.

However, if your function was written like this:

```
void doMyStuff(int& a, int& b) {
...
}
```  
the compiler just makes a **reference** to the original variables' memory addresses. That way, your function *can* update the original variables.

This can be very useful; no additional copying of variables and it's quick too.

Just to be clear: the variables you pass into the function are *not* pointers; they are *references*. Whilst the distinction is small, it is much easier to use references in C++ (they are not available in pure C) than pointers.

We'll look at passing pointers to variables and what this means to you as the developer in a future video.

► List of all my videos  
(Special thanks to Michael Kurt Vogel for compiling this)  
http://bit.ly/YouTubeVideoList-RalphBacon

► If you like this video please give it a thumbs up, share it and if you're not already subscribed please consider doing so and joining me on my Arduinite (and other μControllers) journey  

My channel, GitHub and blog are here:  
\------------------------------------------------------------------  
• https://www.youtube.com/RalphBacon  
• https://ralphbacon.blog  
• https://github.com/RalphBacon  
• https://buymeacoffee.com/ralphbacon  
\------------------------------------------------------------------  
