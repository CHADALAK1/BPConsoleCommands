# BPConsoleCommands

This is a plug-in that allows Console Commands to be created via Blueprint! No C++ required! This is also networking friendly too! (Server, Client, and Multicast RPC compatible)

How to use:

-Create a Child Blueprint from ConsoleCommands component
-Add any custom event(s) with any RPC types (or none at all if you prefer).
-On your PlayerController blueprint class, there should be a ConsoleCommandsManager component attached. The plug-in should automatically look for any PlayerController class and attach the component. Select the ConsoleCommandsManager and add your created ConsoleCommands object into the Console COmmands Classes list.
-in PIE (or package build, whichever you prefer), Type the console command via the custom event name and execute the command. There is no need to add 'ce' in front of the command.


Please Enjoy! 
