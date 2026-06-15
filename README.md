# BitsumNoNag
For those who truly do hate it, this removes the Process Lasso nag/activation notification window.
I highly encourage anybody using this to purchase Process Lasso if they have the funds for it.
If you don't have the money for it, here you go!

Also, it does break the software if you open a window that requires activation, you won't be able to click anywhere on the interface.
Simply restart the Process Lasso process (not the governor) if that happens.

Bitsum can request me to take this down by just opening an issue on this repository.

# Running on start-up
Open Task Scheduler, right-click Task Scheduler Library, click Create Task
Click "Change User or Group", then type in "BUILTIN/Administrators"
Add a new trigger: "At startup"
Add an action: "Start a program", enter the path to wherever you've placed BitsumNoNag.
